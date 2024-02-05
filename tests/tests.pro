TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle

QT += core gui widgets
DEFINES += GLM_ENABLE_EXPERIMENTAL

SOURCES += \
    ../core/mnode.cpp \
    ../core/exportfuncs.cpp \
    mnode_test.cpp

HEADERS += \
    ../core/mnode.h
    ../core/exportfuncs.h

LIBS += -lgtest -lgtest_main -pthread

INCLUDEPATH += ../
INCLUDEPATH += ../core
INCLUDEPATH += ../glm
