#ifndef Player_H
#define Player_H

#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>
#include<QMediaPlayer>

class Player: public QObject,public QGraphicsPixmapItem{
Q_OBJECT
public:
    void keyPressEvent(QKeyEvent*event);
public slots:
    void spawn();
};




#endif // Player_H
