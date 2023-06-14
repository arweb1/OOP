#include "tictactoewindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    TicTacToeWindow w;
    QPixmap pixmap("C:/Users/38095/Desktop/Qt/My_game/unnamed.jpg");
    //QPixmap pixmap("C:/Users/38095/Desktop/loading.gif");
    QSplashScreen *photo = new QSplashScreen(pixmap);
    w.show();
    photo->show();
    QTimer::singleShot(5000, photo, SLOT(close()));
    QTimer::singleShot(5000, &w, SLOT(show()));

    return a.exec();
}
