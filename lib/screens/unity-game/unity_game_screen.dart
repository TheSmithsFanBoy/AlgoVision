import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class UnityGameScreen extends StatefulWidget{
  const UnityGameScreen({Key? key}) : super(key: key);

  @override
  State<UnityGameScreen> createState() => _UnityGameScreenState();
}

class _UnityGameScreenState extends State<UnityGameScreen> {
  late UnityWidgetController _unityWidgetController;

  get onUnityMessage => null;

  @override
  void initState() {
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Unity Game'),
        ),
        body: Card(
          margin: const EdgeInsets.all(8),
          clipBehavior: Clip.antiAlias,
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(20.0),
          ),
          child: Stack(
           /* children: <Widget>[
              UnityWidget(
                onUnityCreated: onUnityCreated,
              ),
            ],*/
          ),
        ),
      ),
    );
  }
  void onUnityCreated(controller) {
    _unityWidgetController = controller;
  }

}