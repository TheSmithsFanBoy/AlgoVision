import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';
import 'package:tdpapp/widgets/survey_question.dart';

class LessonQuizScreen extends StatelessWidget {
  const LessonQuizScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;

    return Scaffold(
      appBar: AppBar(
        title: Text(args.title),
        centerTitle: true,
      ),
      body:
          /*FutureBuilder<String>(
                  future: surveyId,
                  builder: (context, snapshot) {
                    if (snapshot.hasData &&
                        snapshot.connectionState == ConnectionState.done) {
                      // ignore: avoid_print
                      print(snapshot.data!);
                      return IconButton(
                        icon: const Icon(Icons.description),
                        color: Colors.white,
                        onPressed: () {
                          Navigator.pushNamed(context, '/surveys',
                              arguments: ScreenArguments(
                                id: snapshot.data!,
                                title: '',
                                description: '',
                                parentId: '',
                              ));
                        },
                      );
                    }
                    return const CircularProgressIndicator();
                  },
                ),*/
          StreamBuilder(
              stream: FirebaseFirestore.instance
                  .collection('/lessons/' + args.id + '/quiz')
                  .snapshots(),
              builder: (context, AsyncSnapshot<QuerySnapshot> snapshot) {
                if (!snapshot.hasData) {
                  return const Center(
                    child: CircularProgressIndicator(),
                  );
                }
                final List<DocumentSnapshot> docs = snapshot.data!.docs;
                return _buildList(context, docs, args.id);
              }),
    );
  }

  Widget _buildList(BuildContext context, docs, lessonId) {
    return ListView.builder(
      padding: const EdgeInsets.all(16),
      itemCount: docs.length,
      itemBuilder: (context, index) {
        final DocumentSnapshot doc = docs[index];
        return Column(
          children: [
            _buildCaption(doc),
            const SizedBox(height: 16),
            SurveyQuestion(
              validOption: doc['correctAnswer'],
              options: doc['options'].cast<String>(),
        optionsInvalidText: doc['optionInvalidText'].cast<String>(),
              callback: () => {
                FirebaseFirestore.instance
                    .collection('/lessons/')
                    .doc(lessonId)
                    .update({
                  'completedBy': FieldValue.arrayUnion([
                    FirebaseFirestore.instance
                        .collection('users')
                        .doc(FirebaseAuth.instance.currentUser?.uid ?? 'null')
                  ])
                }),
                FirebaseFirestore.instance
                    .collection('users')
                    .doc(FirebaseAuth.instance.currentUser?.uid ?? 'null')
                    .update({'points': FieldValue.increment(1)}),
                Navigator.of(context)
                    .pushNamedAndRemoveUntil('/home', (route) => false)
              },
            ),
          ],
        );
      },
    );
  }

  _buildCaption(DocumentSnapshot<Object?> doc) {
    return Text(doc['caption'], style: const TextStyle(fontSize: 18));
  }
}
