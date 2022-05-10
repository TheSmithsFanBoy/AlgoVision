import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:tdpapp/services/auth_service.dart';

class EditAccountScreen extends StatelessWidget {
  EditAccountScreen({Key? key}) : super(key: key);

  final TextEditingController _emailController = TextEditingController();
  final TextEditingController _displayNameController = TextEditingController();
  final TextEditingController _passwordController = TextEditingController();
  final _formKey = GlobalKey<FormState>();

  @override
  Widget build(BuildContext context) {
    User? user = FirebaseAuth.instance.currentUser;
    var email = user != null ? user.email : '';
    var url = user != null ? user.photoURL : '';
    url = (url! + "?s=200");
    var displayName = user != null ? user.displayName : '';
    _emailController.text = email!;
    _displayNameController.text = displayName!;
    return Scaffold(
        appBar: AppBar(
          title: const Text('Editar cuenta'),
          centerTitle: true,
          backgroundColor: Colors.blue,
          actions: [
            IconButton(
              icon: const Icon(Icons.save),
              onPressed: () {
                if (_formKey.currentState != null &&
                    _formKey.currentState!.validate()) {
                  context
                      .read<AuthService>()
                      .updateAccount(
                        displayName: _displayNameController.text,
                        email: _emailController.text,
                      )
                      .then(
                          (value) => ScaffoldMessenger.of(context).showSnackBar(
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
            ),
          ],
          elevation: 0,
        ),
        body: SingleChildScrollView(
          child: Center(
            child: Form(
              key: _formKey,
              child: Padding(
                  padding: const EdgeInsets.all(20),
                  child: Column(children: [
                    const SizedBox(
                      height: 30,
                    ),
                    CircleAvatar(
                      radius: 60,
                      backgroundImage: NetworkImage(url),
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
                    const Divider(
                      color: Colors.black,
                    ),
                    const SizedBox(
                      height: 15,
                    ),
                    TextFormField(
                      controller: _passwordController,
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
                  ])),
            ),
          ),
        ));
  }
}
