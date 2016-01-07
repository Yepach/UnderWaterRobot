#-------------------------------------------------
#
# Project created by QtCreator 2016-01-05T20:35:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UnderWaterRobot
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    controller.cpp

HEADERS  += mainwindow.h \
    controller.h

FORMS    += mainwindow.ui
CONFIG += console
