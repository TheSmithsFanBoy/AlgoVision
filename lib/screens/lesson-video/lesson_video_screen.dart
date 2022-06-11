
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:video_player/video_player.dart';

import '../../models/screen_arguments.dart';

class LessonVideoScreen extends StatefulWidget{
  const LessonVideoScreen({Key? key}) : super(key: key);

  @override
  State<LessonVideoScreen> createState() => _LessonVideoScreenState();
}

class _LessonVideoScreenState extends State<LessonVideoScreen> {


  VideoPlayerController? videoController;

  /*@override
  void initState() {
    super.initState();
    videoController = VideoPlayerController.network(videoLesson)..initialize().then((_) {
      setState(() {
      });
    });

    // controller!.play();
  }*/


  @override
  void dispose() {
    videoController!.dispose();
    super.dispose();
  }


  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;

    String videoLesson = '';
    var topicRef =FirebaseFirestore.instance.collection('topics').doc(args.id).get();
    topicRef.then((value) => value.data()?['video'] = videoLesson);
    videoController = VideoPlayerController.network(videoLesson)..initialize().then((_) {
      setState(() {
      });
    });



    return Scaffold(
        appBar: AppBar(
        title: Text(args.title),
        centerTitle: true,
        ),
      body: ListView(
        children: [
          videoController!.value.isInitialized ?
          AspectRatio(aspectRatio: videoController!.value.aspectRatio ,
            child: VideoPlayer(videoController!),
          ) :
          Container(height: 200,  width: double.infinity, child: const Center(child: CircularProgressIndicator(),),)
        ],
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          setState(() {
            if(videoController!.value.isPlaying){
              videoController!.pause();
            }else{
              videoController!.play();
            }
          });
        },
        child: Icon(
            videoController!.value.isPlaying ?
            Icons.pause:
            Icons.play_arrow
        ),
      ),
    );
  }
}