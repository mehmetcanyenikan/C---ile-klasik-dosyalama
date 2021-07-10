QT -= gui

TEMPLATE = lib
DEFINES += VERIKATMANI_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    VeriErisim/kullaniciverierisim.cpp \
    VeriErisim/urunverierisim.cpp \
    VeriSiniflari/kokullanici.cpp \
    VeriSiniflari/kosatis.cpp \
    VeriSiniflari/kosatisdetayi.cpp \
    VeriSiniflari/kourun.cpp \
    kovt.cpp \
    verikatmani.cpp

HEADERS += \
    VeriErisim/kullaniciverierisim.h \
    VeriErisim/urunverierisim.h \
    VeriSiniflari/kokullanici.h \
    VeriSiniflari/kosatis.h \
    VeriSiniflari/kosatisdetayi.h \
    VeriSiniflari/kourun.h \
    kovt.h \
    verikatmani.h \
    verikatmani_global.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
