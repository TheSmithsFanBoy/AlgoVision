import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:tdpapp/services/auth_service.dart';

import 'drawer_item.dart';

class NavigationDrawer extends StatelessWidget {
  const NavigationDrawer({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Drawer(
      child: Material(
        color: Colors.white24,
        child: Padding(
          padding: const EdgeInsets.fromLTRB(24.0, 80, 24, 0),
          child: Column(
            children: [
              headerWidget(),
              const SizedBox(
                height: 40,
              ),
              const Divider(
                thickness: 1,
                height: 10,
                color: Colors.grey,
              ),
              const SizedBox(
                height: 40,
              ),
              DrawerItem(
                  name: 'Cuenta',
                  icon: Icons.account_box_rounded,
                  onPressed: () => onItemPressed(context, index: 0)),
              const SizedBox(
                height: 30,
              ),
              DrawerItem(
                name: 'Ranking',
                icon: Icons.stacked_line_chart_rounded,
                onPressed: () => onItemPressed(context, index: 1),
              ),
              const SizedBox(
                height: 30,
              ),
              DrawerItem(
                  name: 'Retos',
                  icon: Icons.stars,
                  onPressed: () => onItemPressed(context, index: 2)),
              const SizedBox(
                height: 30,
              ),
              DrawerItem(
                name: 'Ayuda',
                icon: Icons.help_center,
                onPressed: () => onItemPressed(context, index: 3),
              ),
              const SizedBox(
                height: 30,
              ),
              const Divider(
                thickness: 1,
                height: 10,
                color: Colors.grey,
              ),
              const SizedBox(
                height: 30,
              ),
              DrawerItem(
                  name: 'Cerrar Sesión',
                  icon: Icons.logout,
                  onPressed: () => onItemPressed(context, index: 4)),
            ],
          ),
        ),
      ),
    );
  }

  void onItemPressed(BuildContext context, {required int index}) {
    if (index == 4) {
      showAlertDialog(context, "¿Desea cerrar sesión?");
      return;
    }
    Navigator.pop(context);
    switch (index) {
      case 0:
        Navigator.of(context).pushNamed('/account');
        break;
      case 1:
        Navigator.of(context).pushNamed('/ranking');
        break;
      case 2:
        Navigator.of(context).pushNamed('/challenges');
        break;
    }
  }

  showAlertDialog(BuildContext context, String message) {
    // Create button
    Widget okButton = TextButton(
      child: const Text("Cancelar"),
      onPressed: () {
        Navigator.of(context).pop();
      },
    );
    Widget signOutButton = TextButton(
      child: const Text("Cerrar Sesión"),
      onPressed: () {
        context.read<AuthService>().signOut();
      },
    );

    // Create AlertDialog
    AlertDialog alert = AlertDialog(
      content: Text(message),
      actions: [okButton, signOutButton],
    );

    // show the dialog
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return alert;
      },
    );
  }

  Widget headerWidget() {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      var email = user.email;
      var displayName = user.displayName;
      var photoUrl = user.photoURL.toString();
      return Row(
        children: [
          CircleAvatar(
            radius: 25,
            backgroundImage: NetworkImage(photoUrl),
          ),
          const SizedBox(
            width: 10,
          ),
          Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text(displayName!,
                  style: const TextStyle(
                      fontSize: 14,
                      color: Colors.black87,
                      fontWeight: FontWeight.w700)),
              const SizedBox(
                height: 10,
              ),
              Text(email!,
                  style: const TextStyle(fontSize: 12, color: Colors.black45))
            ],
          )
        ],
      );
    } else {
      return const Text(
        'Iniciar Sesión',
        style: TextStyle(
          fontSize: 20,
          fontWeight: FontWeight.bold,
        ),
      );
    }
  }
}
