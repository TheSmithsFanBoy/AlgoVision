import 'package:flutter/material.dart';
import 'package:tdpapp/screens/algorithm/algorithm_body.dart';

class AlgorithmScreen extends StatelessWidget {
  const AlgorithmScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Algoritmos'),
        centerTitle: true,
        backgroundColor: Colors.blueGrey,
        flexibleSpace: Container(
          decoration: const BoxDecoration(
            gradient: LinearGradient(
                begin: Alignment.topRight,
                end: Alignment.bottomLeft,
                colors: <Color>[
                  Color.fromARGB(255, 218, 78, 162),
                  Colors.blue,
                ]),
          ),
        ),
      ),
      body: const AlgorithmBody(),
    );
  }
}
