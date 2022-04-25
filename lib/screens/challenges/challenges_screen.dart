import 'package:flutter/material.dart';

class ChallengesScreen extends StatelessWidget {
  const ChallengesScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final List<MenuData> menu = [
      // https://www.flaticon.es/icono-gratis/sistema-de-gestion-de-contenidos_2535488?related_id=2535488
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535516.png",
        title: "COMPLETA UNIDAD 1",
        description:
            "Completa el 100% de la Unidad 1 antes de finalizar la semana",
        route: "/algorithm-details",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535516.png",
        title: "COMPLETA UNIDAD 1",
        description:
            "Completa el 100% de la Unidad 1 antes de finalizar la semana",
        route: "/algorithm-details",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535516.png",
        title: "COMPLETA UNIDAD 1",
        description:
            "Completa el 100% de la Unidad 1 antes de finalizar la semana",
        route: "/algorithm-details",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535516.png",
        title: "COMPLETA UNIDAD 1",
        description:
            "Completa el 100% de la Unidad 1 antes de finalizar la semana",
        route: "/algorithm-details",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535516.png",
        title: "COMPLETA UNIDAD 1",
        description:
            "Completa el 100% de la Unidad 1 antes de finalizar la semana",
        route: "/algorithm-details",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535516.png",
        title: "COMPLETA UNIDAD 1",
        description:
            "Completa el 100% de la Unidad 1 antes de finalizar la semana",
        route: "/algorithm-details",
      ),
    ];
    return Scaffold(
        appBar: AppBar(
          title: const Text('Retos Semanales'),
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
        body: ListView.builder(
          padding: const EdgeInsets.all(16),
          itemCount: menu.length,
          itemBuilder: (context, index) {
            final MenuData item = menu[index];
            return InkWell(
                onTap: () {
                  Navigator.pushNamed(context, item.route);
                },
                child: Card(
                  elevation: 4,
                  margin: const EdgeInsets.only(bottom: 16),
                  child: Padding(
                    padding: const EdgeInsets.all(10),
                    child: Row(
                      children: [
                        Expanded(
                          child: Column(
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: [
                              Text(
                                item.title,
                                style: const TextStyle(
                                  fontSize: 18,
                                  fontWeight: FontWeight.bold,
                                ),
                              ),
                              const SizedBox(height: 8),
                              Text(
                                item.description,
                                style: const TextStyle(
                                  fontSize: 16,
                                  color: Colors.grey,
                                ),
                              ),
                              const Text(
                                "60% completado",
                                style: TextStyle(
                                  fontSize: 16,
                                  color: Colors.green,
                                ),
                              ),
                            ],
                          ),
                        ),
                        const SizedBox(width: 16),
                        Image.network(
                          item.coverImg,
                          width: 90,
                          height: 90,
                        ),
                      ],
                    ),
                  ),
                ));
          },
        ));
  }
}

class MenuData {
  const MenuData(
      {required this.coverImg,
      required this.title,
      required this.description,
      required this.route});

  final String coverImg;

  final String title;

  final String description;

  final String route;
}
