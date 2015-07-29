TEMPLATE = app
CONFIG += console  c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    beverage.cpp \
    condimentdecorator.cpp \
    mocha.cpp \
    main.cpp \
    espresso.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    beverage.h \
    condimentdecorator.h \
    mocha.h \
    espresso.h

