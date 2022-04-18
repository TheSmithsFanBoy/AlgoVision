import 'package:flutter/material.dart';
import 'package:flutter_svg/svg.dart';

import '../../widgets/rounded_input_field.dart';

class ForgotPassword extends StatelessWidget {
  const ForgotPassword({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    return Scaffold(
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            const Text(
              "RECUPERAR CONTRASEÑA",
              style: TextStyle(fontWeight: FontWeight.bold),
            ),
            SizedBox(height: size.height * 0.03),
            SvgPicture.asset(
              "assets/icons/forgot.svg",
              height: size.height * 0.20,
            ),
            SizedBox(height: size.height * 0.03),
            RoundedInputField(
              hintText: "Correo electrónico",
              icon: Icons.mail,
              onChanged: (value) {},
            ),
            ElevatedButton(
                onPressed: () {
                  Navigator.of(context).pushNamed('/login');
                },
                child: const Text('CONTINUAR')),
          ],
        ),
      ),
    );
  }
}
