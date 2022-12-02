#ifndef MINESWEEPER_CELL_H
#define MINESWEEPER_CELL_H


#include <QPushButton>

enum class CellStatus { opened, marked, closed, exploded };

class Cell : public QPushButton {
Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event) final;
    void mouseReleaseEvent (QMouseEvent *event);
public:
    explicit Cell(QWidget *parent = nullptr);
    CellStatus status = CellStatus::closed;
private:
    static bool isFirst;
    size_t _row;
    size_t _column;
    int koef = 10;
};


#endif //MINESWEEPER_CELL_H
