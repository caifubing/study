TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    gumballmachine.cpp \
    state.cpp \
    astate.cpp \
    bstate.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    gumballmachine.h \
    state.h \
    astate.h \
    bstate.h

