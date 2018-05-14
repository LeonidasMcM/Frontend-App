#include<Player.h>
#include<QDebug>
#include<QKeyEvent>
#include<bullet.h>
#include<QGraphicsScene>
#include<enemy.h>

void Player::keyPressEvent(QKeyEvent *event)
{
    QMediaPlayer* bulletsound= new QMediaPlayer();
    bulletsound->setMedia(QUrl("qrc:/sounds/laser.wav"));

    //qDebug()<<"You pressed the key";
    if(event->key()==Qt::Key_Left){
        if(pos().x()> 10)
        setPos(x()-10,y());
    }
    if(event->key()==Qt::Key_Right){
        if(pos().x()+10<550)
        setPos(x()+10,y());
    }
    if(event->key()==Qt::Key_Up){
        if(pos().y()>10)
        setPos(x(),y()-10);
    }
    if(event->key()==Qt::Key_Down){
        if(pos().y()< 1140)
        setPos(x(),y()+10);
    }

    if(event->key()==Qt::Key_Space){
        Bullet*bullet=new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);

        if (bulletsound->state()==QMediaPlayer::PlayingState){
            bulletsound->setPosition(0);
        }
        else
            bulletsound->play();
    }

}

void Player::spawn()
{
    Enemy* killer=new Enemy();
    scene()->addItem(killer);
};
