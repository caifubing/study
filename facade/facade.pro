TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    light.cpp \
    facade.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    light.h \
    facade.h

