import 'dart:io';

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_storage/firebase_storage.dart';
import 'package:flutter/material.dart';
import 'package:image_picker/image_picker.dart';
import 'package:provider/provider.dart';
import 'package:tdpapp/services/auth_service.dart';

class EditAccountScreen extends StatelessWidget {
  EditAccountScreen({Key? key}) : super(key: key);

  final TextEditingController _emailController = TextEditingController();
  final TextEditingController _displayNameController = TextEditingController();
  final TextEditingController _oldPasswordController = TextEditingController();
  final TextEditingController _passwordController = TextEditingController();
  final _formKey = GlobalKey<FormState>();

  @override
  Widget build(BuildContext context) {
    User? user = FirebaseAuth.instance.currentUser;
    var email = user != null ? user.email : '';
    var url = user != null ? user.photoURL : '';
    url = (url! + " ");
    var displayName = user != null ? user.displayName : '';
    _emailController.text = email!;
    _displayNameController.text = displayName!;
    return Scaffold(
        appBar: AppBar(
          title: const Text('Editar cuenta'),
          centerTitle: true,
          backgroundColor: Colors.pink,
          elevation: 0,
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
                          print('Se selecciona el ícono');
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
                      style: TextButton.styleFrom(backgroundColor: Colors.pink),
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
                      style: TextButton.styleFrom(backgroundColor: Colors.pink),
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
        ));
  }

  Future<void> uploadImage() async {
    File image;
    var imageCapture;
    final imagePicker = ImagePicker();

    imageCapture = await imagePicker.pickImage(source: ImageSource.gallery);

    //setState(() async {
      if(imageCapture != null){
        image = File(imageCapture.path);
        print("Se ha seleccionado ninguna imagen");
        var temp = FirebaseAuth.instance.currentUser?.displayName;
        print(temp);
        var firebaseStorageRef =   FirebaseStorage.instance.ref().child("Perfil/${FirebaseAuth.instance.currentUser?.displayName}");
        var uploadTask = firebaseStorageRef.putFile(image);
        var taskSnapshot = uploadTask.snapshot;

        String storagePath = await taskSnapshot.ref.getDownloadURL();

        print(storagePath);

        var usuario = FirebaseFirestore.instance
            .collection('users')
            .doc(FirebaseAuth.instance.currentUser?.uid);
          
        usuario.update({'photoUrl':storagePath});

        FirebaseAuth.instance.currentUser?.updatePhotoURL(storagePath);
      }
      else{
        print("No se ha seleccionado ninguna imagen");
        const SnackBar(content: Text('No se ha seleccionado nada'),backgroundColor: Colors.red,);
      }
      }
    //);

}
