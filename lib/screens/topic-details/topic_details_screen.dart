import 'package:flutter/material.dart';

class TopicDetailsScreen extends StatelessWidget {
  const TopicDetailsScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: CustomScrollView(
        slivers: [
          SliverAppBar(
              pinned: true,
              snap: true,
              floating: true,
              expandedHeight: 250,
              flexibleSpace: FlexibleSpaceBar(
                title: const Text(
                  'BLOQUE CONDICIONAL "IF"',
                  style: TextStyle(
                    fontSize: 16,
                    fontWeight: FontWeight.w400,
                    color: Colors.white,
                  ),
                ),
                titlePadding: const EdgeInsets.all(9.0),
                centerTitle: true,
                background: Image.network(
                  "https://img.freepik.com/vector-gratis/computadora-portatil-icono-isometrico-codigo-programa-desarrollo-software-aplicaciones-programacion-neon-oscuro_39422-971.jpg?t=st=1650666062~exp=1650666662~hmac=a03e9b93c5fe84a3421fbb6e34b390021959e6457c766825020980a2e0e9bee2&w=740",
                  fit: BoxFit.none,
                ),
              )),
          SliverList(
              delegate: SliverChildListDelegate(
            [
              const SizedBox(
                height: 20,
              ),
              const Text(
                'Topic Details',
                style: TextStyle(fontSize: 20),
              ),
              const SizedBox(
                height: 20,
              ),
              const Text(
                'Topic Details',
                style: TextStyle(fontSize: 20),
              ),
              const SizedBox(
                height: 20,
              ),
              const Text(
                'Topic Details',
                style: TextStyle(fontSize: 20),
              ),
              const SizedBox(
                height: 20,
              ),
            ],
          )),
        ],
      ),
    );
  }
}
