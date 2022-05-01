import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';
import 'package:flutter_html/flutter_html.dart';

class TopicDetailsScreen extends StatelessWidget {
  const TopicDetailsScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;
    return Scaffold(
      appBar: AppBar(
        title: Text(args.title),
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
      body: StreamBuilder(
          stream: FirebaseFirestore.instance
              .collection('modules/' +
                  args.parentId +
                  '/lessons/' +
                  args.id +
                  '/blocks')
              .snapshots(),
          builder: (context, AsyncSnapshot<QuerySnapshot> snapshot) {
            if (!snapshot.hasData) {
              return const Center(
                child: CircularProgressIndicator(),
              );
            }
            final List<DocumentSnapshot> docs = snapshot.data!.docs;
            return _buildList(context, docs);
          }),
    );

    /*
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
    );*/
  }

  Widget _buildList(BuildContext context, documents) {
    return ListView.builder(
      padding: const EdgeInsets.all(16),
      itemCount: documents.length,
      itemBuilder: (context, index) {
        final DocumentSnapshot doc = documents[index];
        // ignore: avoid_print
        switch (doc['type']) {
          case 'text':
            return _buildBlockText(context, doc);
          case 'code':
            return _buildBlockCode(context, doc);
          case 'image':
            return _buildBlockImage(context, doc);
          default:
            return const Text('No se encontró el tipo de bloque');
        }
      },
    );
  }

  Widget _buildBlockText(BuildContext context, data) {
    return InkWell(
        child: Card(
      elevation: 3,
      margin: const EdgeInsets.only(bottom: 8),
      child: Padding(
        padding: const EdgeInsets.all(10),
        child: Text(
          data['content'],
          style: const TextStyle(fontSize: 18),
        ),
      ),
    ));
  }

  Widget _buildBlockImage(BuildContext context, data) {
    return InkWell(
        child: Card(
      elevation: 3,
      margin: const EdgeInsets.only(bottom: 8),
      child: Padding(
        padding: const EdgeInsets.all(10),
        child: Image.network(
          data['content'],
          fit: BoxFit.cover,
        ),
      ),
    ));
  }

  Widget _buildBlockCode(BuildContext context, data) {
    // http://hilite.me/
    return InkWell(
        child: Card(
      elevation: 2,
      margin: const EdgeInsets.only(bottom: 16),
      child: Html(data: data['content']),
    ));
  }
}
