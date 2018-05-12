
#include<QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<rect.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene * scene=new QGraphicsScene();

    PlayerRect * rec=new PlayerRect;
    rec->setRect(0,0,50,50);

    scene->addItem(rec);

    rec->setFlag(QGraphicsItem::ItemIsFocusable);
    rec->setFocus();

    QGraphicsView* view= new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    return a.exec();
}
