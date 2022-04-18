import 'package:flutter/material.dart';
import 'package:tdpapp/widgets/already_have_account.dart';
import 'package:tdpapp/widgets/rounded_input_field.dart';
import 'package:tdpapp/widgets/rounded_password_field.dart';

class SignUpScreen extends StatelessWidget {
  const SignUpScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        body: Center(
      child: Column(mainAxisAlignment: MainAxisAlignment.center, children: [
        const Text(
          'CREAR CUENTA',
          style: TextStyle(
            fontWeight: FontWeight.bold,
          ),
        ),
        RoundedInputField(
          hintText: "Correo",
          icon: Icons.mail,
          onChanged: (value) {},
        ),
        RoundedInputField(
          hintText: "Nombres y Apellidos",
          icon: Icons.person,
          onChanged: (value) {},
        ),
        RoundedPasswordField(
          onChanged: (value) {},
        ),
        ElevatedButton(
            onPressed: () {
              Navigator.of(context).pushNamed('/login');
            },
            child: const Text('CONTINUAR')),
        AlreadyHaveAccountCheck(
            login: false,
            press: () {
              Navigator.of(context).pushNamed('/login');
            }),
      ]),
    ));
  }
}
