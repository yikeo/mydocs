#include "mainwindow.hpp"
#include <QApplication>
#include <QStyleFactory>
#include <QStyle>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QApplication::setStyle(QStyleFactory::create("Fusion"));
    QApplication::setPalette(QApplication::style()->standardPalette());

    MainWindow w;
    w.show();

    return a.exec();
}
