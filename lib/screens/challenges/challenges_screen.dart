// ignore_for_file: deprecated_member_use

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';

class ChallengesScreen extends StatelessWidget {
  const ChallengesScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Retos'),
        centerTitle: true,
        backgroundColor: Colors.blueGrey,
        flexibleSpace: Container(
          decoration: const BoxDecoration(
            gradient: LinearGradient(
                begin: Alignment.topRight,
                end: Alignment.bottomLeft,
                colors: <Color>[
                  Color.fromARGB(255, 218, 78, 162),
                  Colors.blue,
                ]),
          ),
        ),
      ),
      body: StreamBuilder(
          stream: FirebaseFirestore.instance
              .collection('challenges')
              .orderBy('points', descending: false)
              .snapshots(),
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
                final DocumentSnapshot doc = docs[index];
                var isCompleted = false;
                if (doc['completedBy'] != null) {
                  isCompleted = doc['completedBy'].contains(FirebaseFirestore
                      .instance
                      .collection('users')
                      .doc(FirebaseAuth.instance.currentUser?.uid ?? 'null'));
                }
                return _buildChallengeCard(context, doc, index, isCompleted);
              },
            );
          }),
    );
  }

  Widget _buildChallengeCard(BuildContext context,
      DocumentSnapshot<Object?> doc, int index, bool completed) {
    return InkWell(
      onTap: () {
        completed
            ? Scaffold.of(context).showSnackBar(
                const SnackBar(
                  content: Text('Ya has completado este reto'),
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
            Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Row(
                  children: [
                    Text("RETO #" + (index + 1).toString() + ": ",
                        style: const TextStyle(
                            fontSize: 17, fontWeight: FontWeight.w700)),

                    Text(doc['title'].toString().toUpperCase(),
                        style: const TextStyle(
                            fontSize: 17, fontWeight: FontWeight.w700)),
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
                            color: Colors.pink)),
                    const Text(" - ",
                        style: TextStyle(
                            fontSize: 16,
                            fontWeight: FontWeight.w600,
                            color: Colors.black)),
                    completed
                        ? const Text('Completado',
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
          ],
        ),
      ),
    );
  }
}

