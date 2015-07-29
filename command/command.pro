TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    command.cpp \
    light.cpp \
    lightoncommand.cpp \
    simplecontrol.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    command.h \
    light.h \
    lightoncommand.h \
    simplecontrol.h

