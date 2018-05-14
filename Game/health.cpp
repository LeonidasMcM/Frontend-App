#include "health.h"


#include<QFont>


health::health(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    healthbar=3;

    setPlainText("Lifeforce: "+QString::number(healthbar));
    setDefaultTextColor((Qt::green));
    setFont(QFont("times",20));
}

void health::decrease(){
    healthbar--;
    setPlainText("Lifeforce: "+QString::number(healthbar));
}

int health::gethealth(){
    return healthbar;
}
