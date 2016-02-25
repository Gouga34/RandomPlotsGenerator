#-------------------------------------------------
#
# Project created by QtCreator 2016-02-25T13:09:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

TARGET = RandomPlotsGenerator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    point.cpp \
    plot.cpp \
    polygon.cpp

HEADERS  += mainwindow.h \
    point.h \
    plot.h \
    Constantes.h \
    polygon.h

FORMS    += mainwindow.ui

