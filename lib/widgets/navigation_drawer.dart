// ignore_for_file: use_key_in_widget_constructors

import 'package:cached_network_image/cached_network_image.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:tdpapp/services/auth_service.dart';

import '../provider/user_provider.dart';
import 'drawer_item.dart';

class NavigationDrawer extends StatefulWidget {

  
  @override
  State<NavigationDrawer> createState() => _NavigationDrawerState();
}

class _NavigationDrawerState extends State<NavigationDrawer> {

  

  @override
  Widget build(BuildContext context) {
  
  

    return Builder(
      builder: (context) {
        final _user = Provider.of<UserProvider>(context);
        _user.setUser(FirebaseAuth.instance.currentUser);
        
        return Drawer(
          width: MediaQuery.of(context).size.width * 0.65,
          child: Material(
            color: Colors.indigo.withOpacity(0.9),
            child: Padding(
              padding: const EdgeInsets.fromLTRB(24.0, 80, 24, 0),
              child: Column(
                children: [
                  headerWidget(context, _user),
                  const SizedBox(
                    height: 40,
                  ),
                  const Divider(
                    thickness: 1,
                    height: 10,
                    color: Colors.white,
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
                  //DrawerItem(
                  //  name: 'Ayuda',
                  //  icon: Icons.help_center,
                  //  onPressed: () => onItemPressed(context, index: 3),
                  //),
                  const SizedBox(
                    height: 30,
                  ),
                  const Divider(
                    thickness: 1,
                    height: 10,
                    color: Colors.white,
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
      child: const Text("Cancelar", style: TextStyle(color: Colors.indigo),),
      onPressed: () {
        Navigator.of(context).pop();
      },
    );
    Widget signOutButton = TextButton(
      child: const Text("Cerrar Sesión", style: TextStyle(color: Colors.indigo),),
      onPressed: () {
        context.read<AuthService>().signOut();
      },
    );

    // Create AlertDialog
    AlertDialog alert = AlertDialog(
      content: Text(message, style: const TextStyle(fontSize: 18, color: Colors.black),),
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

  Widget headerWidget(context, userProvider) {
    
    //!Drawer fixeado ... jalar data de la instancia de firebase
 
      var email = userProvider.user?.email;
      var displayName = userProvider.user?.displayName;
      var photoUrl = userProvider.user?.photoURL.toString(); 
      return Row(
        children: [
            ClipRRect(
                borderRadius: BorderRadius.circular(25.0),
                child: CachedNetworkImage(
                  
                    fit: BoxFit.cover,
                    width: 50,
                    height: 50,
                    placeholder: (context, url) => Image.asset('assets/images/loading.gif'),
                    imageUrl:   photoUrl!),
              ),
          const SizedBox(
            width: 20,
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
  
  }
}
