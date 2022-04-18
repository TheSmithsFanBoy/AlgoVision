import 'package:flutter/material.dart';
import 'package:tdpapp/widgets/text_field_container.dart';

class RoundedInputField extends StatelessWidget {
  final String hintText;
  final IconData icon;
  final ValueChanged<String> onChanged;
  const RoundedInputField({
    Key? key,
    required this.hintText,
    required this.icon,
    required this.onChanged,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return TextFieldContainer(
      child: TextField(
        onChanged: onChanged,
        cursorColor: const Color.fromARGB(3, 3, 3, 3),
        decoration: InputDecoration(
          icon: Icon(
            icon,
            color: Colors.blue,
          ),
          hintText: hintText,
          border: InputBorder.none,
        ),
      ),
    );
  }
}
