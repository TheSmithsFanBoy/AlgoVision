import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

class AuthProvider extends ChangeNotifier{

  User? user = FirebaseAuth.instance.currentUser;

  User? currentUser() => user;
}