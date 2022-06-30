import 'package:flutter/material.dart';

class SurveyQuestion extends StatefulWidget {
  final String validOption;
  final List<String> options;
  final List<String> optionsInvalidText;
  final Function? callback;
  const SurveyQuestion(
      {Key? key,
      required this.validOption,
      required this.options,
        required this.optionsInvalidText,
      this.callback})
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
          activeColor: Colors.yellow.shade600,
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
        child: const Text('VALIDAR RESPUESTA',
            style: TextStyle(color: Colors.indigo)),
        onPressed: () {
          if (val == widget.validOption) {
            // Correct Answer
            Widget okButton = TextButton(
              style: TextButton.styleFrom(
                  primary: Colors.blueGrey,
                  backgroundColor: Colors.yellow,
                  padding: const EdgeInsets.only(left: 30, right: 30),
                  textStyle: const TextStyle(fontWeight: FontWeight.bold)),
              child: const Text("CONTINUAR"),
              onPressed: () {
                if (widget.callback != null) {
                  widget.callback!();
                } else {
                  Navigator.of(context).pop();
                }
              },
            );
            // Create AlertDialog
            print("test");
            print(widget.options.indexOf(val));
            AlertDialog alert = AlertDialog(
              title: const Text('Respuesta correcta'),
              elevation: 10.0,
              actionsAlignment: MainAxisAlignment.center,
              alignment: Alignment.center,
              content: Column(
                mainAxisSize: MainAxisSize.min,
                children: [
                  Image.asset(
                    'assets/icons/good.png',
                    height: 95,
                    width: 95,
                  ),
                  const SizedBox(width: 20),
                  Text(widget.optionsInvalidText[widget.options.indexOf(val)])
                ],
              ),
              actions: [okButton],
            );
            // show the dialog
            showDialog(
              context: context,
              builder: (BuildContext context) {
                return alert;
              },
            );
          } else {
            // Wrong Answer
            Widget okButton = TextButton(
              style: TextButton.styleFrom(
                  primary: Colors.blueGrey,
                  backgroundColor: Colors.yellow,
                  padding: const EdgeInsets.only(left: 30, right: 30),
                  textStyle: const TextStyle(fontWeight: FontWeight.bold)),
              child: const Text("PROSEGUIR"),
              onPressed: () {
                Navigator.of(context).pop();
              },
            );
            // Create AlertDialog
            AlertDialog alert = AlertDialog(
              title: const Text('Respuesta incorrecta'),
              elevation: 10.0,
              actionsAlignment: MainAxisAlignment.center,
              alignment: Alignment.center,
              content: Column(
                mainAxisSize: MainAxisSize.min,
                children: [
                  Image.asset(
                    'assets/icons/bad.png',
                    height: 95,
                    width: 95,
                  ),
                  Text(widget.optionsInvalidText[widget.options.indexOf(val)])
                ],
              ),
              actions: [okButton],
            );
            // show the dialog
            showDialog(
              context: context,
              builder: (BuildContext context) {
                return alert;
              },
            );
          }
        },
      ),
    );
  }
}
