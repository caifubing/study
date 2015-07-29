TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    a.cpp \
    b.cpp \
    bproxy.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    a.h \
    b.h \
    bproxy.h

