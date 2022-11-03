import 'dart:convert';

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:crypto/crypto.dart';

class AuthService {
  final FirebaseAuth _firebaseAuth;

  AuthService(this._firebaseAuth);

  /// Changed to idTokenChanges as it updates depending on more cases.
  Stream<User?> get authStateChanges => _firebaseAuth.idTokenChanges();

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
  Future<String?> signIn({required String email, required String password}) async {
    
    try {
      await _firebaseAuth.signInWithEmailAndPassword(
                                                      email: email, 
                                                      password: password
                                                    );
      // This is the same as await _firebaseAuth.currentUser();
      return "¡Bienvenido de vuelta!";
    } on FirebaseAuthException catch (e) {
      switch (e.message) {
        case "The email address is badly formatted.":
          {
            return "El correo electronico tiene un formato invalido.";
          }

        case "The email address is already in use by another account.":
          {
            return "La dirección de correo electrónico ya está en uso, por favor ingresa otro correo.";
          }

        case "There is no user record corresponding to this identifier. The user have been deleted.":
          {
            return "No existe registro de usuario correspondiente a este identificador. El usuario ha sido eliminado.";
          }

        case "There is no user record corresponding to this identifier. The user may have been deleted.":
          {
            return "No existe registro de usuario correspondiente a este email. Puede que el usuario haya sido eliminado.";
          }

        default:
          {
            return e.message;
          }
      }
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
  Future<String?> signUp({required String email, required String password, required String fullName, required String profileImg}) async {
    try {
      UserCredential userCredential = await _firebaseAuth
          .createUserWithEmailAndPassword(email: email, password: password);
      userCredential.user!.updateDisplayName(fullName);
      userCredential.user!
          .updatePhotoURL(profileImg);
      FirebaseFirestore.instance
          .collection('users')
          .doc(userCredential.user!.uid)
          .set({
        'email': email,
        'fullName': fullName,
        'photoUrl': profileImg,
        'uid': userCredential.user!.uid,
        'points': 0,
        'challenges': [],
        'topics': [],
        'medals': [],
      });
      return "¡Bienvenido!";
    } on FirebaseAuthException catch (e) {
      switch (e.message) {
        case "The email address is badly formatted.":
          {
            return "El correo electronico tiene un formato invalido.";
          }

        case "The email address is already in use by another account.":
          {
            return "La dirección de correo electrónico ya está en uso, por favor ingresa otro correo.";
          }

        default:
          {
            return e.message;
          }
      }
    }
  }

  Future<String?> resetPassword({required String email}) async {
    try {
      await _firebaseAuth.sendPasswordResetEmail(email: email);
      return "Reset password email sent";
    } on FirebaseAuthException catch (e) {
      return e.message;
    }
  }

  String generateHash({required String email}) {
    return md5.convert(utf8.encode(email)).toString();
  }

  Future<String?> changePassword({required String oldPassword,
    required String newPassword,
    required String email}) async {
    try {
      await _firebaseAuth.signInWithEmailAndPassword(
          email: email, password: oldPassword);
      await _firebaseAuth.currentUser!.updatePassword(newPassword);
      return "Contraseña modificada";
    } on FirebaseAuthException catch (e) {
      switch (e.message) {
        case "The password is invalid or the user does not have a password.":
          {
            return "La contraseña es invalida o el usuario no tiene una contraseña";
          }

          case "Password should be at least 6 characters":
          {
            return "La contraseña debe tener al menos 8 caracteres";
          }

          case "Given String is empty or null":
          {
            return "Ingrese su nueva contraseña";
          }


        default:
          {
            return e.message;
          }
      }
    }
  }

  Future<String?> updateAccount(
      {required String displayName, required String email}) async {
    try {
      final docUser = FirebaseFirestore.instance.collection('users').doc(_firebaseAuth.currentUser!.uid);
      await _firebaseAuth.currentUser!.updateEmail(email);
      await _firebaseAuth.currentUser!.updateDisplayName(displayName);
      docUser.update({'fullName': displayName,'email':email});
      return "Datos actualizados correctamente";
    } on FirebaseAuthException catch (e) {
      switch (e.message) {
        case "The email address is badly formatted.":
          {
            return "El correo electronico tiene un formato invalido.";
          }

        case "Password should be at least 6 characters":
          {
            return "La contraseña debe tener al menos 8 caracteres";
          }

          case "Given String is empty or null":
          {
            return "Ingrese su nueva contraseña";
          }

        case "The email address is already in use by another account.":
          {
            return "La dirección de correo electrónico ya está en uso, por favor ingresa otro correo.";
          }

        default:
          {
            return e.message;
          }
      }
    }
  }

  Future<String?> updatePhoto(
      {required String storagePath}) async {
    try {
      await _firebaseAuth.currentUser!.updatePhotoURL(storagePath);
      return "Datos actualizados correctamente";
    } on FirebaseAuthException catch (e) {
      switch (e.message) {
        case "The email address is badly formatted.":
          {
            return "El correo electronico tiene un formato invalido.";
          }

        case "The email address is already in use by another account.":
          {
            return "La dirección de correo electrónico ya está en uso, por favor ingresa otro correo.";
          }

        default:
          {
            return e.message;
          }
      }
    }
  }
}