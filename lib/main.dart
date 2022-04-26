import 'dart:async';

import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:tdpapp/firebase_options.dart';
import 'package:tdpapp/screens/account/account_screen.dart';
import 'package:tdpapp/screens/algorithm-details/algorithm_details_screen.dart';
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
import 'package:tdpapp/services/auth_service.dart';

import 'screens/challenges/challenges_screen.dart';

Future<void> main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp();
  runApp(MyApp());
}

class MyApp extends StatefulWidget {
  // ignore: prefer_const_constructors_in_immutables
  MyApp({Key? key}) : super(key: key);
  @override
  State<MyApp> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  late StreamSubscription<User?> _sub;
  final _navigatorKey = GlobalKey<NavigatorState>();

  @override
  void initState() {
    super.initState();
    _sub = FirebaseAuth.instance.authStateChanges().listen((event) {
      _navigatorKey.currentState?.pushReplacementNamed(
        event != null ? '/home' : '/login',
      );
    });
  }

  @override
  void dispose() {
    _sub.cancel();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return MultiProvider(
        providers: [
          Provider<AuthService>(
            create: (_) => AuthService(FirebaseAuth.instance),
          ),
          StreamProvider(
            create: (context) => context.read<AuthService>().authStateChanges,
            initialData: null,
          )
        ],
        child: MaterialApp(
          debugShowCheckedModeBanner: false,
          title: 'Flutter Demo',
          theme: ThemeData(
            textTheme: Theme.of(context).textTheme.apply(
                  fontFamily: 'Open Sans',
                ),
            primarySwatch: Colors.blue,
          ),
          initialRoute:
              FirebaseAuth.instance.currentUser == null ? '/login' : '/home',
          navigatorKey: _navigatorKey,
          routes: {
            '/': (context) => const WelcomeScreen(),
            '/register': (context) => const RegisterScreen(),
            '/sign-in': (context) => const SignInScreen(),
            '/login': (context) => LoginScreen(),
            '/forgot-password': (context) => const ForgotPasswordScreen(),
            '/home': (context) => const HomeScreen(),
            '/fundamentals': (context) => const FundamentalsScreen(),
            '/algorithm': (context) => const AlgorithmScreen(),
            '/challenges': (context) => const ChallengesScreen(),
            '/account': (context) => const AccountScreen(),
            '/topic-details': (context) => const TopicDetailsScreen(),
            '/algorithm-details': (context) => const AlgorithmDetailsScreen(),
            '/ranking': (context) => const RankingScreen(),
          },
        ));
  }
}
