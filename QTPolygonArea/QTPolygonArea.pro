#-------------------------------------------------
#
# Project created by QtCreator 2016-10-17T21:26:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTPolygonArea
TEMPLATE = app


SOURCES += main.cpp\
        mainform.cpp \
    draw.cpp \
    algorithms.cpp

HEADERS  += mainform.h \
    draw.h \
    algorithms.h

FORMS    += mainform.ui
