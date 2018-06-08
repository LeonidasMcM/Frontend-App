#include<Player.h>
#include<QDebug>
#include<QKeyEvent>
#include<bullet.h>
#include<QGraphicsScene>
#include<enemy.h>
#include<QTimer>



Player::Player()
{
    connect(timerleft,SIGNAL(timeout()),this,SLOT(moveleft()));
    connect(timerright,SIGNAL(timeout()),this,SLOT(moveright()));
    connect(timerup,SIGNAL(timeout()),this,SLOT(moveup()));
    connect(timerdown,SIGNAL(timeout()),this,SLOT(movedown()));
    connect(timerspace,SIGNAL(timeout()),this,SLOT(shoot()));
}

Player::~Player()
{
    delete timerleft;
    delete timerdown;
    delete timerright;
    delete timerup;
    delete timerspace;
}

void Player::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<event->isAutoRepeat();
    if(event->key()==Qt::Key_Left){


        timerleft->setTimerType(Qt::PreciseTimer);
        timerleft->start(50);
        if(!(timerleft->isActive()))
            timerleft->start(50);
    }
    if(event->key()==Qt::Key_Right){
        timerright->setTimerType(Qt::PreciseTimer);
        timerright->start(50);
        if(!(timerright->isActive()))
            timerright->start(50);
    }
    if(event->key()==Qt::Key_Up){
        timerup->setTimerType(Qt::PreciseTimer);
        timerup->start(50);
        if(!(timerup->isActive()))
            timerup->start(50);
    }
    if(event->key()==Qt::Key_Down){
        timerdown->setTimerType(Qt::PreciseTimer);
        timerdown->start(50);
        if(!(timerdown->isActive()))
            timerdown->start(50);
    }

    if(event->key()==Qt::Key_Space){
        timerspace->setTimerType(Qt::PreciseTimer);
        timerspace->start(50);
        if(!(timerspace->isActive()))
            timerspace->start(50);
    }



}

void Player::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left){
        timerleft->stop();
    }
    if(event->key()==Qt::Key_Left){
        timerright->stop();
    }
    if(event->key()==Qt::Key_Left){
        timerup->stop();
    }
    if(event->key()==Qt::Key_Left){
        timerdown->stop();
    }
    if(event->key()==Qt::Key_Left){
        timerspace->stop();
    }
}


void Player::spawn()
{
    Enemy* killer=new Enemy();
    scene()->addItem(killer);
}

void Player::moveleft()
{
    if(pos().x()> 10)
        setPos(x()-10,y());
}

void Player::moveright()
{
    if(pos().x()+10<550)
    setPos(x()+10,y());
}

void Player::movedown()
{
    if(pos().y()< 1140)
    setPos(x(),y()+10);
}

void Player::moveup()
{
    if(pos().y()>10)
    setPos(x(),y()-10);
}

void Player::shoot()
{
    QMediaPlayer* bulletsound= new QMediaPlayer();
    bulletsound->setMedia(QUrl("qrc:/sounds/laser.wav"));

    Bullet*bullet=new Bullet();
    bullet->setPos(x()+45,y()-30);
    scene()->addItem(bullet);

    if (bulletsound->state()==QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else
        bulletsound->play();
}
