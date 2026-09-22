TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        capteurhumidite.cpp \
        main.cpp \
        vanne.cpp \
        zonnearrosage.cpp

HEADERS += \
    capteurhumidite.h \
    vanne.h \
    zonnearrosage.h
