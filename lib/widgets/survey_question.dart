import 'package:flutter/material.dart';

class SurveyQuestion extends StatefulWidget {
  final String validOption;
  final List<dynamic> options;
  final Function callback;
  const SurveyQuestion(
      {Key? key,
      required this.validOption,
      required this.options,
      required this.callback})
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
    return Center(
      child: TextButton(
        child: const Text('ENVIAR'),
        onPressed: () {
          if (val == widget.validOption) {
            Scaffold.of(context).showSnackBar(
              const SnackBar(
                content: Text('¡Correcto! Muy bien'),
                backgroundColor: Colors.green,
              ),
            );
            widget.callback();
          } else {
            Scaffold.of(context).showSnackBar(
              const SnackBar(
                content: Text('Incorrecto'),
                backgroundColor: Colors.red,
              ),
            );
          }
        },
      ),
    );
  }
}
