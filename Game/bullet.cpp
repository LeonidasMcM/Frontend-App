#include<bullet.h>
#include<QTimer>
#include<enemy.h>
#include<QList>

Bullet::Bullet()
{
   setRect(20,-50,10,50);

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
            delete this;
            delete colliding_items[i];
            return;
        }
    }





    setPos(x(),y()-50);

    if(pos().y()+rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
};


