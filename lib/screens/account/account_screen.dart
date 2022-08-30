import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:tdpapp/provider/user_provider.dart';

class AccountScreen extends StatelessWidget {
  const AccountScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final _user = Provider.of<UserProvider>(context);
    _user.setUser(FirebaseAuth.instance.currentUser);
    var email = _user.user != null ? _user.user?.email : '';
    var displayName = _user.user != null ? _user.user?.displayName : '';
    var url = _user.user != null ? _user.user?.photoURL : '';
    url = (url! + "?s=200");
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
              Navigator.pushNamed(context, '/edit-account');
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
            _listMedals(),
           
          ],
        ),
      ),
    );
  }

  FutureBuilder<DocumentSnapshot<Map<String, dynamic>>> _listMedals() {
    
    return FutureBuilder(
              future: FirebaseFirestore.instance.collection('users').doc(FirebaseAuth.instance.currentUser!.uid).get(),
              builder: (context, snapshot) {
                
                if (snapshot.connectionState == ConnectionState.waiting) {
                  return const Center(
                    child: CircularProgressIndicator(),
                  );
                }

                if (snapshot.hasData) {
                  var p = snapshot.data! as DocumentSnapshot;
                  var idList = [];
                  for (var medal in p['medals']) {
                    idList.add(medal.id);
                  }

                    return Expanded(
                      child: ListView.builder(
                          shrinkWrap: true,
                          itemCount: idList.length,
                          itemBuilder: (context, index) {
                            return FutureBuilder(
                              future: FirebaseFirestore.instance.collection('medals').doc(idList[index]).get(),
                                builder: (context, snapshot) {
                                  if (snapshot.connectionState == ConnectionState.waiting) {
                                    return const Center(
                                      child: CircularProgressIndicator(),
                                    );
                                  }
                                  if (snapshot.hasData) {
                                    var m = snapshot.data! as DocumentSnapshot;
                                    return ListTile(
                                      leading: Image.network(m['image'],
                                          width: 60,
                                          height: 60,
                                        ),
                                      title: Text(m['name']),
                                      subtitle: Text(p['medals'][index].id),
                                    );
                                  }       
                                  return Container();
                                },
                                );
                          },
                        ),
                    );
                }
                return Container();
              },
              );
  }
}
