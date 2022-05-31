import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:tdpapp/models/screen_arguments.dart';

class HomeBody extends StatelessWidget {
  const HomeBody({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    // ignore: unused_local_variable
    final List<MenuData> menu = [
      // https://www.flaticon.es/icono-gratis/sistema-de-gestion-de-contenidos_2535488?related_id=2535488
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535488.png",
        title: "FUNDAMENTOS",
        route: "/fundamentals",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535490.png",
        title: "ALG. ORDENAMIENTO",
        route: "/algorithm",
      ),
      const MenuData(
        coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535502.png",
        title: "ALG. BUSQUEDA",
        route: "/algorithm",
      ),
    ];
    return StreamBuilder(
        stream: FirebaseFirestore.instance.collection('modules').snapshots(),
        builder: (context, AsyncSnapshot<QuerySnapshot> snapshot) {
          if (!snapshot.hasData) {
            return const Center(
              child: CircularProgressIndicator(),
            );
          }
          final List<DocumentSnapshot> docs = snapshot.data!.docs;
          return ListView.builder(
            padding: const EdgeInsets.all(16),
            itemCount: docs.length,
            itemBuilder: (context, index) {
              final DocumentSnapshot doc = docs[index];
              return InkWell(
                  onTap: () {
                    if(doc['name'] == 'Fundamentos de Progra') {
                      Navigator.pushNamed(context, "/fundamentals",
                          arguments: ScreenArguments(
                              id: doc.id,
                              title: doc['name'],
                              description: '',
                              parentId: ''));
                    }else if(doc['name'] == 'Algoritmos Ordenamiento'){
                      Navigator.pushNamed(context, "/algorithm",
                          arguments: ScreenArguments(
                              id: doc.id,
                              title: doc['name'],
                              description: '',
                              parentId: ''));
                    }
                  },
                  child: Card(
                    elevation: 4,
                    margin: const EdgeInsets.only(bottom: 16),
                    child: Padding(
                      padding: const EdgeInsets.all(10),
                      child: Row(
                        children: [
                          Image.network(
                            doc['coverImage'],
                            width: 90,
                            height: 90,
                          ),
                          const SizedBox(width: 16),
                          Expanded(
                            child: Column(
                              crossAxisAlignment: CrossAxisAlignment.start,
                              children: [
                                Text(
                                  doc['name'],
                                  style: const TextStyle(
                                    fontSize: 18,
                                    fontWeight: FontWeight.bold,
                                  ),
                                ),
                                const SizedBox(height: 8),
                                Text(
                                  doc['description'],
                                  style: const TextStyle(
                                    fontSize: 16,
                                    color: Colors.grey,
                                  ),
                                ),
                              ],
                            ),
                          ),
                        ],
                      ),
                    ),
                  ));
            },
          );
        });
    /*
    return Container(
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
          return GestureDetector(
            child: Card(
                shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(20.0)),
                margin: const EdgeInsets.all(5.0),
                elevation: 5,
                child: ClipRRect(
                  borderRadius: BorderRadius.circular(15),
                  child: Column(
                    children: <Widget>[
                      Container(
                        padding: const EdgeInsets.all(15.0),
                        child: Image(
                          image: NetworkImage(menu[index].coverImg),
                          height: 111,
                        ),
                      ),
                      // Usamos Container para el contenedor de la descripción
                      Container(
                        padding: const EdgeInsets.all(5.0),
                        child: Text(
                          menu[index].title,
                          style: const TextStyle(
                              color: Colors.black87,
                              fontSize: 14.0,
                              fontWeight: FontWeight.w600),
                        ),
                      ),
                    ],
                  ),
                )),
            onTap: () => Navigator.pushNamed(context, menu[index].route),
          );
        },
      ),
    );
    */
  }
}

class MenuData {
  const MenuData(
      {required this.coverImg, required this.title, required this.route});

  final String coverImg;

  final String title;

  final String route;
}
