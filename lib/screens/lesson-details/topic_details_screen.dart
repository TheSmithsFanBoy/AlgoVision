import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';
import 'package:flutter_html/flutter_html.dart';

class TopicDetailsScreen extends StatelessWidget {
  const TopicDetailsScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;

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
              .collection('/lessons/' + args.id + '/blocks')
              .snapshots(),
          builder: (context, AsyncSnapshot<QuerySnapshot> snapshot) {
            if (!snapshot.hasData) {
              return const Center(
                child: CircularProgressIndicator(),
              );
            }
            final List<DocumentSnapshot> docs = snapshot.data!.docs;
            return _buildList(context, docs);
          }),
      bottomNavigationBar: BottomAppBar(
        color: Colors.blue,
        child: SizedBox(
          height: 50,
          child: Row(
              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
              children: <Widget>[
                FutureBuilder(
                    future: FirebaseFirestore.instance
                        .collection('lessons')
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
                      var userReference = FirebaseFirestore.instance
                          .collection('users')
                          .doc(
                              FirebaseAuth.instance.currentUser?.uid ?? 'null');
                      for (var i = 0; i < data['completedBy'].length; i++) {
                        if (data['completedBy'][i] == userReference) {
                          return const Text(
                            '¡En hora buena! Ya has completado esta lección',
                            style: TextStyle(color: Colors.white),
                          );
                        }
                      }
                      return IconButton(
                        icon: const Icon(Icons.description),
                        color: Colors.white,
                        onPressed: () {
                          Navigator.pushNamed(context, '/lesson-quiz',
                              arguments: ScreenArguments(
                                id: args.id,
                                title: args.title + ' - Quiz',
                                description: '',
                                parentId: '',
                              ));
                        },
                      );
                    }),
              ]),
        ),
      ),
    );
  }

  Widget _buildList(BuildContext context, documents) {
    return ListView.builder(
      padding: const EdgeInsets.all(16),
      itemCount: documents.length,
      itemBuilder: (context, index) {
        final DocumentSnapshot doc = documents[index];
        // ignore: avoid_print
        switch (doc['type']) {
          case 'text':
            return _buildBlockText(context, doc);
          case 'code':
            return _buildBlockCode(context, doc);
          case 'image':
            return _buildBlockImage(context, doc);
          default:
            return const Text('No se encontró el tipo de bloque');
        }
      },
    );
  }

  Widget _buildBlockText(BuildContext context, data) {
    return InkWell(
        child: Card(
      elevation: 3,
      margin: const EdgeInsets.only(bottom: 8),
      child: Padding(
        padding: const EdgeInsets.all(10),
        child: Text(
          data['content'],
          style: const TextStyle(fontSize: 18),
        ),
      ),
    ));
  }

  Widget _buildBlockImage(BuildContext context, data) {
    return InkWell(
        child: Card(
      elevation: 3,
      margin: const EdgeInsets.only(bottom: 8),
      child: Padding(
        padding: const EdgeInsets.all(10),
        child: Image.network(
          data['content'],
          fit: BoxFit.cover,
        ),
      ),
    ));
  }

  Widget _buildBlockCode(BuildContext context, data) {
    // http://hilite.me/
    return InkWell(
        child: Card(
      elevation: 2,
      margin: const EdgeInsets.only(bottom: 16),
      child: Html(data: data['content']),
    ));
  }
}
