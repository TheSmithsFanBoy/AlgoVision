import 'package:flutter/material.dart';
import 'package:animate_do/animate_do.dart';
import 'package:youtube_player_flutter/youtube_player_flutter.dart';

class VideoPlayerFlutterTest extends StatefulWidget {
  const VideoPlayerFlutterTest({Key? key}) : super(key: key);

  @override
  State<VideoPlayerFlutterTest> createState() => _VideoPlayerFlutterTestState();
}

class _VideoPlayerFlutterTestState extends State<VideoPlayerFlutterTest> {
  late YoutubePlayerController _ytCntrller;

  @override
  void initState() {
    super.initState();

    //? En algunos video me sale throw ... "didn't find the frame"
    const url = 'https://www.youtube.com/watch?v=NvryolGa19A';

    _ytCntrller = YoutubePlayerController(
      initialVideoId: YoutubePlayer.convertUrlToId(url)!,
      flags: const YoutubePlayerFlags(
        //! Cuando se construye el state ... x defecto el video se autoReproduce
        autoPlay: false,
        controlsVisibleAtStart: false,
        //* Se esconde todos los controles.
        //*Si presiono el boton pantalla completa ya no puedo regresar
        //* ya que todos los botones de controles estan ocultos e inhabilitados
        hideControls: true,
      ),
    )..addListener(() {
        if (mounted) {
          setState(() {});
        }
        //! Lo pauseo antes que llegue al final, ya que si llega al final se muestra un
        //? circulaProgresIndicator y se traba el video
        if (_ytCntrller.value.position.inSeconds ==
            _ytCntrller.metadata.duration.inSeconds - 1) {
          _ytCntrller.pause();
        }
      });
  }

  @override
  void desactivate() {
    _ytCntrller.pause();
    super.deactivate();
  }

  @override
  void dispose() {
    _ytCntrller.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    final textoMinuto = TextoMinuto(tituloAppBar: 'Titulo AppBar', botones: [
      'Adelantar min 0:50',
      'Adelantar min 1:20',
      'Adelantar min 1:50',
      'Volver a reproducir' //! Setear a segundo 0
    ], minuto: [
      50, //0:50
      80, //1:20
      110, //1:50
      0
    ], texto: [
      'Cotenido de Texto Texto Texto Texto Texto Texto del segundo a partir del minuto 0:50 hasta el minuto 1:20',
      'Cotenido a partir del minuto 1:20 hasta el minuto 1:50',
      'Cotenido a partir del minuto 1:50 en adelante',
      ' '
    ]);

    return YoutubePlayerBuilder(
      player: YoutubePlayer(
        controller: _ytCntrller,
      ),
      builder: (context, player) {
        var animacionDuracion = const Duration(seconds: 2);
        return SafeArea(
          child: Scaffold(
            appBar: AppBar(
              title: Text('Prueba Video'),
              centerTitle: true,
            ),
            body: ListView(
              children: [
                _buildViodeScreen(player, context),
                Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 16.0)
                        .copyWith(bottom: 8),
                    child: _ytCntrller.value.position.inSeconds <
                            textoMinuto.minuto[0]
                        ? SlideInRight(
                            duration: animacionDuracion,
                            child: Text(
                              'Contenido apartir del minuto 0:00 hasta el segundo ${textoMinuto.minuto[0]}',
                              textAlign: TextAlign.center,
                            ))
                        : _ytCntrller.value.position.inSeconds <
                                textoMinuto.minuto[1]
                            ? BounceInDown(
                                duration: animacionDuracion,
                                child: Text(
                                  textoMinuto.texto[0],
                                  textAlign: TextAlign.center,
                                ))
                            : _ytCntrller.value.position.inSeconds <
                                    textoMinuto.minuto[2]
                                ? ElasticInDown(
                                    duration: animacionDuracion,
                                    child: Text(
                                      textoMinuto.texto[1],
                                      textAlign: TextAlign.center,
                                    ))
                                : FadeInRightBig(
                                    duration: animacionDuracion,
                                    child: Text(
                                      textoMinuto.texto[2],
                                      textAlign: TextAlign.center,
                                    ))),
                Container(
                  margin: EdgeInsets.symmetric(vertical: 10),
                  height: 40,
                  child: ListView(
                    scrollDirection: Axis.horizontal,

                    physics: ScrollPhysics(), //*
                    shrinkWrap: true, //*

                    children: [
                      _botonContinuarPausear(),
                      _botonPlayerAdelantar('Pantalla Completa ', -2),
                      _botonPlayerAdelantar(
                          textoMinuto.botones[0], textoMinuto.minuto[0]),
                      _botonPlayerAdelantar(
                          textoMinuto.botones[1], textoMinuto.minuto[1]),
                      _botonPlayerAdelantar(
                          textoMinuto.botones[2], textoMinuto.minuto[2]),
                      _botonPlayerAdelantar(
                          textoMinuto.botones[3], textoMinuto.minuto[3]),
                      TextButton(
                          onPressed: () {
                            //getUsuarios();
                          },
                          child: Text('llamada HTTP'))
                    ],
                  ),
                ),
                
              ],
            ),
          ),
        );
      },
    );
  }

  Expanded _buildViodeScreen(Widget player, BuildContext context) {
    return Expanded(
      child: ListView(
        shrinkWrap: true,
        children: [
          Stack(
            children: [
              Padding(
                padding: const EdgeInsets.all(16.0),
                child: ClipRRect(
                  child: player,
                  borderRadius: BorderRadius.circular(12),
                ),
              ),
              GestureDetector(
                onTap: () {
                  print('Video Bloqueado');
                },
                child: Container(
                  width: double.infinity,
                  height: MediaQuery.of(context).size.width * 0.6,
                  color: Colors.transparent,
                ),
              )
            ],
          ),
        ],
      ),
    );
  }

  Widget _botonPlayerAdelantar(String textoBoton, int segundo) {
    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 16.0),
      child: Container(
        width: 150,
        height: 40,
        child: ElevatedButton(
            onPressed: () {
              final posicion = Duration(seconds: segundo);

              if (segundo == -2) {
                _ytCntrller.toggleFullScreenMode();
              } else {
                _ytCntrller.seekTo(posicion);
              }
            },
            child: Text(
              textoBoton,
              textAlign: TextAlign.center,
            )),
      ),
    );
  }

  Widget _botonContinuarPausear() {
    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 16.0),
      child: Container(
        width: 150,
        height: 40,
        child: ElevatedButton(
            onPressed: () {
              if (_ytCntrller.value.isPlaying) {
                _ytCntrller.pause();
              } else {
                _ytCntrller.play();
              }
            },
            child: Text(
              _ytCntrller.value.isPlaying ? 'Pausar' : 'Reproducir',
              textAlign: TextAlign.center,
            )),
      ),
    );
  }
}

class TextoMinuto {
  String tituloAppBar;
  List<String> botones;
  List<String> texto;
  List<int> minuto;

  TextoMinuto(
      {required this.tituloAppBar,
      required this.botones,
      required this.texto,
      required this.minuto});
}

//Padding(
//  padding: const EdgeInsets.symmetric(horizontal: 16.0).copyWith(bottom: 8),
//  child: FadeIn(
//    duration: Duration(seconds: 2),
//    child: Text(
//            _youtubeController.value.position.inSeconds < textoMinuto.minuto[0]
//      ? 'Contenido apartir del minuto 0:00 hasta el segundo ${textoMinuto.minuto[0]}'
//          : _youtubeController.value.position.inSeconds < textoMinuto.minuto[1]
//      ? textoMinuto.texto[0]
//          : _youtubeController.value.position.inSeconds < textoMinuto.minuto[2]
//      ? textoMinuto.texto[1] : textoMinuto.texto[2]
//
//
//
//
//      ,textAlign: TextAlign.center,
//    ),
//  ),
//
//),

class _ListViewUsuarios extends StatelessWidget {
  final List<dynamic> usuarios;
  const _ListViewUsuarios({required this.usuarios});

  @override
  Widget build(BuildContext context) {
    return Expanded(
      child: Container(
        height: 100,
        child: ListView.builder(
          scrollDirection: Axis.horizontal,
          physics: ScrollPhysics(), //*
          shrinkWrap: true, //*
          itemCount: usuarios.length,
          itemBuilder: (BuildContext context, int index) {
            return Padding(
              padding: const EdgeInsets.symmetric(horizontal: 32.0),
              child: Card(
                elevation: 8,
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceAround,
                  children: [
                    //Image.network(usuarios[index]['avatar']),
                    Container(
                      color: Colors.red,
                      child: Column(
                        mainAxisAlignment: MainAxisAlignment.center,
                        mainAxisSize: MainAxisSize.max,
                        crossAxisAlignment: CrossAxisAlignment.center,
                        children: [
                          Text(usuarios[0]['botones'][0]['nombre']),
                          Text(usuarios[0]['tituloAppBar']),
                        ],
                      ),
                    )
                  ],
                ),
              ),
            );
          },
        ),
      ),
    );
  }
}
