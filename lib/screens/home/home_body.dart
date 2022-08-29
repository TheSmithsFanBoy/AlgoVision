import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';

class HomeBody extends StatelessWidget {
  const HomeBody({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    
    return StreamBuilder(
        stream: FirebaseFirestore.instance.collection('modules').snapshots(),
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
              return GestureDetector(
                  onTap: () {
                    switch (doc['name']) {
                      case "Algoritmos Ordenamiento":
                        {

                          Navigator.pushNamed(context, "/algorithm",
                              arguments: ScreenArguments(
                                  id: doc.id,
                                  title: doc['name'],
                                  description: '',
                                  parentId: ''));
                        }
                        break;
                      case "Fundamentos de Programación":
                        {

                          Navigator.pushNamed(context, "/fundamentals",
                              arguments: ScreenArguments(
                                  id: doc.id,
                                  title: doc['name'],
                                  description: '',
                                  parentId: ''));
                        }
                        break;
                      default:
                        {
                        }
                    }
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
                                  overflow: TextOverflow.ellipsis,
                                  style: const TextStyle(
                                    fontSize: 17,
                                    fontWeight: FontWeight.bold,
                                  ),
                                ),
                                const SizedBox(height: 8),
                                Text(
                                  doc['description'],
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
        });
   
  }
}

