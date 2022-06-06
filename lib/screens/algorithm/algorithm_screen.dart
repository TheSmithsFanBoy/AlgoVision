import 'package:flutter/material.dart';
import 'package:tdpapp/screens/algorithm/algorithm_body.dart';

class AlgorithmScreen extends StatelessWidget {
  const AlgorithmScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return const Scaffold(
      body: AlgorithmBody(),
    );
  }
}
