TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt


SOURCES += \
    menucomponet.cpp \
    menuitem.cpp \
    menu.cpp \
    waitress.cpp \
    main.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    menucomponet.h \
    menuitem.h \
    menu.h \
    waitress.h

