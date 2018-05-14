#include "enemy.h"
#include<QTimer>
#include<QList>
#include<stdlib.h>
#include<QGraphicsScene>
#include<game.h>


extern Game* game;

Enemy::Enemy()
{
    int random=rand()%550;
    setPos(random,0);


   setRect(0,0,50,50);

   QTimer*timer=new QTimer();
   connect(timer,SIGNAL(timeout()),this,SLOT(move()));

   timer->start(50);
}

void Enemy::move()
{
    setPos(x(),y()+7);

    if(pos().y() > 1200){

        game->health1->decrease();

        scene()->removeItem(this);
        delete this;
    }
};
