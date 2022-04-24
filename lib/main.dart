import 'package:flutter/material.dart';
import 'package:tdpapp/screens/account/account_screen.dart';
import 'package:tdpapp/screens/algorithm/algorithm_screen.dart';
import 'package:tdpapp/screens/forgot-password/forgot_password_screen.dart';
import 'package:tdpapp/screens/fundamentals/fundamentals_screen.dart';
import 'package:tdpapp/screens/home/home_screen.dart';
import 'package:tdpapp/screens/login/login_screen.dart';
import 'package:tdpapp/screens/ranking/ranking_screen.dart';
import 'package:tdpapp/screens/register/register_screen.dart';
import 'package:tdpapp/screens/sign-in/sign_in_screen.dart';
import 'package:tdpapp/screens/topic-details/topic_details_screen.dart';
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
        '/register': (context) => const RegisterScreen(),
        '/sign-in': (context) => const SignInScreen(),
        '/login': (context) => const LoginScreen(),
        '/forgot-password': (context) => const ForgotPasswordScreen(),
        '/home': (context) => const HomeScreen(),
        '/fundamentals': (context) => const FundamentalsScreen(),
        '/algorithm': (context) => const AlgorithmScreen(),
        '/account': (context) => const AccountScreen(),
        '/topic-details': (context) => const TopicDetailsScreen(),
        '/ranking': (context) => const RankingScreen(),
      },
    );
  }
}
