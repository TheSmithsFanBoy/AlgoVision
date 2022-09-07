// ignore_for_file: prefer_const_constructors, must_be_immutable

import 'package:cached_network_image/cached_network_image.dart';
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
        appBar: AppBar(
          backgroundColor: Colors.indigo,
          title: Text(args.title),
          centerTitle: true,
        ),
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
                        height: 10,
                      ),
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
                    //validOption == 'Tu ganas el premio' ? 
                    
                    var p = (snapshot.data!) as QuerySnapshot;
                    print(snapshot.data);
                    if (p.docs.isNotEmpty) {
                      return TextButton(
                          style: TextButton.styleFrom(
                            side: BorderSide(
                              color: Colors.black,
                              width: 2
                            ),
                            backgroundColor: Colors.indigo,
                            fixedSize: const Size(30, 30),
                          ),
                          child: Text('FINALIZAR CONTENIDO',
                              style: TextStyle(
                                  fontSize: 19,
                                  fontWeight: FontWeight.bold,
                                  color: Colors.white)),
                          onPressed: () {
                            //* agrega topicos de User
                            FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser!.uid).update({
                              'topics': FieldValue.arrayUnion([FirebaseFirestore.instance.collection('topics').doc(args.id)])
                            });
                            FirebaseFirestore.instance.collection('/topics/').doc(args.id).update({
                              'completedBy': FieldValue.arrayUnion([FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null')
                              ])
                            });
                            Navigator.pop(context);
                          });
                    } else {
                       return TextButton(style: TextButton.styleFrom(
                        side: BorderSide(
                              color: Colors.black,
                              width: 2
                            ),
                        backgroundColor: Colors.indigo,fixedSize: const Size(30, 30),),
                          child: const Text('FINALIZAR LECCIÓN',style: TextStyle(fontSize: 19,fontWeight: FontWeight.bold,color: Colors.white)),
                          onPressed: () {
                            var lessonRef = FirebaseFirestore.instance.collection('lessons').doc(args.description);
                            
                            debugPrint(args.description);
                            // update progress
                            FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser!.uid).
                            update({
                                    'topics': FieldValue.arrayUnion([
                                      FirebaseFirestore.instance
                                          .collection('topics')
                                          .doc(args.id)])
                                  });

                            FirebaseFirestore.instance.collection('/topics/').doc(args.id).
                              update({
                                        'completedBy': FieldValue.arrayUnion([FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null')])
                                    });

                            //!--------------------------- assign challenge - lessonDone

                            if (args.id == '5CxnC5paQ3yD1a6Tjmek') {
                              var challengesLessonDone = FirebaseFirestore.instance.collection('challenges').get();
                              var usuarioActual = FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null');

                                challengesLessonDone.then((value) {
                                if (value.docs.isNotEmpty) {

                                  var challenge = value.docs[3];
                                  FirebaseFirestore.instance.collection('challenges').doc(challenge.id).
                                    update({
                                              'lessonDone':FieldValue.arrayUnion([usuarioActual])
                                          });
                                }
                              });  
                              
                            }

                            if (args.id == 'xY7NyrKany1KgNWPPLAd') {
                              var challengesLessonDone = FirebaseFirestore.instance.collection('challenges').get();
                              var usuarioActual = FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null');

                                challengesLessonDone.then((value) {
                                if (value.docs.isNotEmpty) {

                                  var challenge = value.docs[2];
                                  FirebaseFirestore.instance.collection('challenges').doc(challenge.id).
                                    update({
                                              'lessonDone':FieldValue.arrayUnion([usuarioActual])
                                          });
                                }
                              });  
                              
                            }



                            if (args.id == 'dRwf6L9K6fnECtvU61rC') {
                              var challengesLessonDone = FirebaseFirestore.instance.collection('challenges').get();
                              var usuarioActual = FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null');

                                challengesLessonDone.then((value) {
                                if (value.docs.isNotEmpty) {

                                  var challenge = value.docs[4];
                                  FirebaseFirestore.instance.collection('challenges').doc(challenge.id).
                                    update({
                                              'lessonDone':FieldValue.arrayUnion([usuarioActual])
                                          });
                                }
                              });  
                              
                            }


                            if (args.id == 'nGCLksgvXyb1TKMWpePi') {
                              var challengesLessonDone = FirebaseFirestore.instance.collection('challenges').get();
                              var usuarioActual = FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null');

                                challengesLessonDone.then((value) {
                                if (value.docs.isNotEmpty) {

                                  var challenge = value.docs[0];
                                  FirebaseFirestore.instance.collection('challenges').doc(challenge.id).
                                    update({
                                              'lessonDone':FieldValue.arrayUnion([usuarioActual])
                                          });
                                }
                              });  
                              
                            }


                            if (args.id == 'KH99JvRZ9MOAo8DnnfLH') {
                              var challengesLessonDone = FirebaseFirestore.instance.collection('challenges').get();
                              var usuarioActual = FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null');

                                challengesLessonDone.then((value) {
                                if (value.docs.isNotEmpty) {

                                  var challenge = value.docs[5];
                                  FirebaseFirestore.instance.collection('challenges').doc(challenge.id).
                                    update({
                                              'lessonDone':FieldValue.arrayUnion([usuarioActual])
                                          });
                                }
                              });  
                              
                            }

                            
                             if (args.id == 'wCYEbpCDc4uQR0qPSbkU') {
                              var challengesLessonDone = FirebaseFirestore.instance.collection('challenges').get();
                              var usuarioActual = FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null');

                                challengesLessonDone.then((value) {
                                if (value.docs.isNotEmpty) {

                                  var challenge = value.docs[6];
                                  FirebaseFirestore.instance.collection('challenges').doc(challenge.id).
                                    update({
                                              'lessonDone':FieldValue.arrayUnion([usuarioActual])
                                          });
                                }
                              });  
                              
                            }


                            if (args.id == 'IJ9qxUlPzlLcvqSF47ul') {
                              var challengesLessonDone = FirebaseFirestore.instance.collection('challenges').get();
                              var usuarioActual = FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser?.uid ?? 'null');

                                challengesLessonDone.then((value) {
                                if (value.docs.isNotEmpty) {

                                  var challenge = value.docs[1];
                                  FirebaseFirestore.instance.collection('challenges').doc(challenge.id).
                                    update({
                                              'lessonDone':FieldValue.arrayUnion([usuarioActual])
                                          });
                                }
                              });  
                              
                            }


                            
                          //!---------------------------------------------

                            // assign challenge
                            var challenges = FirebaseFirestore.instance.collection('challenges').where('lesson', isEqualTo: lessonRef).get();

                            challenges.then((value) {
                              if (value.docs.isNotEmpty) {

                                var challenge = value.docs[0];
                                var challengeRef = FirebaseFirestore.instance.collection('challenges').doc(challenge.id);

                                FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser!.uid).
                                  update({
                                            'challenges':FieldValue.arrayUnion([challengeRef])
                                        });
                              }
                            });

                            // assign medal
                            var medals = FirebaseFirestore.instance.collection('medals').where('lesson', isEqualTo: lessonRef).get();
                            medals.then((value) {
                              if (value.docs.isNotEmpty) {
                                var medal = value.docs[0];
                                var medalRef = FirebaseFirestore.instance.collection('medals').doc(medal.id);
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
                data['widgetTeoriaIF'].isNotEmpty ? _widgetIfTeoria(context) : Container(),
                data['widgetTeoriaFOR'].isNotEmpty ? _widgetFORTeoria(context) : Container(),
                data['widgetTeoriaWHILE'].isNotEmpty ? _widgetWhileTeoria(context) : Container(),
                
            //    _titleIfContent(data['content']),
            //    data['contentBody1'].isNotEmpty? _bodyIfContent(data['contentBody1'])   : Container(),
            //    data['contentBody2'].isNotEmpty? _bodyIfContent(data['contentBody2'])   : Container(),
            //    data['contentBody3W'].isNotEmpty? _bodyIfContent(data['contentBody3W'])   : Container(),
            //    data['contentTitle2'].isEmpty 
            //      ? Container()
            //      : Padding(
            //        padding: const EdgeInsets.symmetric(horizontal: 5),
            //        child: Divider(
            //          thickness: 0.5,
            //          color: Colors.black,
            //        ),
            //      ),
            //    data['contentTitle2'].isNotEmpty  ? _titleIfContent(data['contentTitle2'])   : Container(),
            //    data['contentBody3'].isNotEmpty   ? _bodyIfContent(data['contentBody3'])     : Container(),
            //    data['contentBody4'].isNotEmpty   ? _bodyIfContent(data['contentBody4'])     : Container(),
            //    //!---
            //    SizedBox(height: 5,),
            //    //!---
            //    data['contentImage2'].isNotEmpty ? Padding(
            //      padding: const EdgeInsets.symmetric(horizontal: 10),
            //      child: ClipRRect(borderRadius: BorderRadius.circular(20),child: CachedNetworkImage(data['contentImage2'])),
            //    ) : Container(),
            //        
            //    data['contentImage2'].isEmpty    ? Container() :
            //    data['contentTitle3'].isEmpty 
            //                                     ? Container() 
            //                                     : Padding(
            //                                       padding: const EdgeInsets.symmetric(horizontal: 5),
            //                                       child: Divider(
            //                                         thickness: 0.5,
            //                                         color: Colors.black,
            //                                       ),
            //                                   ),
            //    data['contentTitle3'].isNotEmpty  ? _titleIfContent(data['contentTitle3']) : Container(),
            //    data['contentBody5'].isNotEmpty   ? _bodyIfContent(data['contentBody5'])    : Container(),
            //    data['contentBody6'].isNotEmpty   ? _bodyIfContent(data['contentBody6'])   : Container(),
            //    //!---
            //    SizedBox(height: 5,),
            //    //!---
            //    data['contentImage'].isNotEmpty
            //      ? Padding(
            //          padding: const EdgeInsets.symmetric(horizontal: 10),
            //          child: ClipRRect(
            //            borderRadius: BorderRadius.circular(20),
            //            child: CachedNetworkImage(data['contentImage'])),
            //        )
            //      : Container(),
            //    data['contentBody7'].isNotEmpty  ? SizedBox(height: 10,)                  : Container(),
            //    data['contentBody7'].isNotEmpty  ? _bodyIfContent(data['contentBody7'])   : Container(),
            //    data['contentBody7'].isNotEmpty  ? SizedBox(height: 5,)                   : Container() ,
            //    data['contentBody8'].isNotEmpty  ? _bodyIfContent(data['contentBody8'])   : Container(),
            //    data['contentBody8'].isNotEmpty  ? SizedBox(height: 5,)                   : Container(),
            //    data['contentBody9'].isNotEmpty  ? _bodyIfContent(data['contentBody9'])   : Container(),
            //    data['contentBody9'].isNotEmpty  ? SizedBox(height: 5,)                   : Container(),
            //    data['contentBody10'].isNotEmpty ? _bodyIfContent(data['contentBody10'])  : Container(),
            //    data['contentBody10'].isNotEmpty ? SizedBox(height: 5,)                   : Container(),
            //    data['contentBody11'].isNotEmpty ? _bodyIfContent(data['contentBody11'])  : Container(),
            //    data['contentBodyExample'].isNotEmpty ? 
            //    Column(
            //      children: [
            //        SizedBox(height: 10,),
            //        
            //        _bodyIfContent(data['contentBodyExample']),
            //      ],
            //    ) : Container(),
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
                data['widgetIfEjemplo'].isNotEmpty            ?   _widgetIfEjemplo(context)       : Container(),
                data['widgetFOREjemplo'].isNotEmpty            ?   _widgetFOREjemplo(context)       : Container(),
                data['widgetWHILEEjemplo'].isNotEmpty            ?   widgetWHILEEjemplo(context)       : Container(),
                //data['content'].isNotEmpty            ?   _titleIfContent(data['content'])             : Container(),
                //data['contentBody1'].isNotEmpty       ?   _bodyIfContent(data['contentBody1'])         : Container(),
                //data['contentBody2'].isNotEmpty       ?   _bodyIfContent(data['contentBody2'])         : Container(),
                //data['imageContentBody'].isNotEmpty   ?   _imageExampleText(data['imageContentBody'])  : Container(),
                //data['contentBody1WH'].isNotEmpty      ? SizedBox(height: 10,)                     : Container(),
                //data['contentBody1WH'].isNotEmpty       ?   _bodyIfContent(data['contentBody1WH'])         : Container(),
                //data['contentBody1F'].isNotEmpty      ? SizedBox(height: 10,)              : Container(),          
                //data['contentBody1F'].isNotEmpty      ?   _bodyIfContent(data['contentBody1F'])        : Container(),
                //data['contentTitle1F'].isNotEmpty      ?   _dividerHeight()                             : Container(),
                //data['contentTitle1F'].isNotEmpty      ?   _titleIfContent(data['contentTitle1F'])       : Container(), //!
                //data['contentBody2F'].isNotEmpty       ?   _bodyIfContent(data['contentBody2F'])         : Container(),
                //data['imageContentBody3'].isNotEmpty  ?   _imageExampleText(data['imageContentBody3']) : Container(),//!
                //data['contentBody2WH'].isNotEmpty      ? SizedBox(height: 10,)                     : Container(),
                //data['contentBody2WH'].isNotEmpty       ?   _bodyIfContent(data['contentBody2WH'])         : Container(),
                //data['contentBody2F'].isNotEmpty      ? SizedBox(height: 10,)                          : Container(),
                //data['contentTitle2'].isNotEmpty      ?   _titleIfContent(data['contentTitle2'])       : Container(),
                //data['contentBody3'].isNotEmpty       ?   _bodyIfContent(data['contentBody3'])         : Container(),
                // data['contentBody4'].isNotEmpty      ?   _bodyIfContent(data['contentBody4'])         : Container(),
                //data['imageContentBody2'].isNotEmpty  ?   _imageExampleText(data['imageContentBody2']) : Container(),
                //data['contentTitle3'].isNotEmpty      ?   _dividerHeight()                             : Container(),
                //data['contentTitle3'].isNotEmpty      ?   _titleIfContent(data['contentTitle3'])       : Container(),
                //data['contentBody5'].isNotEmpty       ?   _bodyIfContent(data['contentBody5'])         : Container(),
                //data['contentBody6'].isNotEmpty       ?   _bodyIfContent(data['contentBody6'])         : Container(),
                //data['imageContentBody4'].isNotEmpty  ?   _imageExampleText(data['imageContentBody4']) : Container(),
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
              data['quizIF'].isNotEmpty ? _quizIF(context) : Container(),
              data['quizFOR'].isNotEmpty ? _quizFOR(context) : Container(),
              data['quizWHILE'].isNotEmpty ? _quizWHILE(context) : Container(),
              //data['titleContent1'].isEmpty ? Container() : _titleIfContent(data['titleContent1']),
              //data['content'].isEmpty ? Container() : _bodyIfContent(data['content']),
              //SizedBox(height: 10,),
              //  Padding(padding: const EdgeInsets.symmetric(horizontal: 10),child: ClipRRect(
              //    borderRadius: BorderRadius.circular(20),
              //        child: CachedNetworkImage(data['imageQuiz'],fit: BoxFit.cover, height: MediaQuery.of(context).size.height*0.40,)),
              //  ),
              //////SizedBox(height: 10,),
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
                  child: CachedNetworkImage(
                    imageUrl: imageRoute, 
                    placeholder: (context, url) => Center(child: Text('Cargando')),
                    height: 220,)),
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
  
  Widget _quizWHILE(BuildContext context) {
    var sizeWidth = MediaQuery.of(context).size.width;

    return Column(
      children: [
        SizedBox(height: 20,),
        Container( 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                SizedBox(height: 5,),
                Container(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('¡Corrobora lo aprendido!', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15, bottom: 15),
                  child: Text('Dada la siguiente imagen, selecciona la alternativa correcta la cuál será la salida del programa', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! EJEMPLO IF 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Column(
            children: [
              Padding(
                padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
                child: ClipRRect(
                  borderRadius: BorderRadius.circular(15),
                  child: CachedNetworkImage(
                    imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/while%2Fquiz%2Fquiz_while.png?alt=media&token=08bf6c90-b7c0-4408-8583-6b59484cfaa4',
                    placeholder: (context, url) => Center(child: Text('Cargando')),
                    ))
              ),
            ],
          ),
        ),
        SizedBox(height: 30,),
      ],
    );
  }

  Widget _quizFOR(BuildContext context) {

    var sizeHeight = MediaQuery.of(context).size.height;
    var sizeWidth = MediaQuery.of(context).size.width;

    return Column(
      children: [
        SizedBox(height: 20,),
        Container( 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                SizedBox(height: 5,),
                Container(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('¡Corrobora lo aprendido!', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15, bottom: 15),
                  child: Text('Dada la siguiente imagen, selecciona la alternativa correcta la cuál será la salida del programa', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! EJEMPLO IF 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Column(
            children: [
              Padding(
                padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
                child: ClipRRect(
                  borderRadius: BorderRadius.circular(15),
                  child: CachedNetworkImage(
                    imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/for%2Fquiz%2Ffor_quiz.png?alt=media&token=330140b3-113e-41d6-8a9c-e5c90e925222',
                    placeholder: (context, url) => Center(child: Text('Cargando')),
                    ))
              ),
            ],
          ),
        ),
        SizedBox(height: 30,),
      ],
    );
  }

  Widget _quizIF(BuildContext context) {

    var sizeHeight = MediaQuery.of(context).size.height;
    var sizeWidth = MediaQuery.of(context).size.width;

    return Column(
      children: [
        SizedBox(height: 20,),
        Container( 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                SizedBox(height: 5,),
                Container(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('¡Corrobora lo aprendido!', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15, bottom: 15),
                  child: Text('Dada la siguiente imagen, selecciona la alternativa correcta la cuál será la salida del programa', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! EJEMPLO IF 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Column(
            children: [
              Padding(
                padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
                child: ClipRRect(
                  borderRadius: BorderRadius.circular(15),
                  child: CachedNetworkImage(
                    imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/if%2Fquiz_if.png?alt=media&token=666296b2-8cc6-4250-a484-7dd4eb69a797',
                    placeholder: (context, url) => Center(child: Text('Cargando')),
                    ))
              ),
            ],
          ),
        ),
        SizedBox(height: 30,),
      ],
    );
  }

  Widget widgetWHILEEjemplo(BuildContext context) {

    var sizeHeight = MediaQuery.of(context).size.height;
    var sizeWidth = MediaQuery.of(context).size.width;

    return Column(
      children: [
        SizedBox(height: 20,),
        Container( 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                SizedBox(height: 5,),
                Container(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('Ejemplo: Multiplicación de números', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15),
                  height: sizeHeight* 0.22,
                  child: Text('En este ejemplo, el ciclo se detendrá cuando el valor de "i" sea mayor a "final", es decir, 40. Como se observa, en cada iteración a "i" se le asignará un nuevo valor el cual será la multiplicación de "j" x "10". Luego de ello, el valor de "j" aumentara en 1. Esto se repetira hasta que la condición deje de cumplirse.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! EJEMPLO IF 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Column(
            children: [
              Padding(
                padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
                child: ClipRRect(
                  borderRadius: BorderRadius.circular(15),
                  child: CachedNetworkImage(
                    imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/while%2Fejemplo%2Fwhile_ejemplo_01.png?alt=media&token=cd9875a2-6932-40b2-9699-c304dd9a961d',
                    placeholder: (context, url) => Center(child: Text('Cargando')),
                    ))
              ),
              Padding(
                padding: EdgeInsets.symmetric(horizontal: 15).copyWith(bottom: 15, top: 5),
                child: Text('La salida en consola de este ejemplo sería el siguiente: 0 10 20 30 40', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
              ),
              
            ],
          ),
        ),
        SizedBox(height: 30,),
        Container( 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                SizedBox(height: 5,),
                Container(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('Ejemplo: Suma de números', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15, bottom: 15),
                  child: Text('En este ejemplo, se pide que se ingrese un número el cual permitirá saber hasta cuando deberá ejecutarse la estructura repetitiva. Como se observa, en cada iteración se deberá ingresar un número, el cual se sumará con lo almacenado en "suma" y "contador" aumentará en 1 luego de cada iteración, hasta que la condición deje de cumplirse.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! EJEMPLO IF 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Column(
            children: [
              Padding(
                padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
                child: ClipRRect(
                  borderRadius: BorderRadius.circular(15),
                  child: CachedNetworkImage(
                    imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/while%2Fejemplo%2Fwhile_ejemplo_02.png?alt=media&token=5d40ad6b-7700-41de-9c9e-bbc2a0baa164',
                    placeholder: (context, url) => Center(child: Text('Cargando')),))
              ),
              Padding(
                padding: EdgeInsets.symmetric(horizontal: 15).copyWith(bottom: 15, top: 5),
                child: Text('Sí "n" fuese 3, entonces la cantidad de números a ingresar sería de 3. Asimismo, si los 3 números ingresados fuesen 10, 20 y 30. La salida en consola del programa sería 60.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
              ),
            ],
          ),
        ),
      ],
    );
  }

  Widget _widgetWhileTeoria(BuildContext context) {

    var sizeHeight = MediaQuery.of(context).size.height;
    var sizeWidth = MediaQuery.of(context).size.width;

    return Column(
      children: [
        SizedBox(height: 20,),
        Container( //! Condicionales
          width: sizeWidth * 0.9,
          height: sizeHeight * 0.3,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                Expanded(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('Estructura Repetitiva WHILE', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 10),
                  height: sizeHeight* 0.14,
                  child: Text('Esta estructura de control permite ejecutar un conjunto de instrucciones siempre y cuando la condición se cumpla, en cuanto la condición se cumpla el ciclo deja de ejecutarse.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
                Expanded(
                  child: ElevatedButton(
                    onPressed: ()=>dialogWHILE(context, sizeWidth, sizeHeight), 
                    style: ElevatedButton.styleFrom(
                      
                      side: BorderSide(
                        color: Colors.white,
                        width: 0.65
                      ),
                      primary: Colors.transparent
                    ),
                    child: Text('SINTAXIS', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 12, fontWeight: FontWeight.w600)),
                  
                  ),
                ),
                
                
              ],
            ),
          ),
        ),
        
        SizedBox(height: 30,)
      ],
    );
  }

  Widget _widgetFOREjemplo(BuildContext context) {

    var sizeHeight = MediaQuery.of(context).size.height;
    var sizeWidth = MediaQuery.of(context).size.width;

    return Column(
      children: [
        SizedBox(height: 20,),
        Container( 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                SizedBox(height: 5,),
                Container(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('Ejemplo: Cuenta Regresiva', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15),
                  height: sizeHeight* 0.22,
                  child: Text('Se presenta un ejemplo sencillo en cual se visualiza que el ciclo for también puede iterar disminuyendo el valor del contador, para comprender esto, lo que se realizará será imprimir por pantalla una cuenta regresiva desde el número diez hasta el cero.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! EJEMPLO IF 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: ClipRRect(
              borderRadius: BorderRadius.circular(15),
              child: CachedNetworkImage(
                imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/for%2Fexample%2Ffor_example_1.png?alt=media&token=ec2eceb0-158f-412b-a578-2f2d879fe2f9',
                placeholder: (context, url) => Center(child: Text('Cargando')),
                ))
          ),
        ),
        SizedBox(height: 30,),
        Container(  //! 2do
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                SizedBox(height: 5,),
                Container(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('Ejemplo: Números pares', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15),
                  height: sizeHeight* 0.22,
                  child: Text('En este ejemplo, se desea obtener los números pares entre el numero 50 y el 100. Este es un ejemplo sencillo con el que se puede coroborar lo aprendido en la sección teórica.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! EJEMPLO IF 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: ClipRRect(
              borderRadius: BorderRadius.circular(15),
              child: CachedNetworkImage(
                imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/for%2Fexample%2Ffor_example_npares.png?alt=media&token=ea7a2728-26a2-4a5a-9eeb-3faf447e5e0c',
                placeholder: (context, url) => Center(child: Text('Cargando')),))
          ),
        ),
        SizedBox(height: 30,),
        Container(  //! 2do
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                SizedBox(height: 5,),
                Container(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('Ejemplo: Múltiplos', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15),
                  height: sizeHeight* 0.22,
                  child: Text('Este siguiente ejemplo consiste en contar al interior de un ciclo for, cuántos números entre el 0 y el 10.000 son múltiplos del 5. Para ello, se utilizará el operador % (modulo) que obtiene el residuo de una división. Además, se usará un condicional para verificar que el modulo sea cero al dividir por 5.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! EJEMPLO IF 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: ClipRRect(
              borderRadius: BorderRadius.circular(15),
              child: CachedNetworkImage(
                imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/for%2Fexample%2Ffor_example_2.png?alt=media&token=2f446786-40de-440c-b2c0-bd72f8b8ee14',
                placeholder: (context, url) => Center(child: Text('Cargando')),))
          ),
        ),
        SizedBox(height: 30,),
      ],
    );
  }

  Widget _widgetIfEjemplo(BuildContext context) {

    var sizeHeight = MediaQuery.of(context).size.height;
    var sizeWidth = MediaQuery.of(context).size.width;

    return Column(
      children: [
        SizedBox(height: 20,),
        Container( //! EJEMPLO IF 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                SizedBox(height: 5,),
                Container(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('Ejemplo: Mayor de Edad', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15),
                  height: sizeHeight* 0.27,
                  child: Text('En este ejemplo se busca determinar si el usuario el mayor o menor de edad en base a la edad ingresada. Sí la edad que se ingresa es mayor o igual a 18, el programa mostrára un mensaje en consola el cual indicara "Eres mayor de edad.". En caso de no cumplir la condición, el programa mostrara el siguiente mensaje en consola "Eres menor de edad.".', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
              
                
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! EJEMPLO IF 
          width: sizeWidth * 0.9,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: ClipRRect(
              borderRadius: BorderRadius.circular(15),
              child: CachedNetworkImage(
                imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/if%2Fif_example%2Fif_else.png?alt=media&token=207f643c-b692-4cee-a260-6e8243989d59',
                placeholder: (context, url) => Center(child: Text('Cargando')),
                ))
          ),
        ),
        SizedBox(height: 30,),
      ],
    );
  }

  Widget _widgetIfTeoria(BuildContext context) {

    var sizeHeight = MediaQuery.of(context).size.height;
    var sizeWidth = MediaQuery.of(context).size.width;

    return Column(
      children: [
        SizedBox(height: 20,),
        Container( //! Condicionales
          width: sizeWidth * 0.9,
          height: sizeHeight * 0.3,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                Expanded(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('Condicionales', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15),
                  height: sizeHeight* 0.115,
                  child: Text('Un condicional es una condición para discernir entre una opción u otra, y en el proceso mental normalmente se manifiesta con un «Si».', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15),
                  height: sizeHeight* 0.115,
                  child: Text('En esta lección, se presentan los condicionales IF e IF-ELSE.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
                
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! Condicionales Simples
          width: sizeWidth * 0.9,
          height: sizeHeight * 0.3,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                Expanded(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('Condicionales Simples', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15),
                  height: sizeHeight* 0.115,
                  child: Text('Los condicionales IF permiten determinar qué acciones ejecutar según cierta condición sea verdadera.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
                SizedBox(height: 15.0,),
                Expanded(
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceAround,
                    children: [
                      ElevatedButton(
                        onPressed: ()=>dialogIfConSimple(context, sizeWidth, sizeHeight), 
                        style: ElevatedButton.styleFrom(
                          
                          side: BorderSide(
                            color: Colors.white,
                            width: 0.65
                          ),
                          primary: Colors.transparent
                        ),
                        child: Text('EJEMPLO', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 12, fontWeight: FontWeight.w600)),
                      ),
                      ElevatedButton(
                        onPressed: ()=>dialogIfSintaxis(context, sizeWidth, sizeHeight), 
                        style: ElevatedButton.styleFrom(
                          side: BorderSide(
                            color: Colors.white,
                            width: 0.65
                          ),
                          primary: Colors.transparent
                        ),
                        child: Text('SINTAXIS', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 12, fontWeight: FontWeight.w600)),
                      ),
                    ],
                  ),
                ),
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        Container( //! Condicionales Selectivos
          width: sizeWidth * 0.9,
          height: sizeHeight * 0.3,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                Expanded(
                  child: Align(
                    alignment: Alignment.centerLeft,
                    child: Text('Condicionales Selectivos', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                ),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15),
                  height: sizeHeight* 0.115,
                  child: Text('Los condicionales IF-ELSE son una estructura de control que permiten determinar que acciones tomar dada o no cierta condición.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
                SizedBox(height: 15.0,),
                Expanded(
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceAround,
                    children: [
                      ElevatedButton(
                        onPressed: ()=>dialogIfConSelectiva(context, sizeWidth, sizeHeight), 
                        style: ElevatedButton.styleFrom(
                          side: BorderSide(
                            color: Colors.white,
                            width: 0.65
                          ),
                          primary: Colors.transparent
                        ),
                        child: Text('EJEMPLO', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 12, fontWeight: FontWeight.w600)),
                      ),
                      ElevatedButton(
                        onPressed: ()=>dialogIfElseSintaxis(context, sizeWidth, sizeHeight), 
                        style: ElevatedButton.styleFrom(
                          side: BorderSide(
                            color: Colors.white,
                            width: 0.65
                          ),
                          primary: Colors.transparent
                        ),
                        child: Text('SINTAXIS', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 12, fontWeight: FontWeight.w600)),
                      ),
                    ],
                  ),
                ),
              ],
            ),
          ),
        ),
        SizedBox(height: 20,)
      ],
    );
  }

  Widget _widgetFORTeoria(BuildContext context) {

    var sizeHeight = MediaQuery.of(context).size.height;
    var sizeWidth = MediaQuery.of(context).size.width;

    return Column(
      children: [
        SizedBox(height: 20,),
        Container( //! Condicionales
          width: sizeWidth * 0.9,
          height: sizeHeight * 0.32,
          decoration: BoxDecoration(
            boxShadow: const [
              BoxShadow(
                offset: Offset(4,5),
                blurRadius: 1.7,
              )
            ],
            borderRadius: BorderRadius.circular(15),
            border: Border.all(
              color: Colors.black,
              width: 1.85
            ),
            gradient: LinearGradient(
              colors: const [
                Colors.indigo,
                Color(0xff1c1c1c)
              ],
              stops: const [0.3, 0.9],
            )
          ),
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0).copyWith(top: 10, bottom: 10),
            child: Column(
              children: [
                SizedBox(height: 5,),
                Align(
                  alignment: Alignment.centerLeft,
                  child: Text('Estructura Repetitiva FOR', style: TextStyle(color: Color(0xff1c1c1c),letterSpacing: 1.2, fontSize: 18, fontWeight: FontWeight.bold),)),
                Container(
                  padding: EdgeInsets.symmetric(horizontal: 15).copyWith(top: 15),
                  height: sizeHeight* 0.17,
                  child: Text('Permite ejecutar una o varias líneas de código de forma iterativa, indicando un valor inicial, la condición que debe cumplir para seguir en el ciclo y el incremento de cada iteración.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                ),
                ElevatedButton(
                    onPressed: ()=>dialogFOR(context, sizeWidth, sizeHeight), 
                    style: ElevatedButton.styleFrom(
                      side: BorderSide(
                        color: Colors.white,
                        width: 0.65
                      ),
                      primary: Colors.transparent
                    ),
                    child: Text('SINTAXIS', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 12, fontWeight: FontWeight.w600)),
                  
                  ),
              ],
            ),
          ),
        ),
        SizedBox(height: 30,),
        
        
        SizedBox(height: 20,)
      ],
    );
  }
}

dialogWHILE(BuildContext context, var sizeWidth, var sizeHeight){
  showDialog(context: context, builder: (context) {
    return AlertDialog(
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(16)
      ),
      insetPadding: EdgeInsets.symmetric(horizontal: 15),
      contentPadding: EdgeInsets.all(3),
      content: ClipRRect(
        borderRadius: BorderRadius.circular(14),
        child: Container(
          width: sizeWidth * 0.99,
          height: sizeHeight * 0.65,
          decoration: BoxDecoration(
            gradient: LinearGradient(
                colors: const [
                  Colors.indigo,
                  Color(0xff1c1c1c)
                ],
                stops: const [0.3, 0.9],
              )
          ),
          child: Column(
            children: [
              SizedBox(
                width: sizeWidth * 0.85,
                height: sizeHeight * 0.4,
                child: CachedNetworkImage(
                  imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/while%2Fwhile_sintaxis.png?alt=media&token=81ba8616-d43c-4eac-a132-ed195ec851c3',
                  placeholder: (context, url) => Center(child: Text('Cargando')),
                  ),
              ),
              Container(
                    padding: EdgeInsets.symmetric(horizontal: 15),
                    height: sizeHeight* 0.24,
                    child: Text('La sintaxis de un ciclo WHILE es más simple que la del ciclo for, ya que solo se requiere una condición de finalización. De hecho, en la mayoría de los lenguajes de alto nivel la sintaxis de esta estructura repetitiva es incluso muy similar.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                  ),
              
            ],
          ),
        ),
      ),
    );
  },);
}

dialogIfSintaxis(BuildContext context, var sizeWidth, var sizeHeight){
  showDialog(context: context, builder: (context) {
    return AlertDialog(
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(16)
      ),
      insetPadding: EdgeInsets.symmetric(horizontal: 15),
      contentPadding: EdgeInsets.all(3),
      content: ClipRRect(
        borderRadius: BorderRadius.circular(14),
        child: Container(
          width: sizeWidth * 0.99,
          height: sizeHeight * 0.55,
          decoration: BoxDecoration(
            gradient: LinearGradient(
                colors: const [
                  Colors.indigo,
                  Color(0xff1c1c1c)
                ],
                stops: const [0.3, 0.9],
              )
          ),
          child: Column(
            children: [
              SizedBox(
                width: sizeWidth * 0.85,
                height: sizeHeight * 0.4,
                child: CachedNetworkImage(
                  imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/if%2Fif_example%2Fsintaxis_if.png?alt=media&token=c594bb95-623b-473d-a5b5-8f2677fd89af',
                  placeholder: (context, url) => Center(child: Text('Cargando')),),
              ),
              Container(
                    padding: EdgeInsets.symmetric(horizontal: 15),
                    height: sizeHeight* 0.10,
                    child: Text('La sintaxis de un condicional If es muy simple e intuitiva tal y como se observa.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                  ),
            
            ],
          ),
        ),
      ),
    );
  },);
}

dialogIfElseSintaxis(BuildContext context, var sizeWidth, var sizeHeight){
  showDialog(context: context, builder: (context) {
    return AlertDialog(
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(16)
      ),
      insetPadding: EdgeInsets.symmetric(horizontal: 15),
      contentPadding: EdgeInsets.all(3),
      content: ClipRRect(
        borderRadius: BorderRadius.circular(14),
        child: Container(
          width: sizeWidth * 0.99,
          height: sizeHeight * 0.65,
          decoration: BoxDecoration(
            gradient: LinearGradient(
                colors: const [
                  Colors.indigo,
                  Color(0xff1c1c1c)
                ],
                stops: const [0.3, 0.9],
              )
          ),
          child: Column(
            children: [
              SizedBox(height: 20,),
              SizedBox(
                width: sizeWidth * 0.85,
                height: sizeHeight * 0.4,
                child: CachedNetworkImage(
                  imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/if%2Fif_example%2Fif_else_estructura.png?alt=media&token=e3bd68be-2942-4807-ba1e-51f2627e2d0b',
                placeholder: (context, url) => Center(child: Text('Cargando')),
                ),
              ),
              SizedBox(height: 15,),
              Container(
                    padding: EdgeInsets.symmetric(horizontal: 15),
                    height: sizeHeight* 0.18,
                    child: Text('La sintaxis de un condicional if-else es similar a la del condicional if, pero se le adiciona una nueva "estructura" que es el else, el cual indica el conjunto de acciones a llevar a cabo, en caso de que la condición del if no se cumpla.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 1.15, fontSize: 14, fontWeight: FontWeight.w600),),
                  ),
            
            ],
          ),
        ),
      ),
    );
  },);
}

dialogIfConSimple(BuildContext context, var sizeWidth, var sizeHeight){
  showDialog(context: context, builder: (context) {
    return AlertDialog(
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(16)
      ),
      insetPadding: EdgeInsets.symmetric(horizontal: 15),
      contentPadding: EdgeInsets.all(3),
      content: ClipRRect(
        borderRadius: BorderRadius.circular(14),
        child: Container(
          width: sizeWidth * 0.99,
          height: sizeHeight * 0.75,
          decoration: BoxDecoration(
            gradient: LinearGradient(
                colors: const [
                  Colors.indigo,
                  Color(0xff1c1c1c)
                ],
                stops: const [0.3, 0.9],
              )
          ),
          child: Column(
            children: [
              SizedBox(
                width: sizeWidth * 0.85,
                height: sizeHeight * 0.4,
                child: CachedNetworkImage(
                  imageUrl: 'https://byte-mind.net/wp-content/uploads/2017/03/imagen2-1.jpg',
                  placeholder: (context, url) => Center(child: Text('Cargando')),
                  ),
              ),
              Container(
                    padding: EdgeInsets.symmetric(horizontal: 15),
                    height: sizeHeight* 0.080,
                    child: Text('En este esquema, se puede observar un ejemplo de una estructura condicional simple.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                  ),
              Container(
                    padding: EdgeInsets.symmetric(horizontal: 15),
                    height: sizeHeight* 0.080,
                    child: Text('El rombo representa la condición y se tiene dos opciones que se pueden tomar. ', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                  ),
              Container(
                    padding: EdgeInsets.symmetric(horizontal: 15),
                    height: sizeHeight* 0.090,
                    child: Text('Si la condición devuelve un resultado verdadero, ejecutará las instrucciones que se encuentren en su interior, si por el contrario es falso no realizará dicha acción.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.bold),),
                  ),
            ],
          ),
        ),
      ),
    );
  },);
}

dialogIfConSelectiva(BuildContext context, var sizeWidth, var sizeHeight){
  showDialog(context: context, builder: (context) {
    return AlertDialog(
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(16)
      ),
      insetPadding: EdgeInsets.symmetric(horizontal: 15),
      contentPadding: EdgeInsets.all(3),
      content: ClipRRect(
        borderRadius: BorderRadius.circular(14),
        child: Container(
          width: sizeWidth * 0.99,
          height: sizeHeight * 0.65,
          decoration: BoxDecoration(
            gradient: LinearGradient(
                colors: const [
                  Colors.indigo,
                  Color(0xff1c1c1c)
                ],
                stops: const [0.3, 0.9],
              )
          ),
          child: Column(
            children: [
              SizedBox(
                width: sizeWidth * 0.85,
                height: sizeHeight * 0.3,
                child: CachedNetworkImage(
                  imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/if%2Fteoria_if_else.png?alt=media&token=aaffdb8b-26f1-40b0-9e66-6b58235572da',
                  placeholder: (context, url) => Center(child: Text('Cargando')),
                  ),
              ),
              
              Container(
                    margin: EdgeInsets.only(bottom: 15),
                    padding: EdgeInsets.symmetric(horizontal: 15),
                    height: sizeHeight* 0.080,
                    child: Text('En este esquema de una estructura condicional selectiva, se observa dos posibilidades a realizarse dada una cierta condición.', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.w600),),
                  ),
              Container(
                    padding: EdgeInsets.symmetric(horizontal: 15),
                    height: sizeHeight* 0.20,
                    child: Text('En este caso, si la edad ingresada por una persona es menor o igual a 18, se muestra un mensaje indicando que la persona es mayor de edad. Sin embargo, si la condición no es verdadera, se muestra un mensaje que la persona es menor de edad. ', textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.bold),),
                  ),
            ],
          ),
        ),
      ),
    );
  },);
}


dialogFOR(BuildContext context, var sizeWidth, var sizeHeight){
  showDialog(context: context, builder: (context) {
    return AlertDialog(
      backgroundColor: Colors.transparent,
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(16)
      ),
      insetPadding: EdgeInsets.symmetric(horizontal: 2),
      contentPadding: EdgeInsets.all(0),
      content: Container(
        width: double.maxFinite,
        height: 500,
        child: ListView(
          scrollDirection: Axis.horizontal,
          shrinkWrap: true,
          children: [
            _forContentSintaxis(sizeWidth, sizeHeight, 'FOR', 'Palabra reservada que sirve para marcar el final del ciclo. Aquí se introducirán los siguientes datos, el valor inicial, la condición de finalización (comparación entre el valor actual y el valor que se quiere comparar) y el valor actual.'),
            _forContentSintaxis(sizeWidth, sizeHeight, 'VALOR INICIAL', 'Se utiliza para iniciar el ciclo solamente, por lo tanto, este valor cambiará en la siguiente iteración si la condición entre el valor inicial y el valor a comparar se cumple.'),
            _forContentSintaxis(sizeWidth, sizeHeight, 'CONDICIÓN DE SEGUIMIENTO', 'Se compone del valor inicial o el valor actual (después de haberse incrementado o decrementado), comparado con el valor final. Si la condición deja de cumplirse, el bucle llega a su fin.'),
            _forContentSintaxis(sizeWidth, sizeHeight, 'VALOR ACTUAL', 'Este valor irá incrementándose o decrementándose para poder dejar de cumplir la condición de seguimiento y que el bucle FOR llegue a su fin. En la sintaxis se ha indicado «incremento», pero también se puede decrementar su valor.'),
            _forContentSintaxis(sizeWidth, sizeHeight, 'BLOQUE DE INSTRUCCIONES', 'Instrucciones que se realizarán en cada ciclo del bucle.'),
          ],
        ),
      ),
    );
  },);
}

Widget _forContentSintaxis(sizeWidth, sizeHeight, title, contentText) {
  return Container(
    color: Colors.transparent,
            margin: const EdgeInsets.all(5.0),
            child: Container(
              width: sizeWidth * 0.85,
              height: sizeHeight * 0.5,
              decoration: BoxDecoration(
                border: Border.all(
                  width: 3,
                  color: Colors.white
                ),
                borderRadius: BorderRadius.circular(15),
                gradient: LinearGradient(
                    colors: const [
                      Colors.indigo,
                      Color(0xff1c1c1c)
                    ],
                    stops: const [0.3, 0.9],
                  )
              ),
              child: Column(
                children: [
                  Container(
                    margin: EdgeInsets.only(top: 15),
                    width: sizeWidth * 0.85,
                    height: sizeHeight * 0.3,
                    child: Padding(
                      padding: const EdgeInsets.symmetric(horizontal: 10),
                      child: CachedNetworkImage(
                        imageUrl: 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/for%2Ffor_sintaxis.png?alt=media&token=bac59822-5dae-4007-b4ff-e2a6540bb843',
                        placeholder: (context, url) => Center(child: Text('Cargando')),
                        ),
                    ),
                  ),
                  
                  Container(
                        margin: EdgeInsets.only(bottom: 15),
                        padding: EdgeInsets.symmetric(horizontal: 15),
                        height: sizeHeight* 0.08,
                        child: Text(title, textAlign: TextAlign.center, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 25, fontWeight: FontWeight.w600),),
                      ),
                  Container(
                        padding: EdgeInsets.symmetric(horizontal: 15),
                        height: sizeHeight* 0.20,
                        child: Text(contentText, textAlign: TextAlign.justify, style: TextStyle(color: Colors.white,wordSpacing: 0.45, letterSpacing: 0.95, fontSize: 14, fontWeight: FontWeight.bold),),
                      ),
                ],
              ),
            ),
          );
}