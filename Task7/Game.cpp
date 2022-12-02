#include "Game.h"


Game::Game(QWidget *parent) : QWidget(parent) {
    auto _fleid = new QGridLayout();
    _fleid->cellRect(_height, _width);
    for (auto i = 0; i < _height; i++) {
        for (auto j = 0; j < _width; j++) {
            Cell cell(_fleid->widget());
            _fleid->addWidget(&cell, i, j);
        }
    }

}