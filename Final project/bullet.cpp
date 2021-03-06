#include<bullet.h>
#include<QTimer>
#include<enemy.h>
#include<QList>
#include<game.h>
#include<QGraphicsScene>

extern Game* game;

Bullet::Bullet()
{
   //setRect(20,-50,10,50);

   setPixmap(QPixmap(":/images/laser.png").scaled(10, 30, Qt::IgnoreAspectRatio, Qt::FastTransformation));

   QTimer*timer=new QTimer();
   connect(timer,SIGNAL(timeout()),this,SLOT(move()));

   timer->start(50);
}

void Bullet::move()
{
    QList<QGraphicsItem*> colliding_items=collidingItems();
    for(int i = 0,n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Enemy)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);

            // increases score with direct hits
            game->score1->increase();

            delete this;
            delete colliding_items[i];
            return;
        }
    }





    setPos(x(),y()-50);

    if(pos().y() < -1200){
        scene()->removeItem(this);
        delete this;
    }
};


