import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../models/screen_arguments.dart';

class AlgorithmBody extends StatefulWidget {
  const AlgorithmBody({Key? key}) : super(key: key);

  @override
  State<AlgorithmBody> createState() => _AlgorithmBodyState();
}

class _AlgorithmBodyState extends State<AlgorithmBody> {
  @override
  Widget build(BuildContext context) {
    //var streamModules = Provider.of(context);
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;
    // ignore: unused_local_variable
    final List<MenuData> menu = [
      // https://www.flaticon.es/icono-gratis/sistema-de-gestion-de-contenidos_2535488?related_id=2535488
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535476.png",
        title: "BUBBLE SORT",
        description:
            "El ordenamiento de burbuja es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento...",
        route: "/algorithm-details",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535476.png",
        title: "BUBBLE SORT",
        description:
            "El ordenamiento de burbuja es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento...",
        route: "/algorithm-details",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535476.png",
        title: "BUBBLE SORT",
        description:
            "El ordenamiento de burbuja es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento...",
        route: "/algorithm-details",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535476.png",
        title: "BUBBLE SORT",
        description:
            "El ordenamiento de burbuja es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento...",
        route: "/algorithm-details",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535476.png",
        title: "BUBBLE SORT",
        description:
            "El ordenamiento de burbuja es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento...",
        route: "/algorithm-details",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535476.png",
        title: "BUBBLE SORT",
        description:
            "El ordenamiento de burbuja es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento...",
        route: "/algorithm-details",
      ),
    ];
    /*return ListView.builder(
      padding: const EdgeInsets.all(16),
      itemCount: menu.length,
      itemBuilder: (context, index) {
        final MenuData item = menu[index];
        return InkWell(
            onTap: () {
              Navigator.pushNamed(context, item.route);
            },
            child: Card(
              elevation: 4,
              margin: const EdgeInsets.only(bottom: 16),
              child: Padding(
                padding: const EdgeInsets.all(10),
                child: Row(
                  children: [
                    Image.network(
                      item.coverImg,
                      width: 90,
                      height: 90,
                    ),
                    const SizedBox(width: 16),
                    Expanded(
                      child: Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Text(
                            item.title,
                            style: const TextStyle(
                              fontSize: 18,
                              fontWeight: FontWeight.bold,
                            ),
                          ),
                          const SizedBox(height: 8),
                          Text(
                            item.description,
                            style: const TextStyle(
                              fontSize: 16,
                              color: Colors.grey,
                            ),
                          ),
                        ],
                      ),
                    ),
                  ],
                ),
              ),
            ));
      },
    );*/
    /*return StreamBuilder(
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
          return ListView.builder(
            padding: const EdgeInsets.all(16),
            itemCount: docs.length,
            itemBuilder: (context, index) {
              final DocumentSnapshot doc = docs[index];
              return InkWell(
                  onTap: () {
                    Navigator.pushNamed(context, doc['route']);
                  },
                  child: Card(
                    elevation: 4,
                    margin: const EdgeInsets.only(bottom: 16),
                    child: Padding(
                      padding: const EdgeInsets.all(10),
                      child: Row(
                        children: [
                          Image.network(
                            doc['coverImage'],
                            width: 90,
                            height: 90,
                          ),
                          const SizedBox(width: 16),
                          Expanded(
                            child: Column(
                              crossAxisAlignment: CrossAxisAlignment.start,
                              children: [
                                Text(
                                  doc['name'],
                                  style: const TextStyle(
                                    fontSize: 18,
                                    fontWeight: FontWeight.bold,
                                  ),
                                ),
                                const SizedBox(height: 8),
                                Text(
                                  doc['name'],
                                  style: const TextStyle(
                                    fontSize: 16,
                                    color: Colors.grey,
                                  ),
                                ),
                              ],
                            ),
                          ),
                        ],
                      ),
                    ),
                  ));
            },
          );
        });*/
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
          child: Image.network(data['image'],
            color: Colors.grey.shade600, width: 15, height: 15,),
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
                          if(data['type'] == 'video'){
                            Navigator.of(context).pushNamed('/lesson-video',
                                arguments: ScreenArguments(
                                  id: data.id,
                                  title: data['title'],
                                  parentId: data['order'].toString(),
                                  description: data['lesson'].id,
                                ));
                          }
                          /*else (data['type'] == 'practice'){
                            Navigator.pushNamed(context, '/lesson-practice',
                                arguments: ScreenArguments(
                                  id: data.id,
                                  title: data['title'],
                                  parentId: data['order'].toString(),
                                  description: data['lesson'].id,
                                ));
                          }*/
                          else{
                          Navigator.pushNamed(context, '/topic-content',
                              arguments: ScreenArguments(
                                id: data.id,
                                title: data['title'],
                                parentId: data['order'].toString(),
                                description: data['lesson'].id,
                              ));}
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
                      if(data['type'] == 'video'){
                        Navigator.of(context).pushNamed('/lesson-video',
                            arguments: ScreenArguments(
                              id: data.id,
                              title: data['title'],
                              parentId: data['order'].toString(),
                              description: data['lesson'].id,
                            ));
                      }
                      /*else (data['type'] == 'practice'){
                            Navigator.pushNamed(context, '/lesson-practice',
                                arguments: ScreenArguments(
                                  id: data.id,
                                  title: data['title'],
                                  parentId: data['order'].toString(),
                                  description: data['lesson'].id,
                                ));
                          }*/
                      else{
                        Navigator.pushNamed(context, '/topic-content',
                            arguments: ScreenArguments(
                              id: data.id,
                              title: data['title'],
                              parentId: data['order'].toString(),
                              description: data['lesson'].id,
                            ));}
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

class MenuData {
  const MenuData(
      {required this.coverImg,
      required this.title,
      required this.description,
      required this.route});

  final String coverImg;

  final String title;

  final String description;

  final String route;
}
