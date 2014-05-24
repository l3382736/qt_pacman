#include <QApplication>
#include "pacman.h"
#include "pacman_game.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    /*Pacman pacman;
    pacman.start();*/
    PacmanGame game;
    return app.exec();
}


