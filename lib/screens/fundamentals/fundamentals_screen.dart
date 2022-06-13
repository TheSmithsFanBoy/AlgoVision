import 'dart:ffi';

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';

class FundamentalsScreen extends StatefulWidget {
  const FundamentalsScreen({Key? key}) : super(key: key);

  @override
  State<FundamentalsScreen> createState() => _FundamentalsScreenState();
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
    /*
    const List<MenuData> menu = [
      MenuData(
          Icons.move_to_inbox_outlined, 'Condicional "If"', "/topic-details"),
      MenuData(
          Icons.move_to_inbox_outlined, 'Condicional "If"', "/topic-details"),
    ];
    return Scaffold(
        appBar: AppBar(
          title: Text(args.title),
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
        body: Container(
          padding: const EdgeInsets.all(12.0),
          child: GridView.builder(
            shrinkWrap: true,
            physics: const BouncingScrollPhysics(),
            itemCount: menu.length,
            gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
                childAspectRatio: 1,
                crossAxisCount: 2,
                crossAxisSpacing: 4.0,
                mainAxisSpacing: 4.0),
            itemBuilder: (BuildContext context, int index) {
              return Card(
                elevation: 1.9,
                shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(8.0)),
                child: InkWell(
                  onTap: () {
                    Navigator.pushNamed(context, menu[index].route);
                  },
                  child: Column(
                    mainAxisAlignment: MainAxisAlignment.center,
                    crossAxisAlignment: CrossAxisAlignment.center,
                    children: <Widget>[
                      Icon(
                        menu[index].icon,
                        size: 80,
                      ),
                      const SizedBox(height: 20),
                      Text(
                        menu[index].title,
                        textAlign: TextAlign.center,
                        style: const TextStyle(
                            fontSize: 14,
                            color: Colors.black87,
                            fontWeight: FontWeight.w300),
                      )
                    ],
                  ),
                ),
              );
            },
          ),
        ));
    */
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
        onTap: () {
          isBlocked
              ? Scaffold.of(context).showSnackBar(
                  const SnackBar(
                    content: Text('Completa las lecciones anteriores'),
                    backgroundColor: Colors.red,
                  ),
                )
              : Navigator.pushNamed(context, "/topic-details",
                  arguments: ScreenArguments(
                      id: doc.id,
                      title: doc['name'],
                      description: doc['description'],
                      parentId: ''));
        },
        child: Card(
          elevation: 4,
          margin: const EdgeInsets.only(bottom: 16),
          child: ExpansionTile(
            textColor: Colors.pink,
            collapsedTextColor: Colors.indigo,
            iconColor: Colors.indigo,
            leading: Container(
              padding: const EdgeInsets.all(7),
              decoration: BoxDecoration(
                gradient: LinearGradient(
                    begin: Alignment.topRight,
                    end: Alignment.bottomLeft,
                    colors: <Color>[Colors.orange.shade300, Colors.pink]),
                borderRadius: BorderRadius.circular(30),
              ),
              child: const Icon(Icons.bookmarks_rounded, color: Colors.white),
            ),
            title: Text(
              doc['name'],
              style: const TextStyle(
                fontSize: 18,
                fontWeight: FontWeight.bold,
              ),
            ),
            subtitle: FutureBuilder(
                builder: (context, snapshot) {
                  if (!snapshot.hasData) {
                    return const Text('Cargando...');
                  }
                  return Text(
                    '${snapshot.data} tópicos',
                    style: const TextStyle(
                      fontSize: 14,
                      fontWeight: FontWeight.w300,
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
          child: /*Image.network(data['image'],
              color: Colors.grey.shade600, width: 15, height: 15,),*/
          ImageIcon(AssetImage(
            data['asset']),
            size: 20,),
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
                              ));
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
                          ));
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
