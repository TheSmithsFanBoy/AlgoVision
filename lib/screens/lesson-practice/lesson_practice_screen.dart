import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

import '../../models/screen_arguments.dart';

class LessonPracticeScreen extends StatelessWidget{
  const LessonPracticeScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;
    debugPrint(args.description);
    return Scaffold(
        appBar: AppBar(
          elevation: 0,
          iconTheme: const IconThemeData(color: Colors.black54),
          backgroundColor: Colors.transparent,
        ),
        body: FutureBuilder(
          future: FirebaseFirestore.instance
              .collection('topics')
              .doc(args.id)
              .get(),
          builder: (context,
              AsyncSnapshot<DocumentSnapshot<Map<String, dynamic>>> snapshot) {
            if (snapshot.hasData &&
                snapshot.connectionState == ConnectionState.done) {
              if (!snapshot.hasData) {
                return const Center(
                  child: CircularProgressIndicator(),
                );
              }
              final Map<String, dynamic>? data = snapshot.data?.data();
              if (data == null) {
                return const Text('data is null');
              }
              return Column(
                children: [
                  const SizedBox(height: 15),
                  Center(
                      child: Text(data['title'],
                          style: const TextStyle(
                              fontSize: 20,
                              fontWeight: FontWeight.bold,
                              color: Colors.indigo))),
                  const SizedBox(height: 30),
                  Padding(
                    padding: const EdgeInsets.all(10.0),
                    child: _buildContent(context, data),
                  ),
                ],
              );
            }
            return const CircularProgressIndicator();
          },
        ),
        bottomNavigationBar: BottomAppBar(
          color: Colors.transparent,
          elevation: 0,
          child: Padding(
            padding: const EdgeInsets.all(13.0),
            child: FutureBuilder(
              future: FirebaseFirestore.instance
                  .collection('topics')
                  .where('order', isEqualTo: int.parse(args.parentId) + 1)
                  .get(),
              builder: (context, snapshot) {
                if (snapshot.hasData && snapshot.data != null) {
                    return TextButton(
                        style: TextButton.styleFrom(
                          backgroundColor: Colors.orange.shade600,
                          fixedSize: const Size(30, 30),
                        ),
                        child: const Text('INICIAR JUEGO',
                            style: TextStyle(
                                fontSize: 19,
                                fontWeight: FontWeight.bold,
                                color: Colors.black)),
                        onPressed: () {
                          Navigator.pushNamed(
                              context, '/unity-game',
                              arguments: ScreenArguments(
                                  id: '1',
                                  parentId:
                                  '1',
                                  title: "",
                                  description: ""));
                        });
                } else {
                  return const Center(child: Text("Cargando..."));
                }
              },
            ),
          ),
        ));
  }

  Widget _buildContent(BuildContext context, Map<String, dynamic> data) {
    switch (data['type']) {
      case 'practice':
        return Text(data['content'], style: const TextStyle(fontSize: 17));
      default:
        return const Text('No hay datos');
    }
  }
}