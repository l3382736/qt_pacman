#include <QApplication>
#include "pacman.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    Pacman pacman;
    pacman.start();

    return app.exec();
}


