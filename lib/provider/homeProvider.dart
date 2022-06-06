import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';

class HomeProvider extends ChangeNotifier{
  get modules {
    return FirebaseFirestore.instance.collection('modules').snapshots();
  }

  /*set modules(Stream<QuerySnapshot<Map<String, dynamic>>> _modules){


  }*/
}