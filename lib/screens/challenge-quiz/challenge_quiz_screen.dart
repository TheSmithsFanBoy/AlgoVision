import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';
import 'package:tdpapp/widgets/survey_question.dart';

class ChallengeQuizScreen extends StatelessWidget {
  const ChallengeQuizScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;

    return Scaffold(
        appBar: AppBar(
          title: Text(args.title),
          centerTitle: true,
        ),
        body: FutureBuilder(
            future: FirebaseFirestore.instance
                .collection('challenges')
                .doc(args.id)
                .get(),
            builder: (BuildContext context,
                AsyncSnapshot<DocumentSnapshot<Map<String, dynamic>>>
                    snapshot) {
              if (!snapshot.hasData) {
                return const Center(
                  child: CircularProgressIndicator(),
                );
              }
              final Map<String, dynamic>? data = snapshot.data?.data();
              if (data == null) {
                return const Center(
                  child: CircularProgressIndicator(),
                );
              }

              return _buildSurvey(context, data, args.id);
            }));
  }

  Widget _buildSurvey(BuildContext context, data, challengeId) {
    return SingleChildScrollView(
      child: Column(
        children: [
          _buildCaption(data),
          const SizedBox(height: 16),
          SurveyQuestion(
            validOption: data['correctAnswer'],
            options: data['options'].cast<String>(),
        optionsInvalidText: data['optionInvalidText'].cast<String>(),
            callback: () => {
              FirebaseFirestore.instance
                  .collection('challenges')
                  .doc(challengeId)
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
                  .update({'points': FieldValue.increment(data['points'])}),
              Navigator.of(context)
                  .pushNamedAndRemoveUntil('/home', (route) => false)
            },
          ),
        ],
      ),
    );
  }

  _buildCaption(doc) {
    return Padding(
      padding: const EdgeInsets.all(8.0),
      child: Column(
        children: [
          Text(doc['caption'], style: const TextStyle(fontSize: 18)),
          SizedBox(height: 10,),
          Container(
            child: Image.asset(
              'assets/icons/bloque.png'
            ),
          )
        ],
      ),
    );
  }
}
