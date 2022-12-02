#ifndef MINESWEEPER_GAME_H
#define MINESWEEPER_GAME_H


#include <QObject>
#include <QGridLayout>
#include "Cell.h"

class Game : public QWidget {
Q_OBJECT
public:
    explicit Game(QWidget *parent = nullptr);
private:
    //Game(size_t h, size_t w);
    //~Game();

    size_t _height = 16;
    size_t _width = 16;

    QGridLayout _fleid;
};


#endif //MINESWEEPER_GAME_H
