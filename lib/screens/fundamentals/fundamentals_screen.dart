import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';

class FundamentalsScreen extends StatelessWidget {
  const FundamentalsScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;
    // module reference
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

  Widget _buildLessonCard(
      BuildContext context, doc, bool isCompleted, bool isBlocked) {
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
                      Text(
                        doc['description'],
                        style: const TextStyle(
                          fontSize: 16,
                          color: Colors.grey,
                        ),
                      ),
                      const SizedBox(height: 8),
                      Row(
                        children: [
                          Text(
                            "Nivel " + doc['order'].toString() + " - ",
                            style: const TextStyle(
                              fontSize: 16,
                              fontWeight: FontWeight.bold,
                              color: Colors.black54,
                            ),
                          ),
                          isBlocked
                              ? const Text(
                                  "Bloqueado",
                                  style: TextStyle(
                                    fontSize: 16,
                                    color: Colors.red,
                                  ),
                                )
                              : isCompleted
                                  ? const Text(
                                      "Completado",
                                      style: TextStyle(
                                        fontSize: 16,
                                        color: Colors.green,
                                      ),
                                    )
                                  : const Text(
                                      "Por completar",
                                      style: TextStyle(
                                          fontSize: 16, color: Colors.orange),
                                    ),
                        ],
                      ),
                    ],
                  ),
                ),
              ],
            ),
          ),
        ));
  }
}

class MenuData {
  const MenuData(this.icon, this.title, this.route);

  final String title;

  final IconData icon;

  final String route;
}
