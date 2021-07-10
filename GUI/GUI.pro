QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Kullanici/kgkullanicibilgileriwidget.cpp \
    Kullanici/kgkullanicieklemeformu.cpp \
    kgkullanicigirisi.cpp \
    main.cpp \
    kuyumcuotomasyonuanapencere.cpp

HEADERS += \
    Kullanici/kgkullanicibilgileriwidget.h \
    Kullanici/kgkullanicieklemeformu.h \
    kgkullanicigirisi.h \
    kuyumcuotomasyonuanapencere.h

FORMS += \
    Kullanici/kgkullanicibilgileriwidget.ui \
    Kullanici/kgkullanicieklemeformu.ui \
    kgkullanicigirisi.ui \
    kuyumcuotomasyonuanapencere.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resimler.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../VeriKatmani/release/ -lVeriKatmani
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../VeriKatmani/debug/ -lVeriKatmani
else:unix: LIBS += -L$$OUT_PWD/../VeriKatmani/ -lVeriKatmani

INCLUDEPATH += $$PWD/../VeriKatmani
DEPENDPATH += $$PWD/../VeriKatmani
