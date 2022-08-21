// ignore_for_file: deprecated_member_use, prefer_const_constructors

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:provider/provider.dart';
import 'package:tdpapp/services/auth_service.dart';

import '../../constants/theme_constants.dart';

class LoginScreen extends StatelessWidget {
  LoginScreen({Key? key}) : super(key: key);

  final TextEditingController emailController = TextEditingController();
  final TextEditingController passwordController = TextEditingController();
  final _formKey = GlobalKey<FormState>();

  Widget _buildEmailTF(BuildContext context) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        const Text(
          'Correo electrónico',
          style: kLabelStyle,
        ),
        const SizedBox(height: 10.0),
        Container(
          alignment: Alignment.centerLeft,
          decoration: kBoxDecorationStyle,
          height: 60.0,
          child: TextFormField(
            
            validator: (value) {
              if (value!.isEmpty) {
                return 'Por favor ingrese su correo electrónico';
              }
              return null;
            },
            controller: emailController,
            keyboardType: TextInputType.emailAddress,
            style: const TextStyle(
              color: Colors.white,
              fontFamily: 'OpenSans',
            ),
            decoration: const InputDecoration(
              border: InputBorder.none,
              contentPadding: EdgeInsets.only(top: 14.0, left: 14.0),
              prefixIcon: Icon(
                Icons.email,
                color: Colors.white,
              ),
              hintText: 'Ingresa tu correo electrónico',
              hintStyle: kHintTextStyle,
            ),
          ),
        ),
      ],
    );
  }

  Widget _buildPasswordTF() {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: <Widget>[
        const Text(
          'Contraseña',
          style: kLabelStyle,
        ),
        const SizedBox(height: 10.0),
        Container(
          alignment: Alignment.centerLeft,
          decoration: kBoxDecorationStyle,
          height: 60.0,
          child: TextFormField(
            validator: (value) {
              if (value!.isEmpty) {
                return 'Por favor ingrese su  contraseña';
              }
              return null;
            },
            controller: passwordController,
            obscureText: true,
            style: const TextStyle(
              color: Colors.white,
              fontFamily: 'OpenSans',
            ),
            decoration: const InputDecoration(
              border: InputBorder.none,
              contentPadding: EdgeInsets.only(top: 14.0),
              prefixIcon: Icon(
                Icons.lock,
                color: Colors.white,
              ),
              hintText: 'Ingresa tu contraseña',
              hintStyle: kHintTextStyle,
            ),
          ),
        ),
      ],
    );
  }

  Widget _buildForgotPasswordBtn(context) {
    return Container(
      alignment: Alignment.centerRight,
      child: TextButton(
        onPressed: () => Navigator.of(context).pushNamed("/forgot-password"),
        child: const Text(
          '¿Olvidaste tu contraseña?',
          style: kLabelStyle,
        ),
        style: const ButtonStyle(),
      ),
    );
  }

 
  Widget _buildSignupBtn(context) {
    return GestureDetector(
      onTap: () => Navigator.of(context).pushNamed('/register'),
      child: RichText(
        text: const TextSpan(
          children: [
            TextSpan(
              text: '¿No tienes una cuenta? ',
              style: TextStyle(
                color: Colors.white,
                fontSize: 18.0,
                fontWeight: FontWeight.w400,
              ),
            ),
            TextSpan(
              text: 'Registrate',
              style: TextStyle(
                color: Colors.white,
                fontSize: 18.0,
                fontWeight: FontWeight.bold,
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildLoginBtn(BuildContext context) {
    return Container(
      padding: const EdgeInsets.symmetric(vertical: 25.0),
      width: double.infinity,
      child: ElevatedButton(
        style: ElevatedButton.styleFrom(
          elevation: 8.0,
          padding: const EdgeInsets.all(15.0),
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(30.0),
          ),
          primary: Colors.white,
        ),  
        child: const Text(
          'ACCEDER',
          style: TextStyle(
            color: Colors.purple,
            letterSpacing: 1.5,
            fontSize: 18.0,
            fontWeight: FontWeight.bold,
            fontFamily: 'OpenSans',
          ),
        ),
        onPressed: ()=>_buildAccessPressed(context),
      ),
    );
  }

  void _buildAccessPressed(BuildContext context) {
    if (_formKey.currentState != null &&
        _formKey.currentState!.validate()) {
      context
          .read<AuthService>()
          .signIn(
            email: emailController.text,
            password: passwordController.text,
          )
          //! se muestra el snackbar con cada uno de los mensajes de las validaciones de firebase
          .then((value) => ScaffoldMessenger.of(context).showSnackBar(
                SnackBar(
                    content: Text(
                      value!,
                      style: const TextStyle(
                        color: Colors.white,
                        fontSize: 16.0,
                      ),
                    ),
                    backgroundColor: Colors.grey),
              ));
    } else {
      ScaffoldMessenger.of(context).showSnackBar(
        const SnackBar(
            content: Text(
              'Por favor ingresa todos los datos',
              style: TextStyle(
                color: Colors.white,
                fontSize: 16.0,
              ),
            ),
            backgroundColor: Colors.grey),
      );
    }
  }

  //! Inicio de sesion
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: AnnotatedRegion<SystemUiOverlayStyle>(
        value: SystemUiOverlayStyle.light,
        child: GestureDetector(
          //! quita el foco del keyboard cuando tapeas a cualquier lado
          onTap: () => FocusScope.of(context).unfocus(),
          child: Stack(
            children: <Widget>[
              Container(
                height: double.infinity,
                width: double.infinity,
                decoration: const BoxDecoration(
                  gradient: LinearGradient(
                    begin: Alignment.topCenter,
                    end: Alignment.bottomCenter,
                    colors: [
                      Colors.blue,
                      Colors.purple,
                    ],
                  ),
                ),
              ),
              SizedBox(
                height: double.infinity,
                child: SingleChildScrollView(
                  physics: const AlwaysScrollableScrollPhysics(),
                  padding: const EdgeInsets.only(
                    right: 40.0,
                    left: 40.0,
                    top: 50.0,
                  ),
                  child: Form(
                      //? Con este valida automaticamente en los 2 textfield asociados ... es como si hiciera onChanged a los 2 
                      //autovalidateMode: AutovalidateMode.onUserInteraction,
                      key: _formKey,
                      child: Column(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          Container(
                            margin: EdgeInsets.only(bottom: 20),
                            height: 100,
                            width: 200,
                            color: Colors.transparent,
                            //child: const Align(
                            //  alignment: Alignment.center,
                            //  child:  Text(
                            //    'Logo de FUNdamental Algorithms',
                            //    textAlign: TextAlign.center,
                            //  ),
                            //),
                          ),
                          const Text(
                            'Iniciar Sesión',
                            style: TextStyle(
                              color: Colors.white,
                              fontFamily: 'OpenSans',
                              fontSize: 30.0,
                              fontWeight: FontWeight.bold,
                            ),
                          ),
                          const SizedBox(height: 30.0),
                          _buildEmailTF(context),
                          const SizedBox(height: 30.0),
                          _buildPasswordTF(),
                          _buildForgotPasswordBtn(context),
                          _buildLoginBtn(context),
                          _buildSignupBtn(context),
                        ],
                      )),
                ),
              )
            ],
          ),
        ),
      ),
    );
  }
}

showAlertDialog(BuildContext context, String message) {
  // Create button
  Widget okButton = FlatButton(
    child: const Text("OK"),
    onPressed: () {
      Navigator.of(context).pop();
    },
  );

  // Create AlertDialog
  AlertDialog alert = AlertDialog(
    title: const Text("Auth"),
    content: Text(message),
    actions: [
      okButton,
    ],
  );

  // show the dialog
  showDialog(
    context: context,
    builder: (BuildContext context) {
      return alert;
    },
  );
}
