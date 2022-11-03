

// ignore_for_file: non_constant_identifier_names

import 'package:flutter/material.dart';

class TopicVideoProvider extends ChangeNotifier {
  String paso = "";

  ///add to list coffee
  updateUser(String _string) {
    paso = _string;
    notifyListeners();
  }

}
