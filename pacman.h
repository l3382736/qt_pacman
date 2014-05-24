#ifndef PACMAN_H_
#define PACMAN_H_

#include <QtCore>

class Pacman : public QThread
{
    public:
        Pacman();
        void run();
    
};
#endif
