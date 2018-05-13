
#include<QApplication>
#include<game.h>


#include<QGraphicsScene>
#include<QGraphicsView>
#include<Player.h>
#include<QTimer>

Game* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

game=new Game();
game->show();


    return a.exec();
}
