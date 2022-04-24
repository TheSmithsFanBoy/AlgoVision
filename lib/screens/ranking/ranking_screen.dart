import 'package:flutter/material.dart';

class RankingScreen extends StatelessWidget {
  const RankingScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    const url =
        "https://images.unsplash.com/photo-1507003211169-0a1dd7228f2d?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=687&q=80";
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
        title: const Text("Ranking"),
        centerTitle: true,
        flexibleSpace: Container(
          decoration: const BoxDecoration(
            gradient: LinearGradient(
                begin: Alignment.centerLeft,
                end: Alignment.centerRight,
                colors: <Color>[Colors.orangeAccent, Colors.yellow]),
          ),
        ),
        elevation: 0,
      ),
      body: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Card(
              elevation: 5,
              child: Row(
                children: [
                  SizedBox(
                    height: 200,
                    child: Image.network(
                      url,
                      fit: BoxFit.cover,
                    ),
                  ),
                  const SizedBox(
                    width: 15,
                  ),
                  Column(
                    children: const [
                      Text("PUESTO #1 (Tú)",
                          style: TextStyle(
                              fontSize: 21, fontWeight: FontWeight.bold)),
                      Text("Jhon Demo (@jhon_demo)",
                          style: TextStyle(
                              fontSize: 17, fontWeight: FontWeight.w500)),
                      Text("599 puntos",
                          style: TextStyle(
                              fontSize: 16, fontWeight: FontWeight.w400)),
                    ],
                  )
                ],
              )),
          const SizedBox(
            height: 30,
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
                child: const Text("RANKING GLOBAL",
                    style: TextStyle(fontSize: 12)),
              ),
              const Expanded(
                  child: Divider(
                thickness: 1,
                height: 10,
                color: Colors.grey,
              )),
            ],
          ),
        ],
      ),
    );
  }
}

class Medal {
  const Medal({required this.coverImg, required this.title});
  final String coverImg;
  final String title;
}
