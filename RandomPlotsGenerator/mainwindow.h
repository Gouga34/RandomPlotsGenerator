#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QSpinBox>

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
    QSpinBox m_nbPlotsToGenerate;
    QSpinBox m_plotsSize;


    virtual void initializeWindow();
    virtual void initializeLabel();
    virtual void initializeNbPlotsToGenerateSpinBox();
    virtual void initialisePlotsSize();

public slots:
    virtual void generateRandomPlots();
};

#endif // MAINWINDOW_H
