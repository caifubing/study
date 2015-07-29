TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    observer.cpp \
    subject.cpp \
    displayelement.cpp \
    weatherdata.cpp \
    curentconditionsdisplay.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    observer.h \
    subject.h \
    displayelement.h \
    weatherdata.h \
    curentconditionsdisplay.h

