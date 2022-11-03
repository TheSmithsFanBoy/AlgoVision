// ignore_for_file: deprecated_member_use

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';

class ChallengesScreen extends StatelessWidget {
  const ChallengesScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return WillPopScope(
      onWillPop: () async => false,
      child: SafeArea(
        top: true,
        child: Scaffold(
          appBar: AppBar(
            leading: GestureDetector(
              onTap: (){
                Navigator.pushNamed(context, '/home');
              },
              child: const Icon(Icons.arrow_back)
            )
            ,
            automaticallyImplyLeading: false,
            title: const Text('Retos'),
            centerTitle: true,
            backgroundColor: Colors.indigo
          ),
          body: StreamBuilder(
              stream: FirebaseFirestore.instance.collection('challenges').orderBy('pos', descending: false).snapshots(),
              
              builder: (context, AsyncSnapshot<QuerySnapshot> snapshot) {
                if (!snapshot.hasData) {
                  return const Center(
                    child: CircularProgressIndicator(),
                  );
                }
          
                
                
                final List<DocumentSnapshot> docs = snapshot.data!.docs;
          
                
                
                return ListView.builder(
                  padding: const EdgeInsets.all(16),
                  itemCount: docs.length,
                  itemBuilder: (context, index) {
                    final DocumentSnapshot doc = docs[index]; //each doc
                    var isCompleted = false;
                    if (doc['completedBy'] != null) {
                      isCompleted = doc['completedBy'].contains(FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null'));
                    }
          
                    
                    var userReferenceTopic = FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null');
                   
          
                    for (var i = 0; i < doc['lessonDone'].length; i++) {
                      if (doc['lessonDone'][i]  ==  userReferenceTopic) {
                        return  _buildChallengeCard(context, doc, index, isCompleted);
                    }
                    }
                    
          
                    return Container();
                    
                  },
                );
              }),
        ),
      ),
    );
  }

  Widget _buildChallengeCard(BuildContext context, DocumentSnapshot<Object?> doc, int index, bool completed) {
    return InkWell(
      onTap:   () {
        completed
            ? ScaffoldMessenger.of(context).showSnackBar(
                const SnackBar(
                  content: Text('Ya has realizado este reto'),
                  backgroundColor: Colors.red,
                ),
              )
            : Navigator.pushNamed(context, '/challenge-quiz',
                arguments: ScreenArguments(
                    id: doc.id,
                    title: doc['title'],
                    description: "description",
                    parentId: "parentId"));
      },
      child: ClipRRect(
        child: Card(
          elevation: 5,
          child: Row(
            children: [
              Image.network(
                doc['coverImage'],
                width: 90,
                height: 90,
              ),
              const SizedBox(
                width: 15,
              ),
              Flexible(
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Row(
                      children: [
                        Text("RETO #" + (index + 1).toString() + ": ",
                            style: const TextStyle(
                                fontSize: 17, fontWeight: FontWeight.w700)),
                        Expanded(
                          child: Text(doc['title'].toString().toUpperCase(),
                          overflow: TextOverflow.ellipsis,
                              style: const TextStyle(
                                  fontSize: 17, fontWeight: FontWeight.w700)),
                        ),
                      ],
                    ),
                    Text(doc['description'],
                        style: const TextStyle(
                            fontSize: 16, fontWeight: FontWeight.w400)),
                    Row(
                      children: [
                        Text(doc['points'].toString() + " puntos",
                            style: const TextStyle(
                                fontSize: 16,
                                fontWeight: FontWeight.w600,
                                color: Colors.indigo)),
                        const Text(" - ",
                            style: TextStyle(
                                fontSize: 16,
                                fontWeight: FontWeight.w600,
                                color: Colors.black)),
                        completed
                            ? const Text('Realizado',
                                style: TextStyle(
                                    fontSize: 16,
                                    fontWeight: FontWeight.w600,
                                    color: Colors.green))
                            : const Text('Disponible',
                                style: TextStyle(
                                    fontSize: 16,
                                    fontWeight: FontWeight.w600,
                                    color: Colors.orange)),
                      ],
                    )
                  ],
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
