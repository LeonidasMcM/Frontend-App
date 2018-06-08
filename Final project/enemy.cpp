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


   setPixmap(QPixmap(":/images/enemy.png").scaled(100, 100, Qt::IgnoreAspectRatio, Qt::FastTransformation));


   QTimer*timer=new QTimer();
   connect(timer,SIGNAL(timeout()),this,SLOT(move()));

   timer->start(50);
}

void Enemy::move()
{
    setPos(x(),y()+7);

    QList<QGraphicsItem*> colliding_items=collidingItems();
    for(int i = 0,n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Player)){

            scene()->removeItem(this);

            // increases score with direct hits
            game->health1->decrease();

            delete this;
            return;
        }
    }

    if(pos().y() > 1200){

        game->health1->decrease();

        scene()->removeItem(this);
        delete this;
    }
};
