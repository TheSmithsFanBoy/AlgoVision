import 'package:flutter/material.dart';

class SurveyQuestion extends StatefulWidget {
  final String validOption;
  final List<dynamic> options;
  const SurveyQuestion(
      {Key? key, required this.validOption, required this.options})
      : super(key: key);

  @override
  State<SurveyQuestion> createState() => _SurveyQuestionState();
}

class _SurveyQuestionState extends State<SurveyQuestion> {
  String val = "";
  @override
  Widget build(BuildContext context) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        //_buildAnswerTitle(),
        _buildOptions(),
        _buildSubmitButton(),
      ],
    );
  }

  Widget _buildAnswerTitle() {
    return const Text(
      '¿Qué es lo que más te gusta de la comunidad?',
      style: TextStyle(
        fontSize: 18,
        fontWeight: FontWeight.bold,
      ),
    );
  }

  Widget _buildOptions() {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: widget.options.map((option) {
        return RadioListTile(
          title: Text(option.toString()),
          value: option.toString(),
          groupValue: val,
          onChanged: (value) {
            setState(() {
              val = value.toString();
            });
          },
        );
      }).toList(),
    );
  }

  Widget _buildSubmitButton() {
    return TextButton(
      child: const Text('Enviar'),
      onPressed: () {
        if (val == widget.validOption) {
          Scaffold.of(context).showSnackBar(
            const SnackBar(
              content: Text('¡Correcto! Muy bien'),
              backgroundColor: Colors.green,
            ),
          );
        } else {
          Scaffold.of(context).showSnackBar(
            const SnackBar(
              content: Text('Incorrecto'),
              backgroundColor: Colors.red,
            ),
          );
        }
      },
    );
  }
}
