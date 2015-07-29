TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    caffeinebeveragewithhook.cpp \
    coffeewithhook.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    caffeinebeveragewithhook.h \
    coffeewithhook.h

