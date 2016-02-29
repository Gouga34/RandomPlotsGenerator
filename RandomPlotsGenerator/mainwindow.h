#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>

#include "randomplotsgenerator.h"


class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow();
    ~MainWindow();

private:
    RandomPlotsGenerator m_randomPlotsGenerator;
    QLabel *m_generatorState;

    virtual void initializeWindow();
    virtual void initializeLabel();

public slots:
    virtual void generateRandomPlots();
};

#endif // MAINWINDOW_H
