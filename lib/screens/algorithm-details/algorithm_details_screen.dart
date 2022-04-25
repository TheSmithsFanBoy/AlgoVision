import 'package:flutter/material.dart';

class AlgorithmDetailsScreen extends StatelessWidget {
  const AlgorithmDetailsScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Algoritmo Bubble Sort'),
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
      body: Center(
        // Challenges
        child: Column(children: [
          TextButton(onPressed: () {}, child: const Text('Tutorial')),
          TextButton(onPressed: () {}, child: const Text('Practicar')),
        ]),
      ),
    );
  }
}
