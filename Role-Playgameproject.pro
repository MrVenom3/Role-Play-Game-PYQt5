QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bilgelik.cpp \
    bilgelik2.cpp \
    bilgelikson.cpp \
    bilgelikyanlis1.cpp \
    bilgelikyanlis2.cpp \
    cesaret1.cpp \
    cesaretkac1.cpp \
    cesaretkac2.cpp \
    cesaretsavas1.cpp \
    cesaretsavas2.cpp \
    gamewindow1.cpp \
    gamewindow2.cpp \
    main.cpp \
    mainwindow.cpp \
    vazgec.cpp

HEADERS += \
    bilgelik.h \
    bilgelik2.h \
    bilgelikson.h \
    bilgelikyanlis1.h \
    bilgelikyanlis2.h \
    cesaret1.h \
    cesaretkac1.h \
    cesaretkac2.h \
    cesaretsavas1.h \
    cesaretsavas2.h \
    gamewindow1.h \
    gamewindow2.h \
    mainwindow.h \
    vazgec.h

FORMS += \
    bilgelik.ui \
    bilgelik2.ui \
    bilgelikson.ui \
    bilgelikyanlis1.ui \
    bilgelikyanlis2.ui \
    cesaret1.ui \
    cesaretkac1.ui \
    cesaretkac2.ui \
    cesaretsavas1.ui \
    cesaretsavas2.ui \
    gamewindow1.ui \
    gamewindow2.ui \
    mainwindow.ui \
    vazgec.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
