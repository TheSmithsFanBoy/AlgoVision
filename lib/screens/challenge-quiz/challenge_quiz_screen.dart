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

    return SafeArea(
      top: true,
      child: Scaffold(
          appBar: AppBar(
            backgroundColor: Colors.indigo,
            title: Text(args.title),
            centerTitle: true,
           automaticallyImplyLeading: false,
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
              })),
    );
  }

  Widget _buildSurvey(BuildContext context, data, challengeId) {
    return SingleChildScrollView(
      child: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 15.0).copyWith(top: 15),
        child: Column(
          children: [
            _buildCaption(data),
            const SizedBox(height: 16),
            SurveyQuestion(
              validOption: data['correctAnswer'],
              options: data['options'].cast<String>(),
          optionsInvalidText: data['optionInvalidText'].cast<String>(),
          callback2: () => {
            FirebaseFirestore.instance.collection('challenges').doc(challengeId).
                update({
                  'completedBy': FieldValue.arrayUnion([
                    FirebaseFirestore.instance
                        .collection('users')
                        .doc(FirebaseAuth.instance.currentUser?.uid ?? 'null')
                  ])
                }),
                FirebaseFirestore.instance
                    .collection('users')
                    .doc(FirebaseAuth.instance.currentUser?.uid ?? 'null')
                    .update({'points': FieldValue.increment(data['points0'])}),
                Navigator.of(context).pushReplacementNamed('/challenges')
          },
              callback: () => {
                FirebaseFirestore.instance.collection('challenges').doc(challengeId).
                update({
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
                Navigator.of(context).pushReplacementNamed('/challenges')
              },
            ),
          ],
        ),
      ),
    );
  }

  _buildCaption(doc) {
    return Padding(
      padding: const EdgeInsets.all(8.0),
      child: Column(
        children: [
          Text(doc['caption'],
          textAlign: TextAlign.justify,
          style:
              const TextStyle(wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14), 
            ),
          const SizedBox(height: 15,),
          ClipRRect(
            borderRadius: BorderRadius.circular(15),
            child: Image.network(
              doc['imageChallenge']
            ),
          )
        ],
      ),
    );
  }
}
