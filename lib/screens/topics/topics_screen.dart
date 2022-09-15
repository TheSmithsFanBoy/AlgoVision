// ignore_for_file: unused_element, deprecated_member_use

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter_html/flutter_html.dart';

import '../../models/screen_arguments.dart';

class TopicsScreen extends StatelessWidget {
  const TopicsScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;

    return Scaffold(
      appBar: AppBar(
        title: Text(args.title + ' - ' + "Tópicos"),
        centerTitle: true,
        backgroundColor: Colors.indigo,
      ),
      body: StreamBuilder(
          stream: FirebaseFirestore.instance
              .collection('topics')
              .where('lesson',
                  isEqualTo: FirebaseFirestore.instance
                      .collection('lessons')
                      .doc(args.id))
              .snapshots(),
          builder: (context, AsyncSnapshot<QuerySnapshot> snapshot) {
            if (!snapshot.hasData) {
              return const Center(
                child: CircularProgressIndicator(),
              );
            }
            final List<DocumentSnapshot> docs = snapshot.data!.docs;
            return _buildList(context, docs, args.id);
          }),
      bottomNavigationBar: BottomAppBar(
        color: Colors.grey[600],
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

  Widget _buildList(BuildContext context, documents, lessonId) {
    return ListView.builder(
      padding: const EdgeInsets.all(16),
      itemCount: documents.length,
      itemBuilder: (context, index) {
        final DocumentSnapshot doc = documents[index];
        return Card(
          elevation: 8,
          margin: const EdgeInsets.only(bottom: 8),
          child: Padding(
            padding: const EdgeInsets.all(10),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Row(
                  children: [
                    Container(
                      padding: const EdgeInsets.all(6),
                      decoration: BoxDecoration(
                        color: Colors.pink,
                        borderRadius: BorderRadius.circular(8),
                      ),
                      child: const Icon(Icons.bookmarks_rounded,
                          color: Colors.white),
                    ),
                    const SizedBox(width: 10),
                    Text(
                      doc['title'],
                      style: const TextStyle(
                          fontSize: 19, fontWeight: FontWeight.bold),
                    ),
                    const Text(
                      " (0% completado)",
                      style:
                          TextStyle(fontSize: 17, fontWeight: FontWeight.w300),
                    )
                  ],
                ),
                StreamBuilder(
                    stream: FirebaseFirestore.instance
                        .collection('topics/' + doc.id + '/blocks')
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
                        padding: const EdgeInsets.only(top: 5, left: 40),
                        itemCount: docs.length + 1,
                        itemBuilder: (context, index) {
                          if (index == docs.length) {
                            return _buildTopicQuiz(context, doc.id, doc);
                          }
                          final DocumentSnapshot data = docs[index];
                          return _buildTopicBlock(context, data, doc.id, false);
                        },
                      );
                    }),
              ],
            ),
          ),
        );
      },
    );
  }

  Widget _buildTopicBlock(BuildContext context, data, topicId, bool completed) {
    return Row(
      children: [
        Container(
          padding: const EdgeInsets.all(6),
          decoration: BoxDecoration(
            color: Colors.grey.shade300,
            borderRadius: BorderRadius.circular(17),
          ),
          child: Icon(Icons.bookmarks_rounded,
              color: Colors.grey.shade600, size: 15),
        ),
        const SizedBox(width: 10),
        TextButton(
            onPressed: () {
              Navigator.pushNamed(context, '/topic-block',
                  arguments: ScreenArguments(
                    id: data.id,
                    title: data['title'],
                    description: '',
                    parentId: topicId,
                  ));
            },
            child: Text(data['title']),
            style: TextButton.styleFrom(
              primary: Colors.grey.shade600,
            )),
      ],
    );
  }

  Widget _buildTopicQuiz(BuildContext context, topicId, data) {
    return Row(
      children: [
        Container(
          padding: const EdgeInsets.all(6),
          decoration: BoxDecoration(
            color: Colors.grey.shade300,
            borderRadius: BorderRadius.circular(17),
          ),
          child: Icon(Icons.bookmarks_rounded,
              color: Colors.grey.shade600, size: 15),
        ),
        const SizedBox(width: 10),
        TextButton(
            onPressed: () {
              Navigator.pushNamed(context, '/topic-quiz',
                  arguments: ScreenArguments(
                    id: topicId,
                    title: data['title'],
                    description: '',
                    parentId: topicId,
                  ));
            },
            child: Text("Quiz de " + data['title']),
            style: TextButton.styleFrom(
              primary: Colors.grey.shade600,
            )),
      ],
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
