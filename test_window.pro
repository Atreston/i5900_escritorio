#-------------------------------------------------
#
# Project created by QtCreator 2017-05-04T21:08:23
#
#-------------------------------------------------

QT       += core gui
QT       += core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test_window
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clientes.cpp \
    consulta.cpp \
    empleados.cpp \
    disenador.cpp

HEADERS  += mainwindow.h \
    clientes.h \
    consulta.h \
    empleados.h \
    disenador.h

FORMS    += mainwindow.ui \
    clientes.ui \
    empleados.ui \
    disenador.ui
