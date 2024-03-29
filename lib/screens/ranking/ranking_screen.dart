

// ignore_for_file: annotate_overrides

import 'package:animate_do/animate_do.dart';
import 'package:cached_network_image/cached_network_image.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

class RankingScreen extends StatefulWidget {
  const RankingScreen({Key? key}) : super(key: key);

  @override
  State<RankingScreen> createState() => _RankingScreenState();
}

class _RankingScreenState extends State<RankingScreen> with AutomaticKeepAliveClientMixin{

  bool get wantKeepAlive=>true;


  @override
  Widget build(BuildContext context) {
    super.build(context);
    User? user = FirebaseAuth.instance.currentUser;
    var url = user != null ? user.photoURL : '';
    url = (url! + "?s=200");

    return SafeArea(
      top: true,
      child: Scaffold(
        appBar: AppBar(
          title: const Text("Ranking"),
          centerTitle: true,
          backgroundColor: Colors.indigo,
          elevation: 0,
        ),
        body: StreamBuilder(
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
                padding: const EdgeInsets.all(10),
                itemCount: docs.length,
                itemBuilder: (context, index) {
                  final DocumentSnapshot doc = docs[index];
                  return SlideInLeft(
                    duration: Duration(milliseconds: 2000+ index*700),
                    child: _buildUserCard(context, doc, index));
                },
              );
            }),
      ),
    );
  }

  Widget _buildUserCard(BuildContext context, doc, index) {
    var marginCard = const EdgeInsets.only(bottom: 15);
    var shapeCard = const RoundedRectangleBorder(
        borderRadius: BorderRadius.only(topRight: Radius.circular(17)),
        side: BorderSide(color: Colors.black, width: 0.15));

    return Card(
      margin: marginCard,
      shape: shapeCard,
      clipBehavior: Clip.antiAlias,
      elevation: 5,
      child: Row(
        children: [
          SizedBox(
            width: 100,
            height: 100,
            //! Habia un pequeño error debido a que al comienzo
              //! el recusro habia usado una api para almacenar las fotos
              //! y luego se implemento un imagePiker
              //! el urlDomain google.apis/ ... debe ser el mismo para todos
            child: CachedNetworkImage(
              placeholder: (context, url) => Image.asset('assets/images/loading.gif'),
              imageUrl: doc['photoUrl'] + "?s=200",
               fit: BoxFit.cover,
            ),
            
            
          ),
          const SizedBox(
            width: 15,
          ),
          Column(
            mainAxisAlignment: MainAxisAlignment.center,
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

