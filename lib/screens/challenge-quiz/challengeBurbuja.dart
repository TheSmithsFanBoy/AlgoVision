import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class BurbujaRetoPage extends StatefulWidget {
  final dynamic idPage;

  const BurbujaRetoPage(this.idPage);

  @override
  State<BurbujaRetoPage> createState() => _BurbujaRetoPageState();
}

class _BurbujaRetoPageState extends State<BurbujaRetoPage> {
  UnityWidgetController? unityWidgetController;

   //bool? mostrarDialog;

  @override
  void initState() {
    // TODO: implement initState
    SystemChrome.setEnabledSystemUIMode(SystemUiMode.manual,
        overlays: [SystemUiOverlay.bottom]);
    SystemChrome.setPreferredOrientations([
      DeviceOrientation.landscapeRight,
      DeviceOrientation.landscapeLeft,
    ]);

    //mostrarDialog = true;


    super.initState();
  }

  @override
  void dispose() {
    // TODO: implement dispose
    if (unityWidgetController != null) {
      unityWidgetController!.dispose();
    }

    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          SizedBox(
            width: double.infinity,
            height: MediaQuery.of(context).size.height,
            child: UnityWidget(
              unloadOnDispose: true,
              onUnityCreated: (controller) {
                unityWidgetController = controller;


if (widget.idPage == 'ZSVasoR0gryekm9R9hiy' || widget.idPage == 'UQcQ07Yz9Y6OqICTXjAJ' || widget.idPage == 'WhkXeCwXtyPWMaViuaXU' || widget.idPage == 'hcntfI66AzLg8TczMP1e') 

                {
                  //!KH99JvRZ9MOAo8DnnfLH - burbuja
                  unityWidgetController!.postMessage(
                    'GameManager',
                    'OnFlutterMessageReceived',
                    widget.idPage == 'ZSVasoR0gryekm9R9hiy' ? "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"bubbleSort\",\"is_test\":true,\"array\":\"[30, 20, 15, 35]\",\"hidden_animation\":\"variables\"}" 
                    : widget.idPage == 'UQcQ07Yz9Y6OqICTXjAJ' ? "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"bubbleSort\",\"is_test\":true,\"array\":\"[30, 20, 15, 35, 12]\",\"hidden_animation\":\"variables\"}" 
   : widget.idPage == 'hcntfI66AzLg8TczMP1e'  ? "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"bubbleSort\",\"is_test\":true,\"array\":\"[30, 20, 18, 15, 12]\",\"hidden_animation\":\"variables\"}" 
                              : "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"bubbleSort\",\"is_test\":true,\"array\":\"[30, 20, 18, 40, 15]\",\"hidden_animation\":\"items\"}", 
                  );
                }

                if (widget.idPage == 'Nk3tfGcxM6Zb4eZIolL2' || widget.idPage == 'uxFkxUQbzI4nWZ5dsCUD' || widget.idPage == 'diDjJvgnBuRivzllV5vF' || widget.idPage == '3Syf0P8WjHXJOslc505S') 

                {
                  
                  unityWidgetController!.postMessage(
                    'GameManager',
                    'OnFlutterMessageReceived',
                    widget.idPage == 'Nk3tfGcxM6Zb4eZIolL2' ? "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"selectionSort\",\"is_test\":true,\"array\":\"[30, 20, 15, 35]\",\"hidden_animation\":\"variables\"}" 

                    : widget.idPage == 'uxFkxUQbzI4nWZ5dsCUD' ? "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"selectionSort\",\"is_test\":true,\"array\":\"[30, 20, 15, 35, 12]\",\"hidden_animation\":\"variables\"}" 

   : widget.idPage == 'diDjJvgnBuRivzllV5vF'  ? "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"selectionSort\",\"is_test\":true,\"array\":\"[20,25,30,20,15]\",\"hidden_animation\":\"variables\"}" 


                              : "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"selectionSort\",\"is_test\":true,\"array\":\"[20, 25, 15, 45, 18]\",\"hidden_animation\":\"items\"}", 
                  );
                }

//! -------

if (widget.idPage == '3s2EI6h6bX7FflgyFcIL' || widget.idPage == 'E4Y4NisTZHCjKlRoCIkk' || widget.idPage == 'rdek7F8mvCYxEduTFzVZ' || widget.idPage == 'uIh8T7XkwLPicVSizaZu') 

                {
                  
                  unityWidgetController!.postMessage(
                    'GameManager',
                    'OnFlutterMessageReceived',  
                    widget.idPage == '3s2EI6h6bX7FflgyFcIL' ? "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"insertionSort\",\"is_test\":true,\"array\":\"[30, 20, 15, 35, 12]\",\"hidden_animation\":\"variables\"}" 

                    : widget.idPage == 'E4Y4NisTZHCjKlRoCIkk' ? "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"insertionSort\",\"is_test\":true,\"array\":\"[30, 20, 15, 35]\",\"hidden_animation\":\"variables\"}" 

   : widget.idPage == 'rdek7F8mvCYxEduTFzVZ'  ? "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"insertionSort\",\"is_test\":true,\"array\":\"[18, 25, 30, 20, 15]\",\"hidden_animation\":\"variables\"}" 


                              : "{ \"name\":\"initialize\",\"practice_type\":\"visualization\",\"lesson_name\":\"insertionSort\",\"is_test\":true,\"array\":\"[20, 25, 15, 45, 18]\",\"hidden_animation\":\"items\"}", 
                  );
                }


             

              },
              fullscreen: false,
            ),
          ),
          Positioned(
            top: 5,
            right: 5,
            child: IconButton(
                onPressed: () {
  if (widget.idPage == 'ZSVasoR0gryekm9R9hiy' || widget.idPage == 'UQcQ07Yz9Y6OqICTXjAJ' || widget.idPage == 'WhkXeCwXtyPWMaViuaXU' || widget.idPage == 'hcntfI66AzLg8TczMP1e' || widget.idPage == 'Nk3tfGcxM6Zb4eZIolL2' || widget.idPage == 'uxFkxUQbzI4nWZ5dsCUD' || widget.idPage == 'diDjJvgnBuRivzllV5vF' || widget.idPage == '3Syf0P8WjHXJOslc505S') {
                    if (unityWidgetController != null) {
                      unityWidgetController!.postMessage(
                        'GameManager',
                        'OnFlutterMessageReceived',
                        "{\"name\":\"dispose\"}",
                      );
                    }
                  }

                  Navigator.pop(context);
                },
                icon: const CircleAvatar(
                  child: Icon(Icons.done),
                  backgroundColor: Colors.indigo,
                )),
          ),
          //mostrarDialog! ? AlertDialog(
          //  insetPadding: EdgeInsets.symmetric(horizontal: 0, vertical: 0),
          //  contentPadding: EdgeInsets.symmetric(horizontal: 0, vertical: 0),
          //  content: Container(
          //    color: Colors.indigo,
          //    width: MediaQuery.of(context).size.width,
          //    height:MediaQuery.of(context).size.height ,
          //    child: Column(
          //      mainAxisSize: MainAxisSize.max,
          //      mainAxisAlignment: MainAxisAlignment.center,
          //      children: [
          //        Align(
          //          alignment: Alignment.center,
          //          child: Column(
          //            children: [
          //             Padding(
          //                padding: EdgeInsets.symmetric(horizontal: 10),
          //                child: Text('A continuación, accederás a una animación que te ayudará a comprender el funcionamiento del algoritmo tratado en esta lección. Deberás visualizarlo paso a paso de principio a fin.', textAlign: TextAlign.center, style: TextStyle(color: Colors.white),)),
          //              SizedBox(height: 50,),
          //              ElevatedButton(
          //                style: ElevatedButton.styleFrom(
          //                  backgroundColor: Colors.white,
          //                  elevation: 2,
          //                  shadowColor: Colors.black
          //                ),
          //                onPressed: (){
          //                  mostrarDialog = false;
          //                  setState(() {
          //                    
          //                  });
          //                }, child: Text('Entendido', style: TextStyle(color: Colors.indigo),))
          //            ],
          //          ))
          //      ],
          //    ),
          //  ),
          //): Container()
        ]
      ),
    );
  }
}
