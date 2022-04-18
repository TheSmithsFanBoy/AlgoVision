import 'package:flutter/material.dart';

List<String> images = [
  "https://static.javatpoint.com/tutorial/flutter/images/flutter-logo.png",
  "https://static.javatpoint.com/tutorial/flutter/images/flutter-logo.png",
  "https://static.javatpoint.com/tutorial/flutter/images/flutter-logo.png",
  "https://static.javatpoint.com/tutorial/flutter/images/flutter-logo.png"
];

class FundamentalsScreen extends StatelessWidget {
  const FundamentalsScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final List<MenuData> menu = [
      MenuData(Icons.move_to_inbox_outlined, 'Condicional "If"',
          (() => {Navigator.pushNamed(context, '/fundamentals/if')})),
      MenuData(Icons.find_in_page_outlined, 'Condicional "If Else"',
          (() => {Navigator.pushNamed(context, '/fundamentals/if')})),
      MenuData(Icons.find_in_page_outlined, 'Menu 3',
          (() => {Navigator.pushNamed(context, '/fundamentals/if')})),
      MenuData(Icons.upgrade_outlined, 'Menu 4',
          (() => {Navigator.pushNamed(context, '/fundamentals/if')})),
      MenuData(Icons.upgrade_outlined, 'Menu 5',
          (() => {Navigator.pushNamed(context, '/fundamentals/if')})),
      MenuData(Icons.play_for_work_outlined, 'Menu 6',
          (() => {Navigator.pushNamed(context, '/fundamentals/if')})),
      MenuData(Icons.play_for_work_outlined, 'Menu 7',
          (() => {Navigator.pushNamed(context, '/fundamentals/if')})),
      MenuData(Icons.assignment_turned_in_outlined, 'Menu 8',
          (() => {Navigator.pushNamed(context, '/fundamentals/if')})),
      MenuData(Icons.assignment_turned_in_outlined, 'Menu 9',
          (() => {Navigator.pushNamed(context, '/fundamentals/if')})),
      MenuData(Icons.fact_check_outlined, 'Menu 10',
          (() => {Navigator.pushNamed(context, '/fundamentals/if')}))
    ];
    return Scaffold(
        appBar: AppBar(
          title: const Text('Fundamentos de Programación'),
          centerTitle: true,
          backgroundColor: Colors.blueGrey,
          flexibleSpace: Container(
            decoration: const BoxDecoration(
              gradient: LinearGradient(
                  begin: Alignment.topRight,
                  end: Alignment.bottomLeft,
                  colors: <Color>[
                    Color.fromARGB(255, 218, 78, 162),
                    Colors.blue,
                  ]),
            ),
          ),
        ),
        body: Container(
          padding: const EdgeInsets.all(12.0),
          child: GridView.builder(
            shrinkWrap: true,
            physics: const BouncingScrollPhysics(),
            itemCount: menu.length,
            gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
                childAspectRatio: 1,
                crossAxisCount: 2,
                crossAxisSpacing: 4.0,
                mainAxisSpacing: 4.0),
            itemBuilder: (BuildContext context, int index) {
              return Card(
                elevation: 1.9,
                shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(8.0)),
                child: InkWell(
                  child: Column(
                    mainAxisAlignment: MainAxisAlignment.center,
                    crossAxisAlignment: CrossAxisAlignment.center,
                    children: <Widget>[
                      Icon(
                        menu[index].icon,
                        size: 80,
                      ),
                      const SizedBox(height: 20),
                      Text(
                        menu[index].title,
                        textAlign: TextAlign.center,
                        style: const TextStyle(
                            fontSize: 14,
                            color: Colors.black87,
                            fontWeight: FontWeight.w300),
                      )
                    ],
                  ),
                ),
              );
            },
          ),
        ));
  }
}

class MenuData {
  const MenuData(this.icon, this.title, this.callback);

  final String title;

  final IconData icon;

  final VoidCallback callback;
}
