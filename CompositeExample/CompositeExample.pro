QT += core
QT -= gui

CONFIG += c++11

TARGET = CompositeExample
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    graphicscomponent.cpp \
    graphicstext.cpp \
    graphicsrectangle.cpp \
    graphicscomposite.cpp

HEADERS += \
    graphicscomponent.h \
    graphicstext.h \
    graphicsrectangle.h \
    graphicscomposite.h
