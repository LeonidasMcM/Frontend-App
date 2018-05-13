#include "enemy.h"

#include<QTimer>
#include<QList>
#include<stdlib.h>

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
    setPos(x(),y()+5);

    if(pos().y()+rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
};
