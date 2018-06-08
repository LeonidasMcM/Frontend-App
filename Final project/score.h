#ifndef SCORE_H
#define SCORE_H

#include<QGraphicsTextItem>
#include<QGraphicsItem>

class score : public QGraphicsTextItem
{
public:
    score(QGraphicsItem* parent=0);
    int getscore();
    void increase();
private:
    int totalscore;
};

#endif // SCORE_H
