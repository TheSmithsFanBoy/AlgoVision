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
      case 4:
        context.read<AuthService>().signOut();
        break;
    }
  }

  Widget headerWidget() {
    const url =
        "https://images.unsplash.com/photo-1507003211169-0a1dd7228f2d?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=687&q=80";
    return Row(
      children: [
        const CircleAvatar(
          radius: 40,
          backgroundImage: NetworkImage(url),
        ),
        const SizedBox(
          width: 20,
        ),
        Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: const [
            Text('Jhon Demo',
                style: TextStyle(
                    fontSize: 14,
                    color: Colors.black87,
                    fontWeight: FontWeight.w700)),
            SizedBox(
              height: 10,
            ),
            Text('jhondemo@gmail.com',
                style: TextStyle(fontSize: 12, color: Colors.black45))
          ],
        )
      ],
    );
  }
}
