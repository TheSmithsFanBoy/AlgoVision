import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';

class AccountScreen extends StatelessWidget {
  const AccountScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    User? user = FirebaseAuth.instance.currentUser;
    var email = user != null ? user.email : '';
    var displayName = user != null ? user.displayName : '';
    var url = user != null ? user.photoURL : '';
    url = (url! + "?s=200");
    final List<Medal> medals = [
      const Medal(
          title: "FUNDAMENTOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535488.png"),
      const Medal(
          title: "ALGORÍTMOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535490.png"),
      const Medal(
          title: "FUNDAMENTOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535488.png"),
      const Medal(
          title: "ALGORÍTMOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535490.png"),
      const Medal(
          title: "FUNDAMENTOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535488.png"),
      const Medal(
          title: "ALGORÍTMOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535490.png"),
      const Medal(
          title: "FUNDAMENTOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535488.png"),
      const Medal(
          title: "ALGORÍTMOS",
          coverImg: "https://cdn-icons-png.flaticon.com/512/2535/2535490.png"),
    ];
    return Scaffold(
      appBar: AppBar(
        iconTheme: const IconThemeData(color: Colors.black54),
        title: const Text("Cuenta"),
        centerTitle: true,
        backgroundColor: Colors.white,
        actions: [
          IconButton(
            icon: const Icon(Icons.edit),
            onPressed: () {
              Navigator.pushNamed(context, '/home');
            },
          ),
        ],
        elevation: 0,
      ),
      body: Center(
        child: Column(
          children: [
            const SizedBox(
              height: 30,
            ),
            CircleAvatar(
              radius: 60,
              backgroundImage: NetworkImage(url),
            ),
            const SizedBox(
              height: 10,
            ),
            Text(displayName!,
                style: const TextStyle(
                    fontSize: 18,
                    color: Colors.black87,
                    fontWeight: FontWeight.w700)),
            const SizedBox(
              height: 4,
            ),
            Text(email!,
                style: const TextStyle(fontSize: 14, color: Colors.black45)),
            const SizedBox(
              height: 40,
            ),
            Row(
              children: [
                const Expanded(
                    child: Divider(
                  thickness: 1,
                  height: 10,
                  color: Colors.grey,
                )),
                Container(
                  margin: const EdgeInsets.only(left: 10.0, right: 10.0),
                  child: const Text("MEDALLAS", style: TextStyle(fontSize: 12)),
                ),
                const Expanded(
                    child: Divider(
                  thickness: 1,
                  height: 10,
                  color: Colors.grey,
                )),
              ],
            ),
            const SizedBox(
              height: 10,
            ),
            GridView.builder(
              scrollDirection: Axis.vertical,
              shrinkWrap: true,
              gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
                  crossAxisCount: 3, childAspectRatio: 1),
              itemCount: medals.length,
              itemBuilder: (BuildContext context, int index) {
                return GestureDetector(
                  child: Card(
                      shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(100.0)),
                      margin: const EdgeInsets.all(5.0),
                      elevation: 15,
                      child: ClipRRect(
                        borderRadius: BorderRadius.circular(65),
                        child: Column(
                          children: <Widget>[
                            Container(
                              padding: const EdgeInsets.all(5.0),
                              child: Image(
                                image: NetworkImage(medals[index].coverImg),
                                height: 70,
                              ),
                            ),
                            // Usamos Container para el contenedor de la descripción
                            Container(
                              padding: const EdgeInsets.all(1.0),
                              child: Text(
                                medals[index].title,
                                style: const TextStyle(
                                    color: Colors.black87,
                                    fontSize: 13.0,
                                    fontWeight: FontWeight.w600),
                              ),
                            ),
                          ],
                        ),
                      )),
                );
              },
            )
          ],
        ),
      ),
    );
  }
}

class Medal {
  const Medal({required this.coverImg, required this.title});

  final String coverImg;
  final String title;
}
