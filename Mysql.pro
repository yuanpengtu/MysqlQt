#-------------------------------------------------
#
# Project created by QtCreator 2018-12-30T14:20:53
#
#-------------------------------------------------

QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Mysql
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += D:\360zip\MYSQLINSTALL\mysql-5.7.23-winx64\include
LIBS += -LD:\360zip\MYSQLINSTALL\mysql-5.7.23-winx64\lib\ -llibmysql
SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    registerwin.cpp \
    confedit.cpp \
    editpass.cpp

HEADERS  += mainwindow.h \
    login.h \
    registerwin.h \
    common.h \
    confedit.h \
    editpass.h

FORMS    += mainwindow.ui \
    login.ui \
    registerwin.ui \
    confedit.ui \
    editpass.ui

RESOURCES += \
    resource.qrc \
    editpassword.qrc
