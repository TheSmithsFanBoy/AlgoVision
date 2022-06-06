import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:tdpapp/provider/rankingProvider.dart';

class RankingScreen extends StatefulWidget {
  const RankingScreen({Key? key}) : super(key: key);

  @override
  State<RankingScreen> createState() => _RankingScreenState();
}

class _RankingScreenState extends State<RankingScreen> {
  @override
  Widget build(BuildContext context) {
    User? user = FirebaseAuth.instance.currentUser;
    var url = user != null ? user.photoURL : '';
    url = (url! + "?s=200");
    // ignore: unused_local_variable
    final List<Medal> medals = [
      const Medal(
          title: "FUNDAMENTOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535488.png"),
      const Medal(
          title: "ALGORÍTMOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535490.png"),
      const Medal(
          title: "FUNDAMENTOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535488.png"),
      const Medal(
          title: "ALGORÍTMOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535490.png"),
      const Medal(
          title: "FUNDAMENTOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535488.png"),
      const Medal(
          title: "ALGORÍTMOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535490.png"),
      const Medal(
          title: "FUNDAMENTOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535488.png"),
      const Medal(
          title: "ALGORÍTMOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535490.png"),
    ];

    return Scaffold(
      appBar: AppBar(
        title: const Text("Ranking"),
        centerTitle: true,
        flexibleSpace: Container(
          decoration: const BoxDecoration(
            gradient: LinearGradient(
                begin: Alignment.centerLeft,
                end: Alignment.centerRight,
                colors: <Color>[Colors.orangeAccent, Colors.yellow]),
          ),
        ),
        elevation: 0,
      ),
      body: ChangeNotifierProvider(
        create: (_) => RankingProvider(),
        child: StreamBuilder(
            stream: FirebaseFirestore.instance
                .collection('users')
                .orderBy('points', descending: true)
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
                  return _buildUserCard(context, doc, index);
                },
              );
            }),
      ),

      /*Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Card(
              elevation: 5,
              child: Row(
                children: [
                  SizedBox(
                    width: 130,
                    child: Image.network(
                      url,
                      fit: BoxFit.cover,
                    ),
                  ),
                  const SizedBox(
                    width: 15,
                  ),
                  FutureBuilder(
                      future: FirebaseFirestore.instance
                          .collection('users')
                          .doc(FirebaseAuth.instance.currentUser!.uid)
                          .get(),
                      builder: (BuildContext context,
                          AsyncSnapshot<DocumentSnapshot<Map<String, dynamic>>>
                              snapshot) {
                        if (!snapshot.hasData) {
                          return const Center(
                            child: CircularProgressIndicator(),
                          );
                        }
                        final Map<String, dynamic>? data =
                            snapshot.data?.data();
                        if (data == null) {
                          return const Center(
                            child: CircularProgressIndicator(),
                          );
                        }
                        return Column(
                          children: [
                            Text(data['fullName'],
                                style: const TextStyle(
                                    fontSize: 17, fontWeight: FontWeight.w500)),
                            Text(data['points'].toString() + " puntos",
                                style: const TextStyle(
                                    fontSize: 19,
                                    fontWeight: FontWeight.w700,
                                    color: Colors.red)),
                          ],
                        );
                      }),
                ],
              )),
          const SizedBox(
            height: 30,
          ),
          Row(
            children: [
              const Expanded(
                  child: Divider(
                thickness: 1,
                height: 10,
                color: Colors.grey,
              )),
              Container(
                margin: const EdgeInsets.only(left: 10.0, right: 10.0),
                child: const Text("RANKING GLOBAL",
                    style: TextStyle(fontSize: 12)),
              ),
              const Expanded(
                  child: Divider(
                thickness: 1,
                height: 10,
                color: Colors.grey,
              )),
            ],
          ),
          const SizedBox(
            height: 10,
          ),
        ],
      )*/
    );
  }

  Widget _buildUserCard(BuildContext context, doc, index) {
    return Card(
      elevation: 5,
      child: Row(
        children: [
          SizedBox(
            width: 100,
            child: Image.network(
              doc['photoUrl'] + "?s=200",
              fit: BoxFit.cover,
            ),
          ),
          const SizedBox(
            width: 15,
          ),
          Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text("PUESTO #" + (index + 1).toString(),
                  style: const TextStyle(
                      fontSize: 18, fontWeight: FontWeight.w700)),
              Text(doc['fullName'],
                  style: const TextStyle(
                      fontSize: 17, fontWeight: FontWeight.w400)),
              Text(doc['points'].toString() + " puntos",
                  style: const TextStyle(
                      fontSize: 16,
                      fontWeight: FontWeight.w700,
                      color: Colors.red)),
            ],
          ),
        ],
      ),
    );
  }
}

class Medal {
  const Medal({required this.coverImg, required this.title});
  final String coverImg;
  final String title;
}
