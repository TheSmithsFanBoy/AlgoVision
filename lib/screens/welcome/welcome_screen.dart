import 'package:flutter/material.dart';
import 'package:flutter_svg/svg.dart';

class WelcomeScreen extends StatelessWidget {
  const WelcomeScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    return Scaffold(
      body: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          const Text(
            'BIENVENIDO A DEMO',
            style: TextStyle(
              fontWeight: FontWeight.bold,
            ),
          ),
          const SizedBox(height: 16),
          SvgPicture.asset(
            "assets/icons/welcome.svg",
            height: size.height * 0.45,
          ),
          ElevatedButton(
              onPressed: () {
                Navigator.of(context).pushNamed('/register');
              },
              child: const Text('REGISTRARSE')),
          ElevatedButton(
              onPressed: () {
                Navigator.of(context).pushNamed('/login');
              },
              child: const Text('INICIAR SESIÓN')),
        ],
      ),
    );
  }
}
