TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    menuitem.cpp \
    pancakehousemenu.cpp \
    dinermenu.cpp \
    iterator.cpp \
    dinermenuiterator.cpp \
    waitress.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    menuitem.h \
    pancakehousemenu.h \
    dinermenu.h \
    iterator.h \
    dinermenuiterator.h \
    waitress.h

