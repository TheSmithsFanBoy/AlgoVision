import 'dart:convert';

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:crypto/crypto.dart';
import 'package:flutter/material.dart';

class AuthService{
  final FirebaseAuth _firebaseAuth;

  AuthService(this._firebaseAuth);

  /// Changed to idTokenChanges as it updates depending on more cases.
  Stream<User?> get authStateChanges => _firebaseAuth.idTokenChanges();

  User? get user => _firebaseAuth.currentUser;

  Future<void>renewUser(User? user) async {
    user = _firebaseAuth.currentUser;
  }

  /// This won't pop routes so you could do something like
  /// Navigator.of(context).pushNamedAndRemoveUntil('/', (Route<dynamic> route) => false);
  /// after you called this method if you want to pop all routes.
  Future<void> signOut() async {
    await _firebaseAuth.signOut();
  }

  /// There are a lot of different ways on how you can do exception handling.
  /// This is to make it as easy as possible but a better way would be to
  /// use your own custom class that would take the exception and return better
  /// error messages. That way you can throw, return or whatever you prefer with that instead.
  Future<String?> signIn(
      {required String email, required String password}) async {
    try {
      await _firebaseAuth.signInWithEmailAndPassword(
          email: email, password: password);
      // This is the same as await _firebaseAuth.currentUser();
      return "¡Bienvenido de vuelta!";
    } on FirebaseAuthException catch (e) {
      //return e.message;
      return "Se ha producido un error al Iniciar Sesión";
    }
  }

  Future<Stream> getMedals() {
    return FirebaseFirestore.instance
        .collection('users')
        .doc(FirebaseAuth.instance.currentUser?.uid)
        .get()
        .then((value) {
      var medals = value.data()!['medals'].id;
      Stream<dynamic>? stream = FirebaseFirestore.instance
          .collection('medals')
          .where('id', whereIn: medals)
          .snapshots()
          .map((value) => value.docs.map((doc) => doc.data()));
      return stream;
    });
  }

  /// There are a lot of different ways on how you can do exception handling.
  /// This is to make it as easy as possible but a better way would be to
  /// use your own custom class that would take the exception and return better
  /// error messages. That way you can throw, return or whatever you prefer with that instead.
  Future<String?> signUp(
      {required String email,
      required String password,
      required String fullName}) async {
    try {
      //await _firebaseAuth.setLanguageCode('es');
      UserCredential userCredential = await _firebaseAuth
          .createUserWithEmailAndPassword(email: email, password: password);
      var emailHash = generateHash(email: email);
      userCredential.user!.updateDisplayName(fullName);
      userCredential.user!
          .updatePhotoURL("https://www.gravatar.com/avatar/" + emailHash);
      FirebaseFirestore.instance
          .collection('users')
          .doc(userCredential.user!.uid)
          .set({
        'email': email,
        'fullName': fullName,
        'photoUrl': "https://www.gravatar.com/avatar/" + emailHash,
        'uid': userCredential.user!.uid,
        'points': 0,
        'challenges': [],
        'topics': [],
        'medals': [],
      });
      return "¡Bienvenido a TDAPP!";
    } on FirebaseAuthException catch (e) {
      //return e.message;
      return "Se ha producido un error al Registrarse";
    }
  }

  Future<String?> resetPassword({required String email}) async {
    try {
      //await _firebaseAuth.setLanguageCode('es');
      await _firebaseAuth.sendPasswordResetEmail(email: email);
      return "Envío de Contraseña logrado";
    } on FirebaseAuthException catch (e) {
      //return e.message;
      return "Se ha producido un error al enviar el email para la contraseña";
    }
  }

  String generateHash({required String email}) {
    return md5.convert(utf8.encode(email)).toString();
  }

  Future<String?> changePassword(
      {required String oldPassword,
      required String newPassword,
      required String email}) async {
    try {
      print(_firebaseAuth.languageCode);
      //await _firebaseAuth.setLanguageCode('es-ES');
      await _firebaseAuth.signInWithEmailAndPassword(
          email: email, password: oldPassword);
      await _firebaseAuth.currentUser!.updatePassword(newPassword);
      return "Contraseña cambiada";
    } on FirebaseAuthException catch (e) {
      //return e.message;
      return "Se ha producido un error al cambiar la contraseña";
    }
  }

  Future<String?> updateAccount(
      {required String displayName, required String email}) async {
    try {
      await _firebaseAuth.setLanguageCode('es');
      await _firebaseAuth.currentUser?.updateEmail(email);
      await _firebaseAuth.currentUser?.updateDisplayName(displayName);
      var UserChanged = _firebaseAuth.currentUser?.uid;
      FirebaseFirestore.instance.collection('users').doc(UserChanged).update({'fullName':displayName, 'email': email});
      return "Datos actualizados correctamente";
    } on FirebaseAuthException catch (e) {
      //return e.message;
      return "Se ha producido un error al actualizar los datos";
    }
  }
}
