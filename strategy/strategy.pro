TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    flybehavior.cpp \
    quackbehavior.cpp \
    duck.cpp \
    flywithwings.cpp \
    quack.cpp \
    mallardduck.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    flybehavior.h \
    quackbehavior.h \
    duck.h \
    flywithwings.h \
    quack.h \
    mallardduck.h

