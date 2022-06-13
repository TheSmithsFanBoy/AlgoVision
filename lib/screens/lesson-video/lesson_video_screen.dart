
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:video_player/video_player.dart';

import '../../models/screen_arguments.dart';

class LessonVideoScreen extends StatefulWidget{
  const LessonVideoScreen({Key? key}) : super(key: key);
 
  @override
  State<LessonVideoScreen> createState() => _LessonVideoScreenState();
}

class _LessonVideoScreenState extends State<LessonVideoScreen> {


  late VideoPlayerController videoController;
  final textController = TextEditingController();
  final videoLesson = 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/Videos%2FBubbleSort.mp4?alt=media&token=6c14cef2-0a46-472f-a62b-2a72796766af';

  @override
  void initState() {
    super.initState();
    videoController = VideoPlayerController.network(videoLesson)
      ..addListener(() => setState(() { }))
      ..setLooping(true)
      ..initialize().then((_) => videoController.play());
  }


  @override
  void dispose() {
    videoController.dispose();
    textController.dispose();
    super.dispose();
  }


  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)!.settings.arguments as ScreenArguments;

    /*String videoLesson = 'https://firebasestorage.googleapis.com/v0/b/tdpapp-8d28b.appspot.com/o/Videos%2FBubbleSort.mp4?alt=media&token=6c14cef2-0a46-472f-a62b-2a72796766af';
    var topicRef = FirebaseFirestore.instance.collection('topics').doc(args.id).get();
    topicRef.then((value) {
      print('Video Database: ' + value.data()?['video']);
      videoLesson == value.data()?['video'].toString();
    });
    print(args.id);
    print(topicRef);
    print('Video: ' + videoLesson);
    videoController = VideoPlayerController.network(videoLesson)..initialize().then((_) {
      setState(() {
      });
    });
    videoController!.play();*/


    return Scaffold(
        appBar: AppBar(
        title: Text(args.title),
        centerTitle: true,
        ),
      body: FutureBuilder(
        future: FirebaseFirestore.instance
            .collection('topics')
            .doc(args.id)
            .get(),
        builder: (context,
        AsyncSnapshot<DocumentSnapshot<Map<String, dynamic>>> snapshot) {
          if(snapshot.hasData && snapshot.data != null){
            var data = snapshot.data!;
            if (data == null) {
              return const Text('data is null');
            }
            return ListView.builder(
              padding: const EdgeInsets.all(16),
              itemCount: data['videolist'].length,
              itemBuilder: (BuildContext context, int index) {
                final DocumentSnapshot doc = snapshot.data?['videolist'][index];
                return Column(
                  children: [
                    Center(
                      child: Text(data['title'],
                          style: const TextStyle(
                              fontSize: 20,
                              fontWeight: FontWeight.bold,
                              color: Colors.indigo))),
                    Center(
                        child: Text(data['pasos'][index],
                            style: const TextStyle(
                                fontSize: 20,
                                fontWeight: FontWeight.bold,
                                color: Colors.indigo))),
                    VideoPlayerWidget(controller: videoController),
                    TextButton(
                       style: TextButton.styleFrom(
                      backgroundColor: Colors.lightBlueAccent,
                       fixedSize: const Size(30, 30),
                      ),
                       onPressed: () {  },
                       child: const Text('Siguiente Paso',
                        style: TextStyle(
                        fontSize: 19,
                        fontWeight: FontWeight.bold,
                        color: Colors.black)),),
                  ]
                );
              },
            );
          }else {
            return const CircularProgressIndicator();
          }
        },
      ),
    );
  }
}

class VideoPlayerWidget extends StatelessWidget{
  final VideoPlayerController controller;

  const VideoPlayerWidget({
    Key? key,
    required this.controller,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) =>
      controller != null && controller.value.isInitialized
          ? Container(alignment: Alignment.topCenter, child: buildVideo())
          : const SizedBox(
            height: 200,
            child: Center(child: CircularProgressIndicator()),
      );

  Widget buildVideo() => Stack(
    children: <Widget>[
      buildVideoPlayer(),
      Positioned.fill(child: BasicOverlayWidget(controller: controller)),
    ],
  );

  Widget buildVideoPlayer() => AspectRatio(
    aspectRatio: controller.value.aspectRatio,
    child: VideoPlayer(controller),
  );

}

class BasicOverlayWidget extends StatelessWidget{
  final VideoPlayerController controller;

  const BasicOverlayWidget({
    Key? key,
    required this.controller,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) => GestureDetector(
    behavior: HitTestBehavior.opaque,
    onTap: () =>
    controller.value.isPlaying ? controller.pause() : controller.play(),
    child: Stack(
      children: <Widget>[
        buildPlay(),
        Positioned(
          bottom: 0,
          left: 0,
          right: 0,
          child: buildIndicator(),
        ),
      ],
    ),
  );

  Widget buildIndicator() => VideoProgressIndicator(
    controller,
    allowScrubbing: true,
  );

  Widget buildPlay() => controller.value.isPlaying
      ? Container()
      : Container(
    alignment: Alignment.center,
    color: Colors.black26,
    child: const Icon(Icons.play_arrow, color: Colors.white, size: 80),
  );
}