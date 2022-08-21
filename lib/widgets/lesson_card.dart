import 'package:flutter/material.dart';

class LessonCard extends StatefulWidget {
  final String id;

  const LessonCard({Key? key, required this.id}) : super(key: key);

  @override
  State<LessonCard> createState() => _LessonCardState();
}

class _LessonCardState extends State<LessonCard> {
  @override
  Widget build(BuildContext context) {
    return const ExpansionTile(
      title: Text('Tópicos'),
      children: [],
    );
  }
}
