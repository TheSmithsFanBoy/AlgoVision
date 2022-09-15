// ignore_for_file: avoid_print, prefer_const_constructors, deprecated_member_use

import 'package:flutter/material.dart';

class SurveyQuestion extends StatefulWidget {
  final String validOption;
  final List<String> options;
  final List<String> optionsInvalidText;
  final Function? callback;
  final Function? callback2;


  const SurveyQuestion({
      Key? key,
      required this.validOption,
      required this.options,
      required this.optionsInvalidText,
      this.callback,
      this.callback2,
    }): super(key: key);

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
        SizedBox(height: 30,),
      ],
    );
  }

  Widget _buildOptions() {
    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 5.0),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: widget.options.map((option) {
          return RadioListTile(
            activeColor: Colors.black,
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
      ),
    );
  }

  Widget _buildSubmitButton() {
    return val.isNotEmpty ? Center(
      child: TextButton(
        style: TextButton.styleFrom(
          side: const BorderSide(
            color: Colors.black,
            width: 1.5
          ),
          backgroundColor: Colors.indigo
        ),
        child: const Text('VALIDAR RESPUESTA',
            style: TextStyle(color: Colors.white)),
        onPressed: val.isEmpty ? null : () {
          if (val == widget.validOption) {
            // Correct Answer
            Widget okButton = TextButton(
              style: TextButton.styleFrom(
                  primary: Colors.white,
                  backgroundColor: Colors.indigo,
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
            print(widget.options.indexOf(val));
            AlertDialog alert = AlertDialog(
              
              title: const Center(child:  Text('Felicidades', style: TextStyle(fontSize: 23),)),
              elevation: 10.0,
              actionsAlignment: MainAxisAlignment.center,
              alignment: Alignment.center,
              content: SizedBox(
                width: MediaQuery.of(context).size.width*0.55,
                child: Column(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    const SizedBox(width: double.infinity,),
                    Image.asset(
                      'assets/icons/good.png',
                      height: 95,
                      width: 95,
                    ),
                    const SizedBox(height: 30),
                    Center(child: Text(widget.optionsInvalidText[widget.options.indexOf(val)], textAlign: TextAlign.center,))
                  ],
                ),
              ),
              actions: [okButton],
            );
            // show the dialog
            showDialog(
              barrierDismissible: false,
              context: context,
              builder: (BuildContext context) {
                return alert;
              },
            );
          } else {
            // Wrong Answer
            Widget okButton = TextButton(
              style: TextButton.styleFrom(
                  primary: Colors.white,
                  backgroundColor: Colors.indigo,
                  padding: const EdgeInsets.only(left: 30, right: 30),
                  textStyle: const TextStyle(fontWeight: FontWeight.bold)),
              child: const Text("FINALIZAR", ),
              onPressed: () {
                if (widget.callback2 != null) {
                  widget.callback2!();
                } else {
                  Navigator.of(context).pop();
                }
              },
            );
            // Create AlertDialog
            AlertDialog alert = AlertDialog(
              title: const Center(child:  Text('Alternativa incorrecta', style: TextStyle(fontSize: 23),)),
              elevation: 10.0,
              actionsAlignment: MainAxisAlignment.center,
              alignment: Alignment.center,
              content: SizedBox(
                width: MediaQuery.of(context).size.width*0.55,
                child: Column(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    const SizedBox(width: double.infinity,),
                    Image.asset(
                      'assets/icons/bad.png',
                      height: 95,
                      width: 95,
                    ),
                    const SizedBox(height: 30),
                    Center(child: Text(widget.optionsInvalidText[widget.options.indexOf(val)], textAlign: TextAlign.center,))
                  ],
                ),
              ),
              actions: [okButton],
            );
            // show the dialog
            showDialog(
              barrierDismissible: false,
              context: context,
              builder: (BuildContext context) {
                return alert;
              },
            );
          }
        },
      ),
    ) : Container();
  }
}
