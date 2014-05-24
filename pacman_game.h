#ifndef _PACMAN_GAME_H_
#define _PACMAN_GAME_H_

#include <QMainWindow>

class PacmanGame : public QMainWindow {
    public:
        PacmanGame(){
            QMainWindow::show();
        }

    private:
        // inherited from qwidget, make it private, and call the
        // the parent function.
        void show();
};

#endif
