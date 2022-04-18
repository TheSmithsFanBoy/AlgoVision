import 'package:flutter/material.dart';
import 'package:flutter_svg/svg.dart';

import '../../widgets/already_have_account.dart';
import '../../widgets/rounded_input_field.dart';
import '../../widgets/rounded_password_field.dart';

class SignInScreen extends StatelessWidget {
  const SignInScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    return Scaffold(
      body: Center(
          child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          const Text('INICIAR SESIÓN',
              style: TextStyle(fontWeight: FontWeight.bold)),
          SvgPicture.asset(
            "assets/icons/login.svg",
            height: size.height * 0.32,
          ),
          RoundedInputField(
            hintText: "Correo electrónico",
            icon: Icons.person,
            onChanged: (value) {},
          ),
          RoundedPasswordField(
            onChanged: (value) {},
          ),
          ElevatedButton(
              onPressed: () {
                Navigator.of(context)
                    .pushNamedAndRemoveUntil("/home", (route) => false);
              },
              child: const Text('CONTINUAR')),
          AlreadyHaveAccountCheck(
              login: true,
              press: () {
                Navigator.of(context).pushNamed('/register');
              }),
          GestureDetector(
            onTap: () {
              Navigator.of(context).pushNamed('/forgot-password');
            },
            child: const Text(
              "Olvidé mi contraseña",
              style: TextStyle(
                color: Colors.grey,
                fontWeight: FontWeight.bold,
              ),
            ),
          )
        ],
      )),
    );
  }
}
