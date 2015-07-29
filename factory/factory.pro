TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pizza.cpp \
    nystylecheesepizza.cpp \
    pizzastore.cpp \
    nypizzastore.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    pizza.h \
    nystylecheesepizza.h \
    pizzastore.h \
    nypizzastore.h

