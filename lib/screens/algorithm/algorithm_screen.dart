

// ignore_for_file: unused_local_variable

import 'package:animate_do/animate_do.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter_svg/svg.dart';
import 'package:tdpapp/models/screen_arguments.dart';

class AlgorithmScreen extends StatefulWidget {
  const AlgorithmScreen({Key? key}) : super(key: key);

  @override
  _AlgorithmScreenState createState() => _AlgorithmScreenState();
}

class _AlgorithmScreenState extends State<AlgorithmScreen> {

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;
    // module reference
    return SafeArea(
      top: true,
      child: Scaffold(
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
      ),
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

  Widget _buildLessonCard(
      BuildContext context, doc, bool isCompleted, bool isBlocked) {
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
                return  Container();
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
              stream: FirebaseFirestore.instance.collection('topics').where('lesson',isEqualTo: FirebaseFirestore.instance.collection('lessons').doc(doc.id)).orderBy('order')
                  .snapshots(),
              builder: (context, AsyncSnapshot<QuerySnapshot> snapshot) {
                if (!snapshot.hasData) {
                  return const Center(
                    child: CircularProgressIndicator(),
                  );
                }
                final List<DocumentSnapshot> docs = snapshot.data!.docs;
                var prevTopicCompleted = true;
                
                return ListView.builder(
                  physics: NeverScrollableScrollPhysics(),
                  scrollDirection: Axis.vertical,
                  shrinkWrap: true,
                  padding: const EdgeInsets.only(left: 25),
                  itemCount: docs.length,
                  itemBuilder: (context, index) {
                  final DocumentSnapshot data = docs[index];
                        
                        var userReferenceTopic = FirebaseFirestore.instance.collection('users') .doc(FirebaseAuth.instance.currentUser?.uid ?? 'null');
                        var isTopicCompleted = false;
                        for (var i = 0; i < data['completedBy'].length; i++) {
                          if (data['completedBy'][i] == userReferenceTopic) {
                            isTopicCompleted = true;
                          }
                        }

                          if (prevTopicCompleted == false && isTopicCompleted == false) {
                            prevTopicCompleted = isTopicCompleted;
                            return _buildTopicBlock(context, data, isTopicCompleted,true);
                          } else {
                            prevTopicCompleted = isTopicCompleted;
                            return _buildTopicBlock(context, data, isTopicCompleted,false);
                          }
                  },
                );
              })
        ],
      ),
    ));
  }

 Widget _buildTopicBlock(BuildContext context, data, bool completed, bool isBlocked) {
    var topicUid = data.id;
    return Row(
      children: [
        data['type'] == 'quiz'
            ? _buildIconType('assets/icons/test.svg', 0xff1e130c, 0xff9a8478)
            : data['type'] == 'text'
                ? _buildIconType('assets/icons/theory2.svg', 0xff6441A5, 0xff6441A5)
                : data['type'] == 'practice'
                    ? _buildIconType('assets/icons/practice.svg', 0xff1e130c, 0xff9a8478) : 
                     _buildIconType('assets/icons/videodemo.svg', 0xff16222A, 0xff3A6073),
        const SizedBox(width: 5),
        FutureBuilder(
            builder: (context, snapshot) {
              if (snapshot.hasData) {
                var p = snapshot.data! as DocumentSnapshot;
                var topicRef = FirebaseFirestore.instance
                    .collection('topics')
                    .doc(topicUid);
                
                return TextButton(
                    onPressed: () {
                      isBlocked
                          // ignore: deprecated_member_use
                          ? ScaffoldMessenger.of(context).showSnackBar(
                            const SnackBar(
                              content: Text('Completa las lecciones anteriores'),
                              backgroundColor: Colors.red,
                            ),
                          ) : Navigator.pushNamed(context, '/topic-content',
                          arguments: ScreenArguments(
                            id: data.id,
                            title: data['title'],
                            description: data['lesson'].id,
                            parentId: data['order'].toString(),
                          )).then((_) => setState(() {}));
                    },
                    child: Row(children: [
                      Text(data['order'].toString() +". " +data['title'] + ' - '),
                      isBlocked
                            ? const Text('Bloqueado',
                              style: TextStyle(color: Colors.red))
                              : completed
                            ? const Text('Completado',
                              style: TextStyle(color: Colors.green,),)
                              : const Text('Por Completar',
                            style: TextStyle(color: Colors.orange,),)
                    ]),
                    style: TextButton.styleFrom(
                      primary: Colors.grey.shade600,
                    ));
              } else {
                return Container();
              }
            },
            future: FirebaseFirestore.instance
                .collection('users')
                .doc(FirebaseAuth.instance.currentUser?.uid)
                .get()),
      ],
    );
  }

  Container _buildIconType(String iconUrl, int color1, int color2) {
    return Container(
              padding: const EdgeInsets.all(6),
              width: 35,
              height: 35,
                child: SvgPicture.asset(
                  iconUrl,
                  alignment: Alignment.center,
                ),
                decoration:  BoxDecoration(
                  borderRadius: const BorderRadius.all(
                    Radius.circular(17)
                  ),
                  gradient: LinearGradient(
                    colors: [
                      Color(color1),
                      Color(color2)
                    ]
                  )
                ),
              );
  }
}

