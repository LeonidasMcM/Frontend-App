#ifndef Player_H
#define Player_H

#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
#include<QMediaPlayer>
#include<QKeyEvent>
#include<QTimer>

class Player: public QObject,public QGraphicsPixmapItem{
Q_OBJECT
public:
Player();
~Player();
    void keyPressEvent(QKeyEvent*event);
    void keyReleaseEvent(QKeyEvent *event);
public slots:
    void spawn();
    void moveleft();
    void moveright();
    void movedown();
    void moveup();
    void shoot();
private:
    QTimer*timerleft=new QTimer();
    QTimer*timerright=new QTimer();
    QTimer*timerup=new QTimer();
    QTimer*timerdown=new QTimer();
    QTimer*timerspace=new QTimer();


};




#endif // Player_H
