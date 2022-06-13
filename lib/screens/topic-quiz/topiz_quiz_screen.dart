import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';
import 'package:tdpapp/widgets/lesson_card.dart';

class TopicQuizScreen extends StatelessWidget {
  const TopicQuizScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;
    return Scaffold(
        appBar: AppBar(
          elevation: 0,
          iconTheme: const IconThemeData(color: Colors.black54),
          backgroundColor: Colors.transparent,
        ),
        body: FutureBuilder(
            builder: (context,
                AsyncSnapshot<DocumentSnapshot<Map<String, dynamic>>>
                    snapshot) {
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
                return Column(
                  children: [
                    const SizedBox(height: 20),
                    Center(
                        child: Text(data['title'],
                            style: const TextStyle(
                                fontSize: 20,
                                fontWeight: FontWeight.bold,
                                color: Colors.indigo))),
                    const SizedBox(height: 40),
                    const LessonCard(id: "sdsds"),
                  ],
                );
              }
              return const CircularProgressIndicator();
            },
            future: FirebaseFirestore.instance
                .collection('topics')
                .doc(args.id)
                .get()),
        bottomNavigationBar: BottomAppBar(
          color: Colors.transparent,
          elevation: 0,
          child: Padding(
            padding: const EdgeInsets.all(13.0),
            child: Column(
              children: [
                const SizedBox(height: 20),
                TextButton(
                    style: TextButton.styleFrom(
                      backgroundColor: Colors.yellow.shade600,
                      fixedSize: const Size(30, 30),
                    ),
                    child: const Text('VALIDAR RESPUESTA',
                        style: TextStyle(
                            fontSize: 19,
                            fontWeight: FontWeight.bold,
                            color: Colors.indigo)),
                    onPressed: () {}),
                const SizedBox(height: 20),
              ],
            ),
          ),
        ));
  }
}
