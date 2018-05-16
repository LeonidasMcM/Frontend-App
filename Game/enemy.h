#ifndef ENEMY_H
#define ENEMY_H


#include<QGraphicsPixmapItem>
#include<QGraphicsRectItem>
#include<QObject>
#include<QGraphicsScene>

class Enemy: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Enemy();
public slots:
    void move();
};

#endif // ENEMY_H
