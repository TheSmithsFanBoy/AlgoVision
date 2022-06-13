import 'dart:async';

import 'package:animated_splash_screen/animated_splash_screen.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:tdpapp/firebase_options.dart';
import 'package:tdpapp/screens/account/account_screen.dart';
import 'package:tdpapp/screens/algorithm-details/algorithm_details_screen.dart';
import 'package:tdpapp/screens/algorithm/algorithm_screen.dart';
import 'package:tdpapp/screens/challenge-quiz/challenge_quiz_screen.dart';
import 'package:tdpapp/screens/challenges/challenges_screen.dart';
import 'package:tdpapp/screens/edit-account/edit_account_screen.dart';
import 'package:tdpapp/screens/forgot-password/forgot_password_screen.dart';
import 'package:tdpapp/screens/fundamentals/fundamentals_screen.dart';
import 'package:tdpapp/screens/home/home_screen.dart';
import 'package:tdpapp/screens/lesson-practice/lesson_practice_screen.dart';
import 'package:tdpapp/screens/lesson-quiz/lesson_quiz_screen.dart';
import 'package:tdpapp/screens/lesson-video/lesson_video_screen.dart';
import 'package:tdpapp/screens/login/login_screen.dart';
import 'package:tdpapp/screens/ranking/ranking_screen.dart';
import 'package:tdpapp/screens/register/register_screen.dart';
import 'package:tdpapp/screens/sign-in/sign_in_screen.dart';
import 'package:tdpapp/screens/splash-home/splash_home_screen.dart';
import 'package:tdpapp/screens/splash-login/splash_login_screen.dart';
import 'package:tdpapp/screens/surveys/surveys_screen.dart';
import 'package:tdpapp/screens/topic-content/topic_content_screen.dart';
import 'package:tdpapp/screens/topic-quiz/topiz_quiz_screen.dart';
import 'package:tdpapp/screens/topics/topics_screen.dart';
import 'package:tdpapp/screens/unity-game/unity_game_screen.dart';
import 'package:tdpapp/screens/welcome/welcome_screen.dart';
import 'package:tdpapp/services/auth_service.dart';


Future<void> main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp(
    options: DefaultFirebaseOptions.currentPlatform,
  );
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
      _navigatorKey.currentState?.pushNamedAndRemoveUntil(
          event != null ? '/home' : '/splash-login', (route) => false);
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
          /*home: AnimatedSplashScreen(
            duration: 2500,
            backgroundColor: Colors.indigo,
            splashTransition: SplashTransition.fadeTransition,
            splash: const AssetImage(
                 "assets/images/algoritmos.png",),
            nextScreen: LoginScreen(),
          ),*/
          initialRoute:
              FirebaseAuth.instance.currentUser == null ? '/splash-login' : '/home',
          navigatorKey: _navigatorKey,
          routes: {
            '/': (context) => const WelcomeScreen(),
            '/register': (context) => RegisterScreen(),
            '/sign-in': (context) => const SignInScreen(),
            '/login': (context) => LoginScreen(),
            '/forgot-password': (context) => ForgotPasswordScreen(),
            '/home': (context) => const HomeScreen(),
            '/fundamentals': (context) => const FundamentalsScreen(),
            '/algorithm': (context) => const AlgorithmScreen(),
            '/challenges': (context) => const ChallengesScreen(),
            '/challenge-quiz': (context) => const ChallengeQuizScreen(),
            '/account': (context) => const AccountScreen(),
            '/edit-account': (context) => EditAccountScreen(),
            '/lesson-quiz': (context) => const LessonQuizScreen(),
            '/lesson-video': (context) => const LessonVideoScreen(),
            '/lesson-practice': (context) => const LessonPracticeScreen(),
            '/topic-details': (context) => const TopicsScreen(),
            '/topic-quiz': (context) => const TopicQuizScreen(),
            '/topic-content': (context) => const TopicContentScreen(),
            '/algorithm-details': (context) => const AlgorithmDetailsScreen(),
            '/ranking': (context) => const RankingScreen(),
            '/surveys': (context) => const SurveysScreen(),
            '/unity-game': (context) => const UnityGameScreen(),
            '/splash-login': (context) => const SplashLoginScreen(),
            '/splash-home': (context) => const SplashHomeScreen(),
          },
        ));
  }
}
