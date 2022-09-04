// ignore_for_file: prefer_const_constructors, must_be_immutable

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';
import 'package:tdpapp/widgets/survey_question.dart';

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
                AsyncSnapshot<DocumentSnapshot<Map<String, dynamic>>>
                    snapshot) {
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
                      SizedBox(
                        height: 20,
                      ),
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
                      return TextButton(
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
                          onPressed: () {
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
                SizedBox(
                  width: double.infinity,
                ),
                _titleIfContent(data['content']),
                data['contentBody1'].isNotEmpty? _bodyIfContent(data['contentBody1'])   : Container(),
                data['contentBody2'].isNotEmpty? _bodyIfContent(data['contentBody2'])   : Container(),
                data['contentBody3W'].isNotEmpty? _bodyIfContent(data['contentBody3W'])   : Container(),
                data['contentTitle2'].isEmpty 
                  ? Container()
                  : Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 5),
                    child: Divider(
                      thickness: 0.5,
                      color: Colors.black,
                    ),
                  ),
                data['contentTitle2'].isNotEmpty  ? _titleIfContent(data['contentTitle2'])   : Container(),
                data['contentBody3'].isNotEmpty   ? _bodyIfContent(data['contentBody3'])     : Container(),
                data['contentBody4'].isNotEmpty   ? _bodyIfContent(data['contentBody4'])     : Container(),
                //!---
                SizedBox(height: 5,),
                //!---
                data['contentImage2'].isNotEmpty ? Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 10),
                  child: ClipRRect(borderRadius: BorderRadius.circular(20),child: Image.network(data['contentImage2'])),
                ) : Container(),
                    
                data['contentImage2'].isEmpty    ? Container() :
                data['contentTitle3'].isEmpty 
                                                 ? Container() 
                                                 : Padding(
                                                   padding: const EdgeInsets.symmetric(horizontal: 5),
                                                   child: Divider(
                                                     thickness: 0.5,
                                                     color: Colors.black,
                                                   ),
                                               ),
                data['contentTitle3'].isNotEmpty  ? _titleIfContent(data['contentTitle3']) : Container(),
                data['contentBody5'].isNotEmpty   ? _bodyIfContent(data['contentBody5'])    : Container(),
                data['contentBody6'].isNotEmpty   ? _bodyIfContent(data['contentBody6'])   : Container(),
                //!---
                SizedBox(height: 5,),
                //!---
                data['contentImage'].isNotEmpty
                  ? Padding(
                      padding: const EdgeInsets.symmetric(horizontal: 10),
                      child: ClipRRect(
                        borderRadius: BorderRadius.circular(20),
                        child: Image.network(data['contentImage'])),
                    )
                  : Container(),
                data['contentBody7'].isNotEmpty  ? SizedBox(height: 10,)                  : Container(),
                data['contentBody7'].isNotEmpty  ? _bodyIfContent(data['contentBody7'])   : Container(),
                data['contentBody7'].isNotEmpty  ? SizedBox(height: 5,)                   : Container() ,
                data['contentBody8'].isNotEmpty  ? _bodyIfContent(data['contentBody8'])   : Container(),
                data['contentBody8'].isNotEmpty  ? SizedBox(height: 5,)                   : Container(),
                data['contentBody9'].isNotEmpty  ? _bodyIfContent(data['contentBody9'])   : Container(),
                data['contentBody9'].isNotEmpty  ? SizedBox(height: 5,)                   : Container(),
                data['contentBody10'].isNotEmpty ? _bodyIfContent(data['contentBody10'])  : Container(),
                data['contentBody10'].isNotEmpty ? SizedBox(height: 5,)                   : Container(),
                data['contentBody11'].isNotEmpty ? _bodyIfContent(data['contentBody11'])  : Container(),
                data['contentBodyExample'].isNotEmpty ? 
                Column(
                  children: [
                    SizedBox(height: 10,),
                    
                    _bodyIfContent(data['contentBodyExample']),
                  ],
                ) : Container(),
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
                SizedBox(width: double.infinity,),
                data['content'].isNotEmpty            ?   _titleIfContent(data['content'])             : Container(),
                data['contentBody1'].isNotEmpty       ?   _bodyIfContent(data['contentBody1'])         : Container(),
                data['contentBody2'].isNotEmpty       ?   _bodyIfContent(data['contentBody2'])         : Container(),
                data['imageContentBody'].isNotEmpty   ?   _imageExampleText(data['imageContentBody'])  : Container(),
                data['contentBody1WH'].isNotEmpty      ? SizedBox(height: 10,)                     : Container(),
                data['contentBody1WH'].isNotEmpty       ?   _bodyIfContent(data['contentBody1WH'])         : Container(),
                data['contentBody1F'].isNotEmpty      ? SizedBox(height: 10,)              : Container(),          
                data['contentBody1F'].isNotEmpty      ?   _bodyIfContent(data['contentBody1F'])        : Container(),
                data['contentTitle1F'].isNotEmpty      ?   _dividerHeight()                             : Container(),
                
                data['contentTitle1F'].isNotEmpty      ?   _titleIfContent(data['contentTitle1F'])       : Container(), //!
                data['contentBody2F'].isNotEmpty       ?   _bodyIfContent(data['contentBody2F'])         : Container(),
                data['imageContentBody3'].isNotEmpty  ?   _imageExampleText(data['imageContentBody3']) : Container(),//!
                data['contentBody2WH'].isNotEmpty      ? SizedBox(height: 10,)                     : Container(),
                data['contentBody2WH'].isNotEmpty       ?   _bodyIfContent(data['contentBody2WH'])         : Container(),
                data['contentBody2F'].isNotEmpty      ? SizedBox(height: 10,)                          : Container(),
                data['contentTitle2'].isNotEmpty      ?   _dividerHeight() : Container(),


                data['contentTitle2'].isNotEmpty      ?   _titleIfContent(data['contentTitle2'])       : Container(),
                data['contentBody3'].isNotEmpty       ?   _bodyIfContent(data['contentBody3'])         : Container(),
                 data['contentBody4'].isNotEmpty      ?   _bodyIfContent(data['contentBody4'])         : Container(),
                data['imageContentBody2'].isNotEmpty  ?   _imageExampleText(data['imageContentBody2']) : Container(),
                
                data['contentTitle3'].isNotEmpty      ?   _dividerHeight()                             : Container(),
                data['contentTitle3'].isNotEmpty      ?   _titleIfContent(data['contentTitle3'])       : Container(),
                data['contentBody5'].isNotEmpty       ?   _bodyIfContent(data['contentBody5'])         : Container(),
                data['contentBody6'].isNotEmpty       ?   _bodyIfContent(data['contentBody6'])         : Container(),
                data['imageContentBody4'].isNotEmpty  ?   _imageExampleText(data['imageContentBody4']) : Container(),
              ],
            ),
          ),
        );

      case 'quiz':
        return SingleChildScrollView(
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 5),
            child: Column(children: [
              SizedBox(width: double.infinity,),
              data['titleContent1'].isEmpty ? Container() : _titleIfContent(data['titleContent1']),
              data['content'].isEmpty ? Container() : _bodyIfContent(data['content']),
              SizedBox(height: 10,),
                Padding(padding: const EdgeInsets.symmetric(horizontal: 10),child: ClipRRect(
                  borderRadius: BorderRadius.circular(20),
                      child: Image.network(data['imageQuiz'],fit: BoxFit.cover, height: MediaQuery.of(context).size.height*0.40,)),
                ),
              SizedBox(height: 10,),
              SurveyQuestion(
                validOption: data['validOption'],
                options: data['options'].cast<String>(),
                optionsInvalidText: data['optionInvalidText'].cast<String>(),
              )
            ]),
          ),
        );

      case 'video':
        return Container();



      default:
        return const Text('data');
    }
  }

  Widget _imageExampleText(String imageRoute) {
    return Padding(padding: const EdgeInsets.symmetric(horizontal: 10),child: ClipRRect(
                  borderRadius: BorderRadius.circular(25),
                  child: Image.network(imageRoute, height: 220,)),
                );
  }

  Widget _dividerHeight() {
    return Column(
                children: const [
                  SizedBox(height: 5,),
                  Padding(padding:  EdgeInsets.symmetric(horizontal: 5),child: 
                    Divider(
                    thickness: 0.5,
                    color: Colors.black,),
                ),
                ],
              );
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

/*
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
*/


/*
video
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

*/