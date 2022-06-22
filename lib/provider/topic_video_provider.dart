
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

class TopicVideoProvider extends ChangeNotifier {
  String paso = "";

  ///add to list coffee
  updateUser(String _String) {
    paso = _String;
    notifyListeners();
  }

}
