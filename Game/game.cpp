


#include "game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "Enemy.h"
#include<QMediaPlayer>
#include<QBrush>
#include<QImage>

Game::Game(QWidget *parent){
    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(200,1,600,1200);

    setBackgroundBrush(QBrush(QImage(":/images/bg.jpg").scaled(1000, 1200, Qt::IgnoreAspectRatio, Qt::FastTransformation)));

    // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
    // it can be used to visualize scenes)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000,1200);

    // create the player
    Player * player=new Player();
    player->setPixmap(QPixmap(":/images/player.png").scaled(100, 100, Qt::IgnoreAspectRatio, Qt::FastTransformation)); // change the rect from 0x0 (default) to 100x100 pixels
   player->setPos(275,1100); // TODO generalize to always be in the middle bottom of screen
    // make the player focusable and set it to be the current focus
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // add the player to the scene
    scene->addItem(player);
    //
    // create the score/health
    score1 = new score();
    score1->setPos(x()+600,y());
    scene->addItem(score1);


    health1 = new health();
    health1->setPos(health1->x()+600,health1->y()+50);
    scene->addItem(health1);

    // spawn enemies
    QTimer * enemytimer = new QTimer();
    QObject::connect(enemytimer,SIGNAL(timeout()),player,SLOT(spawn()));
    enemytimer->start(1000);

    // play music
    QMediaPlayer* music= new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/bmg.mp3"));
    music->play();


    show();
}
