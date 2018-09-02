#include "mainwindow.h"
#include <QApplication>

#include "strategy_core.h"

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Strategy_core core;
    qDebug() << "core version:" << core.getVersion();

    return a.exec();
}
