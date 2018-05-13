


#include "game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "Enemy.h"

Game::Game(QWidget *parent){
    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(1,1,600,1200);

    // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
    // it can be used to visualize scenes)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000,1200);

    // create the player
    Player * player=new Player();
    player->setRect(0,0,50,50); // change the rect from 0x0 (default) to 100x100 pixels
   player->setPos(275,1140); // TODO generalize to always be in the middle bottom of screen
    // make the player focusable and set it to be the current focus
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // add the player to the scene
    scene->addItem(player);
    //
    // create the score/health
    //score = new Score();
    //scene->addItem(score);
    //health = new Health();
    //health->setPos(health->x(),health->y()+25);
    //scene->addItem(health);

    // spawn enemies
    QTimer * enemytimer = new QTimer();
    QObject::connect(enemytimer,SIGNAL(timeout()),player,SLOT(spawn()));
    enemytimer->start(2000);

    show();
}
