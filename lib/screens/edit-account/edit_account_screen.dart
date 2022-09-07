// ignore_for_file: prefer_typing_uninitialized_variables, prefer_const_declarations, unused_local_variable

import 'dart:io';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_storage/firebase_storage.dart';
import 'package:flutter/material.dart';
import 'package:image_picker/image_picker.dart';
import 'package:path/path.dart';
import 'package:provider/provider.dart';
import 'package:tdpapp/services/auth_service.dart';

import '../../provider/user_provider.dart';

class EditAccountScreen extends StatelessWidget {
  EditAccountScreen({Key? key}) : super(key: key);

  final TextEditingController _emailController = TextEditingController();
  final TextEditingController _displayNameController = TextEditingController();
  final TextEditingController _oldPasswordController = TextEditingController();
  final TextEditingController _passwordController = TextEditingController();
  final _formKey = GlobalKey<FormState>();

  @override
  Widget build(BuildContext context) {
    final _user = Provider.of<UserProvider>(context);
    Future<void> uploadImage() async {

      File image;
      var imageCapture;
      final imagePicker = ImagePicker();

      imageCapture = await imagePicker.pickImage(source: ImageSource.gallery);

      if (imageCapture != null) {
        image = File(imageCapture.path);
        final fileName = basename(image.path);
        final destination = 'Perfil';
        // var temp = FirebaseAuth.instance.currentUser?.displayName;
        // var firebaseStorageRef = FirebaseStorage.instance
        //     .ref()
        //     .child("Perfil/${FirebaseAuth.instance.currentUser?.displayName}");
        // var uploadTask = firebaseStorageRef.putFile(image);
        // var taskSnapshot = uploadTask.snapshot;
        //
        // String storagePath = await taskSnapshot.ref.getDownloadURL();

        final ref = FirebaseStorage.instance
            .ref(destination)
            .child(fileName);
        await ref.putFile(image);
        String imgUrl = await ref.getDownloadURL();

        context
            .read<AuthService>()
            .updatePhoto(storagePath: imgUrl).whenComplete(() => _user.updateUser(FirebaseAuth.instance.currentUser!));

      } else {
        const SnackBar(
          content: Text('No se ha seleccionado nada'),
          backgroundColor: Colors.red,
        );
      }
    }

    _user.setUser(FirebaseAuth.instance.currentUser!);
    var email = _user.user != null ? _user.user?.email : '';
    var url = _user.user != null ? _user.user?.photoURL : '';
    url = (url! + "?s=200");
    var displayName = _user.user != null ? _user.user?.displayName : '';
    _emailController.text = email!;
    _displayNameController.text = displayName!;


    CollectionReference collecion = FirebaseFirestore.instance.collection('users');


    return SafeArea(
      top: true,
      child: Scaffold(
          appBar: AppBar(
            title: const Text('Editar cuenta'),
            centerTitle: true,
            backgroundColor: Colors.indigo,
          ),
          body: SingleChildScrollView(
            child: Center(
              child: Form(
                key: _formKey,
                child: Padding(
                    padding: const EdgeInsets.all(20),
                    child: Column(children: [
                      CircleAvatar(
                        radius: 60,
                        backgroundImage: NetworkImage(url),
                        child: IconButton(
                          icon: const Icon(Icons.edit),
                          onPressed: () {
                            uploadImage();
                            // uploadImage().whenComplete(() => () {
                            //   print("ejecutdando");
                            //       _user.updateUser(FirebaseAuth.instance.currentUser);
                            //       _user.notifyListeners();
                            //     });
                          },
                        ),
                      ),
                      const SizedBox(
                        height: 10,
                      ),
                      Text(displayName,
                          style: const TextStyle(
                              fontSize: 18,
                              color: Colors.black87,
                              fontWeight: FontWeight.w700)),
                      const SizedBox(
                        height: 4,
                      ),
                      Text(email,
                          style: const TextStyle(
                              fontSize: 14, color: Colors.black45)),
                      const SizedBox(
                        height: 30,
                      ),
                      TextFormField(
                        controller: _displayNameController,
                        decoration: const InputDecoration(
                          labelText: 'Nombres y apellidos',
                          border: OutlineInputBorder(),
                        ),
                      ),
                      const SizedBox(
                        height: 30,
                      ),
                      TextFormField(
                        controller: _emailController,
                        decoration: const InputDecoration(
                          labelText: 'Correo',
                          border: OutlineInputBorder(),
                        ),
                      ),
                      const SizedBox(
                        height: 15,
                      ),
                      TextButton(
                        onPressed: () {
                          if (_formKey.currentState != null &&
                              _formKey.currentState!.validate()) {
                           
                            
                            
                            context
                                .read<AuthService>()
                                .updateAccount(
                                  displayName: _displayNameController.text,
                                  email: _emailController.text,
                                )
                                .then((value) {
                              _user.updateUser(FirebaseAuth.instance.currentUser!);
                              // _user.notifyListeners();
                              ScaffoldMessenger.of(context).showSnackBar(
                                SnackBar(
                                    content: Text(
                                      value!,
                                      style: const TextStyle(
                                        color: Colors.white,
                                        fontSize: 16.0,
                                      ),
                                    ),
                                    backgroundColor: Colors.grey),
                              );
                            });
                          } else {
                            ScaffoldMessenger.of(context).showSnackBar(
                              const SnackBar(
                                  content: Text(
                                    'Por favor ingresa todos los datos',
                                    style: TextStyle(
                                      color: Colors.white,
                                      fontSize: 16.0,
                                    ),
                                  ),
                                  backgroundColor: Colors.grey),
                            );
                          }
                        },
                        style: TextButton.styleFrom(backgroundColor: Colors.indigo),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.center,
                          children: const [
                            Icon(
                              Icons.save,
                              color: Colors.white,
                            ),
                            Text(
                              'ACTUALIZAR DATOS',
                              style: TextStyle(color: Colors.white),
                            ),
                          ],
                        ),
                      ),
                      const Divider(
                        color: Colors.black,
                      ),
                      const SizedBox(
                        height: 15,
                      ),
                      TextFormField(
                        controller: _oldPasswordController,
                        obscureText: true,
                        decoration: const InputDecoration(
                          labelText: 'Contraseña Actual',
                          border: OutlineInputBorder(),
                        ),
                      ),
                      const SizedBox(
                        height: 30,
                      ),
                      TextFormField(
                        controller: _passwordController,
                        obscureText: true,
                        decoration: const InputDecoration(
                          labelText: 'Nueva Contraseña',
                          border: OutlineInputBorder(),
                        ),
                      ),
                      const SizedBox(
                        height: 30,
                      ),
                      TextButton(
                        onPressed: () {
                          if (_formKey.currentState != null &&
                              _formKey.currentState!.validate()) {
                            context
                                .read<AuthService>()
                                .changePassword(
                                    oldPassword: _oldPasswordController.text,
                                    newPassword: _passwordController.text,
                                    email: email)
                                .then((value) =>
                                    ScaffoldMessenger.of(context).showSnackBar(
                                      SnackBar(
                                          content: Text(
                                            value!,
                                            style: const TextStyle(
                                              color: Colors.white,
                                              fontSize: 16.0,
                                            ),
                                          ),
                                          backgroundColor: Colors.grey),
                                    ));
                          } else {
                            ScaffoldMessenger.of(context).showSnackBar(
                              const SnackBar(
                                  content: Text(
                                    'Por favor ingresa todos los datos',
                                    style: TextStyle(
                                      color: Colors.white,
                                      fontSize: 16.0,
                                    ),
                                  ),
                                  backgroundColor: Colors.grey),
                            );
                          }
                        },
                        style: TextButton.styleFrom(backgroundColor: Colors.indigo),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.center,
                          children: const [
                            Icon(
                              Icons.key,
                              color: Colors.white,
                            ),
                            Text(
                              'ACTUALIZAR CONTRASEÑA',
                              style: TextStyle(color: Colors.white),
                            ),
                          ],
                        ),
                      ),
                    ])),
              ),
            ),
          )),
    );
  }
}
