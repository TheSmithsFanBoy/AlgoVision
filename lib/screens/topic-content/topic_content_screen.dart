import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';
import 'package:tdpapp/widgets/survey_question.dart';

class TopicContentScreen extends StatefulWidget {
  const TopicContentScreen({Key? key}) : super(key: key);

  @override
  State<TopicContentScreen> createState() => _TopicContentScreenState();
}

class _TopicContentScreenState extends State<TopicContentScreen> {
  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;
    debugPrint(args.description);
    return Scaffold(
        appBar: AppBar(
          elevation: 0,
          iconTheme: const IconThemeData(color: Colors.black54),
          backgroundColor: Colors.transparent,
        ),
        body: FutureBuilder(
          future: FirebaseFirestore.instance
              .collection('topics')
              .doc(args.id)
              .get(),
          builder: (context,
              AsyncSnapshot<DocumentSnapshot<Map<String, dynamic>>> snapshot) {
            if (snapshot.hasData &&
                snapshot.connectionState == ConnectionState.done) {
              if (!snapshot.hasData) {
                return const Center(
                  child: CircularProgressIndicator(),
                );
              }
              final Map<String, dynamic>? data = snapshot.data?.data();
              if (data == null) {
                return const Text('data is null');
              }
              return SingleChildScrollView(
                child: Column(
                  children: [
                    const SizedBox(height: 15),
                    Center(
                        child: Text(data['title'],
                            style: const TextStyle(
                                fontSize: 20,
                                fontWeight: FontWeight.bold,
                                color: Colors.indigo))),
                    const SizedBox(height: 30),
                    Padding(
                      padding: const EdgeInsets.all(10.0),
                      child: _buildContent(context, data),
                    ),
                  ],
                ),
              );
            }
            return const CircularProgressIndicator();
          },
        ),
        bottomNavigationBar: BottomAppBar(
          color: Colors.transparent,
          elevation: 0,
          child: Padding(
            padding: const EdgeInsets.all(13.0),
            child: FutureBuilder(
              future: FirebaseFirestore.instance
                  .collection('topics')
                  .where('order', isEqualTo: int.parse(args.parentId) + 1)
                  .get(),
              builder: (context, snapshot) {
                if (snapshot.hasData && snapshot.data != null) {
                  var p = (snapshot.data!) as QuerySnapshot;
                  if (p.docs.isNotEmpty) {
                    return TextButton(
                        style: TextButton.styleFrom(
                          backgroundColor: Colors.yellow.shade600,
                          fixedSize: const Size(30, 30),
                        ),
                        child: const Text('SIGUIENTE TÓPICO',
                            style: TextStyle(
                                fontSize: 19,
                                fontWeight: FontWeight.bold,
                                color: Colors.indigo)),
                        onPressed: () {
                          FirebaseFirestore.instance
                              .collection('users')
                              .doc(FirebaseAuth.instance.currentUser!.uid)
                              .update({
                            'topics': FieldValue.arrayUnion([
                              FirebaseFirestore.instance
                                  .collection('topics')
                                  .doc(args.id)
                            ])
                          });

                          Navigator.pushReplacementNamed(
                              context, '/topic-content',
                              arguments: ScreenArguments(
                                  id: p.docs[0].id,
                                  parentId:
                                      (int.parse(args.parentId) + 1).toString(),
                                  title: "",
                                  description: p.docs[0]['lesson'].id));
                        });
                  } else {
                    return TextButton(
                        style: TextButton.styleFrom(
                          backgroundColor: Colors.yellow.shade600,
                          fixedSize: const Size(30, 30),
                        ),
                        child: const Text('FINALIZAR LECCIÓN',
                            style: TextStyle(
                                fontSize: 19,
                                fontWeight: FontWeight.bold,
                                color: Colors.indigo)),
                        onPressed: () {
                          var lessonRef = FirebaseFirestore.instance
                              .collection('lessons')
                              .doc(args.description);
                          debugPrint(args.description);
                          // update progress
                          FirebaseFirestore.instance
                              .collection('users')
                              .doc(FirebaseAuth.instance.currentUser!.uid)
                              .update({
                            'topics': FieldValue.arrayUnion([
                              FirebaseFirestore.instance
                                  .collection('topics')
                                  .doc(args.id)
                            ])
                          });
                          // assign challenge
                          var challenges = FirebaseFirestore.instance
                              .collection('challenges')
                              .where('lesson', isEqualTo: lessonRef)
                              .get();
                          challenges.then((value) {
                            if (value.docs.isNotEmpty) {
                              var challenge = value.docs[0];
                              var challengeRef = FirebaseFirestore.instance
                                  .collection('challenges')
                                  .doc(challenge.id);
                              FirebaseFirestore.instance
                                  .collection('users')
                                  .doc(FirebaseAuth.instance.currentUser!.uid)
                                  .update({
                                'challenges':
                                    FieldValue.arrayUnion([challengeRef])
                              });
                            }
                          });
                          // assign medal
                          var medals = FirebaseFirestore.instance
                              .collection('medals')
                              .where('lesson', isEqualTo: lessonRef)
                              .get();
                          medals.then((value) {
                            if (value.docs.isNotEmpty) {
                              var medal = value.docs[0];
                              var medalRef = FirebaseFirestore.instance
                                  .collection('medals')
                                  .doc(medal.id);
                              FirebaseFirestore.instance
                                  .collection('users')
                                  .doc(FirebaseAuth.instance.currentUser!.uid)
                                  .update({
                                'medals': FieldValue.arrayUnion([medalRef])
                              });
                            }
                          });

                          Navigator.pop(context);
                        });
                  }
                } else {
                  return const Center(child: Text("Cargando..."));
                }
              },
            ),
          ),
        ));
  }

  Widget _buildContent(BuildContext context, Map<String, dynamic> data) {
    switch (data['type']) {
      case 'text':
        return Text(data['content'], style: const TextStyle(fontSize: 17));
      case 'quiz':
        return Column(children: [
          Text(data['content'], style: const TextStyle(fontSize: 17)),
          const SizedBox(height: 40),
          const Text("Selecciona una respuesta y presiona en validar...",
              style: TextStyle(fontSize: 15)),
          SurveyQuestion(
              validOption: data['validOption'], options: data['options'])
        ]);
      default:
        return const Text('data');
    }
  }
}
