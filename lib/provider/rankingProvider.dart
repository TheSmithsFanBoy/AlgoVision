import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';

class RankingProvider extends ChangeNotifier{

  get ranking{
    return FirebaseFirestore.instance.collection('users').orderBy('points', descending: true).snapshots();
  }

  /*set ranking(Stream<QuerySnapshot<Map<String, dynamic>>> _ranking){


  }*/
}