//
// Created by MadMax on 22.11.2022.
//

#include "Cell.h"

Cell::Cell(QWidget *parent) : QPushButton(parent) {
    isFirst = true;
    setMinimumSize(20, 20);

};

void Cell::mouseReleaseEvent(QMouseEvent *event) {

}