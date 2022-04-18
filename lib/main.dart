import 'package:flutter/material.dart';
import 'package:tdpapp/screens/account/account_screen.dart';
import 'package:tdpapp/screens/forgot-password/forgot_password_screen.dart';
import 'package:tdpapp/screens/fundamentals/fundamentals_screen.dart';
import 'package:tdpapp/screens/home/home_screen.dart';
import 'package:tdpapp/screens/sign-in/sign_in_screen.dart';
import 'package:tdpapp/screens/sign-up/sign_up_screen.dart';
import 'package:tdpapp/screens/welcome/welcome_screen.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Flutter Demo',
      theme: ThemeData(
        textTheme: Theme.of(context).textTheme.apply(
              fontFamily: 'Open Sans',
            ),
        primarySwatch: Colors.blue,
      ),
      initialRoute: '/',
      routes: {
        '/': (context) => const WelcomeScreen(),
        '/register': (context) => const SignUpScreen(),
        '/login': (context) => const SignInScreen(),
        '/forgot-password': (context) => const ForgotPassword(),
        '/home': (context) => const HomeScreen(),
        '/fundamentals': (context) => const FundamentalsScreen(),
        '/account': (context) => const AccountScreen(),
      },
    );
  }
}
