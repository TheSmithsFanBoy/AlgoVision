// ignore_for_file: prefer_const_constructors, must_be_immutable

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:percent_indicator/linear_percent_indicator.dart';
import 'package:tdpapp/models/screen_arguments.dart';
import 'package:tdpapp/widgets/survey_question.dart';
import 'package:video_player/video_player.dart';

class TopicContentScreen extends StatefulWidget {
  const TopicContentScreen({Key? key}) : super(key: key);

  @override
  State<TopicContentScreen> createState() => _TopicContentScreenState();
}

class _TopicContentScreenState extends State<TopicContentScreen> {



  int pos = 0;
  bool play = true;
  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;
    debugPrint(args.description);
    return SafeArea(
      child: Scaffold(
          
          body: FutureBuilder(
            future: FirebaseFirestore.instance
                .collection('topics')
                .doc(args.id)
                .get(),
            builder: (context,
                AsyncSnapshot<DocumentSnapshot<Map<String, dynamic>>> snapshot) {
              if (snapshot.hasData &&
                  snapshot.connectionState == ConnectionState.done) {
                if (!snapshot.hasData) {
                  return const Center(
                    child: CircularProgressIndicator(),
                  );
                }
                final Map<String, dynamic>? data = snapshot.data?.data();
                if (data == null) {
                  return const Text('data is null');
                }
                return SingleChildScrollView(
                  child: Column(
                    children: [
                      SizedBox(height: 20,),
                      Center(
                          child: Text(data['title'],
                              style: const TextStyle(
                                  fontSize: 20,
                                  fontWeight: FontWeight.bold,
                                  color: Colors.indigo))),
                      Padding(
                        padding: const EdgeInsets.symmetric(horizontal: 5),
                        child: _buildContent(context, data),
                      ),
                    ],
                  ),
                );
              }
              return const CircularProgressIndicator();
            },
          ),
          bottomNavigationBar: BottomAppBar(
            color: Colors.transparent,
            elevation: 0,
            child: Padding(
              padding: const EdgeInsets.all(13.0),
              child: FutureBuilder(
                future: FirebaseFirestore.instance
                    .collection('topics')
                    .where('order', isEqualTo: int.parse(args.parentId) + 1)
                    .get(),
                builder: (context, snapshot) {
                  if (snapshot.hasData && snapshot.data != null) {
                    var p = (snapshot.data!) as QuerySnapshot;
                    if (p.docs.isNotEmpty) {
                      return  TextButton(
                          style: TextButton.styleFrom(
                            backgroundColor: Colors.yellow.shade600,
                            fixedSize: const Size(30, 30),
                          ),
                          child: Text('FINALIZAR CONTENIDO',
                              style: TextStyle(
                                  fontSize: 19,
                                  fontWeight: FontWeight.bold,
                                  color: Colors.indigo)),
                          onPressed: () {
                            FirebaseFirestore.instance
                                .collection('users')
                                .doc(FirebaseAuth.instance.currentUser!.uid)
                                .update({
                              'topics': FieldValue.arrayUnion([
                                FirebaseFirestore.instance
                                    .collection('topics')
                                    .doc(args.id)
                              ])
                            });
                            Navigator.pop(context);
                            //Navigator.pushReplacementNamed(
                            //    context, '/topic-content',
                            //    arguments: ScreenArguments(
                            //        id: p.docs[0].id,
                            //        parentId:
                            //            (int.parse(args.parentId) + 1).toString(),
                            //        title: "",
                            //        description: p.docs[0]['lesson'].id));
                          });
                    } else {
                      return TextButton(
                          style: TextButton.styleFrom(
                            backgroundColor: Colors.yellow.shade600,
                            fixedSize: const Size(30, 30),
                          ),
                          child: const Text('FINALIZAR LECCIÓN',
                              style: TextStyle(
                                  fontSize: 19,
                                  fontWeight: FontWeight.bold,
                                  color: Colors.indigo)),
                          onPressed:  () {
                            var lessonRef = FirebaseFirestore.instance
                                .collection('lessons')
                                .doc(args.description);
                            debugPrint(args.description);
                            // update progress
                            FirebaseFirestore.instance
                                .collection('users')
                                .doc(FirebaseAuth.instance.currentUser!.uid)
                                .update({
                              'topics': FieldValue.arrayUnion([
                                FirebaseFirestore.instance
                                    .collection('topics')
                                    .doc(args.id)
                              ])
                            });
                            // assign challenge
                            var challenges = FirebaseFirestore.instance
                                .collection('challenges')
                                .where('lesson', isEqualTo: lessonRef)
                                .get();
                            challenges.then((value) {
                              if (value.docs.isNotEmpty) {
                                var challenge = value.docs[0];
                                var challengeRef = FirebaseFirestore.instance
                                    .collection('challenges')
                                    .doc(challenge.id);
                                FirebaseFirestore.instance
                                    .collection('users')
                                    .doc(FirebaseAuth.instance.currentUser!.uid)
                                    .update({
                                  'challenges':
                                      FieldValue.arrayUnion([challengeRef])
                                });
                              }
                            });
                            // assign medal
                            var medals = FirebaseFirestore.instance
                                .collection('medals')
                                .where('lesson', isEqualTo: lessonRef)
                                .get();
                            medals.then((value) {
                              if (value.docs.isNotEmpty) {
                                var medal = value.docs[0];
                                var medalRef = FirebaseFirestore.instance
                                    .collection('medals')
                                    .doc(medal.id);
                                FirebaseFirestore.instance
                                    .collection('users')
                                    .doc(FirebaseAuth.instance.currentUser!.uid)
                                    .update({
                                  'medals': FieldValue.arrayUnion([medalRef])
                                });
                              }
                            });

                            Navigator.pop(context);
                          });
                    }
                  } else {
                    return const Center(child: Text("Cargando..."));
                  }
                },
              ),
            ),
          )),
    );
  }

  Widget _buildContent(BuildContext context, Map<String, dynamic> data) {
    switch (data['type']) {

      case 'text':
        return SingleChildScrollView(
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 5),
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              mainAxisSize: MainAxisSize.max,
              children: [
                SizedBox(width: double.infinity,),
                _titleIfContent(data['content']),
                data['contentBody1'].isNotEmpty ? _bodyIfContent(data['contentBody1']) : Container(),
                data['contentBody2'].isNotEmpty ? _bodyIfContent(data['contentBody2']) : Container(),
                Padding( padding: const EdgeInsets.symmetric(horizontal: 5), child: Divider( thickness: 0.5, color: Colors.black,),),
                data['contentTitle2'].isNotEmpty ? _titleIfContent(data['contentTitle2']):  Container(),
                data['contentBody3'].isNotEmpty ? _bodyIfContent(data['contentBody3']) : Container(),
                data['contentBody4'].isNotEmpty ? _bodyIfContent(data['contentBody4']) : Container(),
                SizedBox(height: 5,),
                data['contentImage2'].isNotEmpty ? Image.network(data['contentImage2']) : Container(),
                Padding(padding: const EdgeInsets.symmetric(horizontal: 5),child: Divider(thickness: 0.5,color: Colors.black,),),
                data['contentTitle3'].isNotEmpty ? _titleIfContent(data['contentTitle3']):  Container(),
                data['contentBody5'].isNotEmpty ? _bodyIfContent(data['contentBody5']) : Container(),
                data['contentBody6'].isNotEmpty ? _bodyIfContent(data['contentBody6']) : Container(),
                SizedBox(height: 5,),
                data['contentImage'].isNotEmpty ? Image.network(data['contentImage']) : Container(),
              ],
            ),
          ),
        );

      //?-----------------------------------------------------------------------

      case 'text-ejemplo':
        return SingleChildScrollView(
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 5),
            child: Column(
              children: [
                SizedBox(
                  width: double.infinity,
                ),
                _titleIfContent(data['content']),
                _bodyIfContent(
                    '* La sintaxis de un condicional if, es muy simple e intuitiva. A continuación, se observa un ejemplo de su estructura en código.'),
                _bodyIfContent(
                    '* A continuación, se observa un ejemplo de su estructura en código.'),
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 10),
                  child: ClipRRect(
                    borderRadius: BorderRadius.circular(20),
                    child: Image.asset('assets/icons/sintaxis_if.png')),
                ),
                SizedBox(
                  height: 5,
                ),
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 5),
                  child: Divider(
                    thickness: 0.5,
                    color: Colors.black,
                  ),
                ),
                _titleIfContent('Los condicionales selectivos'),
                _bodyIfContent(
                    '* La sintaxis de un condicional if-else es similar a la del condicional if, pero se le adiciona una nueva "estructura" que es el else, el cual indica el conjunto de acciones a llevar a cabo, en caso de que la condición del if no se cumpla.'),
                _bodyIfContent(
                    '* La sintaxis de un condicional if, es muy simple e intuitiva. A continuación, se observa un ejemplo de su estructura en código.'),
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 10),
                  child: ClipRRect(
                    borderRadius: BorderRadius.circular(20),
                    child: Image.asset('assets/icons/if_else_estructura.png')),
                ),
                SizedBox(
                  height: 5,
                ),
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 5),
                  child: Divider(
                    thickness: 0.5,
                    color: Colors.black,
                  ),
                ),
                _titleIfContent('Ejemplo en código'),
                _bodyIfContent(
                    '* A continuación, se presenta un ejemplo de un pequeño programa en el cual se pone en práctica lo aprendido en la lección.'),
                _bodyIfContent(
                    'En este ejemplo se busca determinar si el usuario el mayor o menor de edad en base a la edad ingresada. Sí la edad que se ingresa es mayor o igual a 18, el programa mostrára un mensaje en consola el cual indicara "Eres mayor de edad.". En caso de no cumplir la condición, el programa mostrara el siguiente mensaje en consola "Eres menor de edad.".'),
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 10),
                  child: ClipRRect(
                    borderRadius: BorderRadius.circular(20),
                    child: Image.asset('assets/icons/if_else.png')),
                ),
              ],
            ),
          ),
        );



      case 'quiz':
        return Column(children: [
          Text(data['content'], style: const TextStyle(fontSize: 16)),
          const SizedBox(height: 20),
          data['image'] == null
              ? SizedBox(height: 0)
              : Image.network(
                  data['image'],
                ),
          const SizedBox(height: 20),
          const Text("Selecciona una respuesta y presiona en validar...",
              style: TextStyle(fontSize: 15)),
          SurveyQuestion(
            validOption: data['validOption'],
            options: data['options'].cast<String>(),
            optionsInvalidText: data['optionInvalidText'].cast<String>(),
          )
        ]);



      case 'video':
        // final _paso = Provider.of<TopicVideoProvider>(context);
        VideoPlayerController _controller =
            VideoPlayerController.network(data['video']);
        var stepWidget = Step(textStep: data['pasos'][pos]);
        Future<void> _initializeVideoPlayerFuture = _controller.initialize();
        _controller.setVolume(1.0);
        _controller.setLooping(false);
        _controller.play();
        _controller.addListener(() {
          if (_controller.value.position.inSeconds == 5 && play == true) {
            play == false;
            _controller.pause();
          }
          // print("VIDEO POSITION IS ${_controller.value.position.inMilliseconds}");
          // print("VIDEO DURATION (s) ${_controller.value.duration.inSeconds}");
          // print("VIDEO DURATION (milsec) ${_controller.value.duration.inMilliseconds}");
          // print("VIDEO DUR (mcrosec) ${_controller.value.duration.inMicroseconds}");
        });
        return Column(children: [
          LinearPercentIndicator(
            width: 330,
            lineHeight: 15,
            percent: 0.166666,
            linearStrokeCap: LinearStrokeCap.roundAll,
            progressColor: Colors.blue,
            backgroundColor: Colors.grey,
            animation: true,
            animationDuration: 5000,
          ),
          const SizedBox(height: 40),
          Text(data['content'], style: const TextStyle(fontSize: 17)),
          const SizedBox(height: 40),
          FutureBuilder(
            future: _initializeVideoPlayerFuture,
            builder: (context, snapshot) {
              if (snapshot.connectionState == ConnectionState.done) {
                return Center(
                  child: AspectRatio(
                    aspectRatio: _controller.value.aspectRatio,
                    child: VideoPlayer(_controller),
                  ),
                );
              } else {
                return Center(
                  child: CircularProgressIndicator(),
                );
              }
            },
          ),
          const SizedBox(height: 40),
          stepWidget,
          TextButton(
              style: TextButton.styleFrom(
                //backgroundColor: Colors.yellow.shade600,
                fixedSize: const Size(200, 50),
              ),
              child: const Text('Siguiente Paso',
                  style: TextStyle(
                      fontSize: 19,
                      fontWeight: FontWeight.bold,
                      color: Colors.indigo)),
              onPressed: () {
                // pos = pos + 1;
                _controller.play();

                // stepWidget.update(data['pasos'][pos]);
              })
        ]);
      default:
        return const Text('data');
    }
  }

  Widget _bodyIfContent(String content) {
    return Container(
        margin: EdgeInsets.only(bottom: 10),
        padding: EdgeInsets.symmetric(horizontal: 16),
        child: Text(
          content,
          textAlign: TextAlign.justify,
          style:
              TextStyle(wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14),
        ));
  }

  Widget _titleIfContent(String title) {
    return Padding(
      padding: EdgeInsets.symmetric(horizontal: 5),
      child: Container(
        height: 35,
        decoration: BoxDecoration(
            border: Border.all(color: Colors.black, width: 1.3),
            gradient: LinearGradient(
                begin: Alignment.topRight,
                end: Alignment.bottomLeft,
                colors: const [Color(0xff1488CC), Color(0xff2B32B2)]),
            borderRadius: BorderRadius.only(
              topRight: Radius.circular(17),
              bottomLeft: Radius.circular(17),
            ),
            color: Colors.black.withOpacity(0.3)),
        margin: EdgeInsets.only(top: 10, bottom: 10),
        child: Center(
          child: Text(
            title,
            textAlign: TextAlign.center,
            style: TextStyle(
                letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),
          ),
        ),
      ),
    );
  }
}

class Step extends StatefulWidget {
  String textStep;
  Step({Key? key, required this.textStep}) : super(key: key);

  @override
  State<Step> createState() => _StepState();
}

class _StepState extends State<Step> {
  // String textStep;
  // Step({Key? key,  required this.textStep}) : super(key: key);
  //
  // void test () {
  //   setState(() {
  //     print("si esta ejecutando");
  //   });
  // }
  @override
  Widget build(BuildContext context) {
    // final _paso = Provider.of<TopicVideoProvider>(context);
    // _paso.updateUser(widget.textStep);
    return Text(widget.textStep, style: TextStyle(fontSize: 15));
  }
}
