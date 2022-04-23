QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bullet.cpp \
    button.cpp \
    door.cpp \
    enemy.cpp \
    game.cpp \
    health.cpp \
    main.cpp \
    map.cpp \
    player.cpp \
    score.cpp \
    wall.cpp

HEADERS += \
    bullet.h \
    button.h \
    door.h \
    enemy.h \
    game.h \
    health.h \
    map.h \
    player.h \
    score.h \
    wall.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    myRes.qrc

DISTFILES += \
    myQML.qml
