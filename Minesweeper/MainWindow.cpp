#include "MainWindow.h"
#include "Game.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
{
    setCentralWidget(new QWidget(this));
    auto mainLayout = new QHBoxLayout(this);
    centralWidget()->setLayout(mainLayout);


    auto game = new Game(this);
    mainLayout->addWidget(game);
}

MainWindow::~MainWindow()
{
}