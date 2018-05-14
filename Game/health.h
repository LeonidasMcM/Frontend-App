#ifndef HEALTH_H
#define HEALTH_H



#include<QGraphicsTextItem>
#include<QGraphicsItem>

class health : public QGraphicsTextItem
{
public:
    health(QGraphicsItem* parent=0);
    int gethealth();
    void decrease();
private:
    int healthbar;
};



#endif // HEALTH_H
