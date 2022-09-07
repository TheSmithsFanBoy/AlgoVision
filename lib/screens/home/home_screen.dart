import 'package:flutter/material.dart';
import 'package:tdpapp/screens/home/home_body.dart';
import 'package:tdpapp/widgets/navigation_drawer.dart';

class HomeScreen extends StatelessWidget {
  const HomeScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    // get current user
    return SafeArea(
      top: true,
      child: Scaffold(
        drawer:  NavigationDrawer(),
        appBar: AppBar(
          title: const Text("Inicio"),
          backgroundColor: Colors.indigo,
          centerTitle: true,
         
          leading: Builder(
            builder: (BuildContext context) {
              return IconButton(
                icon: const Icon(
                  Icons.sort_outlined,
                  color: Colors.white, // Change Custom Drawer Icon Color
                ),
                onPressed: () {
                  Scaffold.of(context).openDrawer();
                },
                tooltip: MaterialLocalizations.of(context).openAppDrawerTooltip,
              );
            },
          ),
        ),
        body: const HomeBody(),
      ),
    );
  }
}
