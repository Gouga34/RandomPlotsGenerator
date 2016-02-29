#-------------------------------------------------
#
# Project created by QtCreator 2016-02-25T13:09:38
#
#-------------------------------------------------

QT       += core gui
QMAKE_CC = gcc-4.9
QMAKE_CXX = g++-4.9

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QMAKE_CXXFLAGS += -std=c++1y
CONFIG += c++14


TARGET = RandomPlotsGenerator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    point.cpp \
    plot.cpp \
    rectangle.cpp \
    randomplotsgenerator.cpp \
    filewriter.cpp

HEADERS  += mainwindow.h \
    point.h \
    plot.h \
    Constantes.h \
    rectangle.h \
    randomplotsgenerator.h \
    filewriter.h

FORMS    += mainwindow.ui

