#-------------------------------------------------
#
# Project created by QtCreator 2014-11-15T00:28:32
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = nmea0183
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    NmeaCodecManager.cpp \
    GGANmeaCodec.cpp \
    util.cpp

HEADERS += \
    AbstractNmeaCodec.h \
    NmeaCodecManager.h \
    AbstractNmeaObject.h \
    GGANmeaObject.h \
    RMCNmeaObject.h \
    GGANmeaCodec.h \
    util.h
