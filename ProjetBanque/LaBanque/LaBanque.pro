TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CompteBancaire.cpp \
        CompteEpargne.cpp \
        main.cpp \
        menu.cpp

HEADERS += \
    CompteBancaire.h \
    CompteEpargne.h \
    menu.h
