#-------------------------------------------------
#
# Project created by QtCreator 2017-09-24T11:08:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = appGpio
TEMPLATE = app


SOURCES += main.cpp\
        cappgpio.cpp \
    ../ditRasp/cgpio.cpp

HEADERS  += cappgpio.h \
    ../ditRasp/cgpio.h

FORMS    += cappgpio.ui
