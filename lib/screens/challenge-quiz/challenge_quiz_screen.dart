import 'package:cached_network_image/cached_network_image.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';
import 'package:tdpapp/widgets/survey_question.dart';

import 'challengeBurbuja.dart';

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
            _buildCaption(data, challengeId, context),
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

  _buildCaption(doc, challengeId, context) {
    return Padding(
      padding: const EdgeInsets.all(8.0),
      child: Column(
        children: [
          
          Container( 
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: const LinearGradient(
              colors:  [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops:  [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                
                Container(
                  padding: const EdgeInsets.symmetric(horizontal: 15).copyWith(top: 10, bottom: 10),
                  child: Text(doc['caption'], textAlign: TextAlign.justify, style: const TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
                
                
              ],
            ),
          ),
        ),
       
          const SizedBox(height: 15,),
  (challengeId =='ZSVasoR0gryekm9R9hiy' ||  challengeId =='UQcQ07Yz9Y6OqICTXjAJ' ||  challengeId =='WhkXeCwXtyPWMaViuaXU'  ||  challengeId =='hcntfI66AzLg8TczMP1e' 

  || challengeId =='3Syf0P8WjHXJOslc505S' ||  challengeId =='Nk3tfGcxM6Zb4eZIolL2' ||  challengeId =='diDjJvgnBuRivzllV5vF'  ||  challengeId =='uxFkxUQbzI4nWZ5dsCUD'  
  
 ||challengeId == '3s2EI6h6bX7FflgyFcIL' || challengeId == 'E4Y4NisTZHCjKlRoCIkk' || challengeId == 'rdek7F8mvCYxEduTFzVZ' || challengeId== 'uIh8T7XkwLPicVSizaZu'  
  
  ) 
          ? ElevatedButton(
            style: ElevatedButton.styleFrom(
              backgroundColor: Colors.indigo
            ),
            onPressed: (){
              Navigator.push(
                context, 
                MaterialPageRoute(builder: (context) =>  BurbujaRetoPage(challengeId)),
              );
          }, child: Text(
            challengeId =='ZSVasoR0gryekm9R9hiy' ||  challengeId =='UQcQ07Yz9Y6OqICTXjAJ' ||  challengeId =='WhkXeCwXtyPWMaViuaXU'  ||  challengeId =='hcntfI66AzLg8TczMP1e' ? 'Visualizar Ordenamiento Burbuja' : 
            
            challengeId =='3s2EI6h6bX7FflgyFcIL' ||  challengeId =='E4Y4NisTZHCjKlRoCIkk' ||  challengeId =='rdek7F8mvCYxEduTFzVZ'  ||  challengeId =='uIh8T7XkwLPicVSizaZu' ? 
            'Visualizar Ordenamiento por Inserción' 

            : 'Visualizar Ordenamiento por Selección'
            
            )) : Container(),
          (challengeId =='ZSVasoR0gryekm9R9hiy' ||  challengeId =='UQcQ07Yz9Y6OqICTXjAJ' ||  challengeId =='WhkXeCwXtyPWMaViuaXU'  ||  challengeId =='hcntfI66AzLg8TczMP1e' 
  || challengeId =='3Syf0P8WjHXJOslc505S' ||  challengeId =='Nk3tfGcxM6Zb4eZIolL2' ||  challengeId =='diDjJvgnBuRivzllV5vF' ||  challengeId =='uxFkxUQbzI4nWZ5dsCUD' 
  || challengeId =='3s2EI6h6bX7FflgyFcIL' ||  challengeId =='E4Y4NisTZHCjKlRoCIkk' ||  challengeId =='rdek7F8mvCYxEduTFzVZ'  ||  challengeId =='uIh8T7XkwLPicVSizaZu'
  )  ? 
          Container() : Container(
            padding: const EdgeInsets.symmetric(horizontal: 10).copyWith(top: 10, bottom: 10),
            decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: const LinearGradient(
              colors:  [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops:  [0.3, 0.9],
            )
          ),
            child: ClipRRect(
              borderRadius: BorderRadius.circular(15),
              child: CachedNetworkImage(
                imageUrl :doc['imageChallenge'],
                placeholder: (context, url) => const Center(child: Text('Cargando'),),
              ),
            ),
          )
        ],
      ),
    );
  }
}
