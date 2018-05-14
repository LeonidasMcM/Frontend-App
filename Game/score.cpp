#include "score.h"
#include<QFont>


score::score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    totalscore=0;

    setPlainText("Kills: "+QString::number(totalscore));
    setDefaultTextColor((Qt::magenta));
    setFont(QFont("times",20));
}

void score::increase(){
    totalscore++;
    setPlainText("Kills: "+QString::number(totalscore));
}

int score::getscore(){
    return totalscore;
}
