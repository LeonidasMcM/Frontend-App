#include<rect.h>
#include<QDebug>
#include<QKeyEvent>
#include<bullet.h>
#include<QGraphicsScene>

void PlayerRect::keyPressEvent(QKeyEvent *event)
{
    //qDebug()<<"You pressed the key";
    if(event->key()==Qt::Key_Left){
        setPos(x()-40,y());
    }
    if(event->key()==Qt::Key_Right){
        setPos(x()+40,y());
    }
    if(event->key()==Qt::Key_Up){
        setPos(x(),y()-50);
    }
    if(event->key()==Qt::Key_Down){
        setPos(x(),y()+50);
    }

    if(event->key()==Qt::Key_Space){
        Bullet*bullet=new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);

    }

};
