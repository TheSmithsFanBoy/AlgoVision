import 'package:animated_splash_screen/animated_splash_screen.dart';
import 'package:flutter/material.dart';

import '../home/home_screen.dart';
import '../login/login_screen.dart';

import '../account/account_screen.dart';
import '../algorithm-details/algorithm_details_screen.dart';
import '../algorithm/algorithm_screen.dart';
import '../challenge-quiz/challenge_quiz_screen.dart';
import '../challenges/challenges_screen.dart';
import '../edit-account/edit_account_screen.dart';
import '../forgot-password/forgot_password_screen.dart';
import '../fundamentals/fundamentals_screen.dart';
import '../lesson-practice/lesson_practice_screen.dart';
import '../lesson-quiz/lesson_quiz_screen.dart';
import '../lesson-video/lesson_video_screen.dart';
import '../ranking/ranking_screen.dart';
import '../register/register_screen.dart';
import '../sign-in/sign_in_screen.dart';
import '../splash-home/splash_home_screen.dart';
import '../surveys/surveys_screen.dart';
import '../topic-content/topic_content_screen.dart';
import '../topic-quiz/topiz_quiz_screen.dart';
import '../topics/topics_screen.dart';
import '../unity-game/unity_game_screen.dart';
import '../welcome/welcome_screen.dart';


class SplashLoginScreen extends StatefulWidget {
  const SplashLoginScreen({Key? key}) : super(key: key);

  @override
  State<SplashLoginScreen> createState() => _SplashLoginScreenState();
}

class _SplashLoginScreenState extends State<SplashLoginScreen> {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: AnimatedSplashScreen(
        duration: 2500,
        backgroundColor: Colors.indigo,
        splashTransition: SplashTransition.fadeTransition,
        splash: const ImageIcon(AssetImage(
          "assets/icons/algoritmos.png",),
          size: 80,),
        nextScreen: LoginScreen(),
      ),
      routes: {
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
    );
  }
}
