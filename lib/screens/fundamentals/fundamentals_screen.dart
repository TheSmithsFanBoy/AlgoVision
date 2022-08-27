

// ignore_for_file: unused_local_variable

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';
import 'package:animate_do/animate_do.dart';

class FundamentalsScreen extends StatefulWidget {
  const FundamentalsScreen({Key? key}) : super(key: key);

  @override
  _FundamentalsScreenState createState() => _FundamentalsScreenState();
}
class _FundamentalsScreenState extends State<FundamentalsScreen> {

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;
    // module reference
    return Scaffold(
      appBar: AppBar(
        title: Text(args.title),
        centerTitle: true,
        backgroundColor: Colors.indigo,
      ),
      body: StreamBuilder(
          stream: FirebaseFirestore.instance
              .collection('lessons')
              .where('module',
                  isEqualTo: FirebaseFirestore.instance
                      .collection('modules')
                      .doc(args.id))
              .orderBy('order')
              .snapshots(),

          builder: (context, AsyncSnapshot<QuerySnapshot> snapshot) {
            if (!snapshot.hasData) {
              return const Center(
                child: CircularProgressIndicator(),
              );
            }

            final List<DocumentSnapshot> docs = snapshot.data!.docs;
            var prevLessonCompleted = true;
            
            return ListView.builder(
              padding: const EdgeInsets.all(16),
              itemCount: docs.length,
              itemBuilder: (context, index) {
                final DocumentSnapshot doc = docs[index];
                var userReference = FirebaseFirestore.instance
                    .collection('users')
                    .doc(FirebaseAuth.instance.currentUser?.uid ?? 'null');
                var isCompleted = false;
                for (var i = 0; i < doc['completedBy'].length; i++) {
                  if (doc['completedBy'][i] == userReference) {
                    isCompleted = true;
                  }
                }

                if (prevLessonCompleted == false && isCompleted == false) {
                  prevLessonCompleted = isCompleted;
                  return _buildLessonCard(context, doc, isCompleted, true);
                } else {
                  prevLessonCompleted = isCompleted;
                  return _buildLessonCard(context, doc, isCompleted, false);
                }
              },
            );
          }),
    );
   
  }

  Future<int> getCount(DocumentReference ref) async {
    // Sum the count of each shard in the subcollection
    final shards = await FirebaseFirestore.instance
        .collection('topics')
        .where('lesson', isEqualTo: ref)
        .get();

    int totalCount = 0;
    for (var doc in shards.docs) {
      totalCount += 1;
    }
    return totalCount;
  }

  Widget _buildLessonCard(BuildContext context, doc, bool isCompleted, bool isBlocked) {
    var nTopics =
        getCount(FirebaseFirestore.instance.collection('lessons').doc(doc.id));

    return InkWell(
        
        child: Card(
          elevation: 4,
          margin: const EdgeInsets.only(bottom: 16),
          child: ExpansionTile(
            textColor: Colors.pink,
            collapsedTextColor: Colors.indigo,
            iconColor: Colors.indigo,
            leading: FadeInLeft(
              child: CircleAvatar(
                backgroundColor: Colors.transparent,
                radius: 30,
                child: Padding(
                  padding: const EdgeInsets.all(8.0),
                  child: Image.network(doc['coverImage']),
                ),
              ),
            ),
            title: FadeInRight(
              child: Text(
                doc['name'],
                style: const TextStyle(
                  fontSize: 18,
                  fontWeight: FontWeight.bold,
                ),
              ),
            ),
            subtitle: FutureBuilder(
                builder: (context, snapshot) {
                  if (!snapshot.hasData) {
                    return const Text('Cargando...');
                  }
                  return FadeInRight(
                    child: Text(
                      '${snapshot.data} tópicos',
                      style: const TextStyle(
                        fontSize: 14,
                        fontWeight: FontWeight.w300,
                      ),
                    ),
                  );
                },
                future: nTopics),
            children: [
              StreamBuilder(
                  stream: FirebaseFirestore.instance
                      .collection('topics')
                      .where('lesson',
                          isEqualTo: FirebaseFirestore.instance
                              .collection('lessons')
                              .doc(doc.id))
                      .orderBy('order')
                      .snapshots(),
                  builder: (context, AsyncSnapshot<QuerySnapshot> snapshot) {
                    if (!snapshot.hasData) {
                      return const Center(
                        child: CircularProgressIndicator(),
                      );
                    }
                    final List<DocumentSnapshot> docs = snapshot.data!.docs;
                    return ListView.builder(
                      scrollDirection: Axis.vertical,
                      shrinkWrap: true,
                      padding: const EdgeInsets.only(left: 40),
                      itemCount: docs.length,
                      itemBuilder: (context, index) {
                        final DocumentSnapshot data = docs[index];
                        return _buildTopicBlock(context, data, doc.id, false);
                      },
                    );
                  })
            ],
          ),
        ));
  }

  Widget _buildTopicBlock(BuildContext context, data, topicId, bool completed) {
    var topicUid = data.id;
    return Row(
      children: [
        Container(
          padding: const EdgeInsets.all(6),
          decoration: BoxDecoration(
            color: Colors.grey.shade300,
            borderRadius: BorderRadius.circular(17),
          ),
          child: data['type'] == 'quiz'
              ? Icon(Icons.quiz,
              color: Colors.grey.shade600, size: 15)
              : data['type'] == 'text'
              ? Icon(Icons.document_scanner,
              color: Colors.grey.shade600, size: 15)
              : data['type'] == 'practice'
              ? Icon(Icons.auto_awesome_mosaic_rounded,
              color: Colors.grey.shade600, size: 15)
              : Icon(Icons.play_circle_outline,
              color: Colors.grey.shade600, size: 15)
        ),
        const SizedBox(width: 10),
        FutureBuilder(
            builder: (context, snapshot) {
              if (snapshot.hasData) {
                var p = snapshot.data! as DocumentSnapshot;
                var topicRef = FirebaseFirestore.instance
                    .collection('topics')
                    .doc(topicUid);
                for (var topic in p['topics']) {
                  if (topic == topicRef) {
                    return TextButton(
                        onPressed: () {
                          Navigator.pushNamed(context, '/topic-content',
                              arguments: ScreenArguments(
                                id: data.id,
                                title: data['title'],
                                parentId: data['order'].toString(),
                                description: data['lesson'].id,
                              )).then((_) => setState(() {}));
                        },
                        child: Row(children: [
                          Text(data['order'].toString() +
                              ". " +
                              data['title'] +
                              ' - '),
                          const Text('Completado',
                              style: TextStyle(color: Colors.green))
                        ]),
                        style: TextButton.styleFrom(
                          primary: Colors.grey.shade600,
                        ));
                  }
                }
                return TextButton(
                    onPressed: () {
                      Navigator.pushNamed(context, '/topic-content',
                          arguments: ScreenArguments(
                            id: data.id,
                            title: data['title'],
                            description: data['lesson'].id,
                            parentId: data['order'].toString(),
                          )).then((_) => setState(() {}));
                    },
                    child: Row(children: [
                      Text(data['order'].toString() +
                          ". " +
                          data['title'] +
                          ' - '),
                      const Text('Por completar',
                          style: TextStyle(color: Colors.orange))
                    ]),
                    style: TextButton.styleFrom(
                      primary: Colors.grey.shade600,
                    ));
              } else {
                return const Text("Cargando...");
              }
            },
            future: FirebaseFirestore.instance
                .collection('users')
                .doc(FirebaseAuth.instance.currentUser?.uid)
                .get()),
      ],
    );
  }
}
