import 'package:flutter/material.dart';
import 'package:tdpapp/widgets/text_field_container.dart';

class RoundedPasswordField extends StatelessWidget {
  final ValueChanged<String> onChanged;
  const RoundedPasswordField({
    Key? key,
    required this.onChanged,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return TextFieldContainer(
      child: TextField(
        obscureText: true,
        onChanged: onChanged,
        cursorColor: Colors.blue,
        decoration: const InputDecoration(
          hintText: "Contraseña",
          icon: Icon(
            Icons.lock,
            color: Colors.blue,
          ),
          suffixIcon: Icon(
            Icons.visibility,
            color: Colors.blue,
          ),
          border: InputBorder.none,
        ),
      ),
    );
  }
}
