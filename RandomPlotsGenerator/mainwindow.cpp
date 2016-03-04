#include "mainwindow.h"

#include <QHBoxLayout>
#include <QPushButton>

MainWindow::MainWindow() : m_randomPlotsGenerator()
{
    initializeWindow();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initializeWindow() {
   QPushButton *button = new QPushButton("Generate random plots", this);
   button->resize(button->sizeHint().width(), button->sizeHint().height());
   connect(button, SIGNAL (clicked()), this, SLOT (generateRandomPlots()));

   initializeLabel();
   initializeNbPlotsToGenerateSpinBox();
   initialisePlotsSize();

   QHBoxLayout *layout = new QHBoxLayout;

   layout->addWidget(m_nbPlotsToGenerate);
   layout->addWidget(m_plotsSize);

   layout->addWidget(m_generatorState);
   layout->addWidget(button);

   setLayout(layout);
}

void MainWindow::generateRandomPlots() {
    m_randomPlotsGenerator.generateAndWriteRandomPlots(m_nbPlotsToGenerate->value(), m_plotsSize->value());
    m_generatorState->setText("Plots generated");
}

void MainWindow::initializeLabel() {
    m_generatorState = new QLabel(this);
    m_generatorState->setText("wait for plots generation");
}

void MainWindow::initializeNbPlotsToGenerateSpinBox() {
    m_nbPlotsToGenerate = new QSpinBox(this);
    m_nbPlotsToGenerate->setRange(0, 100'000);
    m_nbPlotsToGenerate->setValue(10'000);
}

void MainWindow::initialisePlotsSize() {
    m_plotsSize = new QSpinBox(this);
    m_plotsSize->setValue(10);
}


