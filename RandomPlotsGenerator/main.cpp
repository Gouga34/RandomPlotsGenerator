#include "mainwindow.h"
#include "randomplotsgenerator.h"

#include <QApplication>

#include <iostream>

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    return a.exec();

    RandomPlotsGenerator randomPlotsGenerator;
    randomPlotsGenerator.generateAndWriteRandomPlots();

    std::cout << randomPlotsGenerator.toString().toStdString() << std::endl;
}
