#ifndef KOVT_H
#define KOVT_H

#include <QObject>
#include "verikatmani_global.h"
#include"VeriErisim/kullaniciverierisim.h"
#include "VeriErisim/urunverierisim.h"
#include "VeriSiniflari/kokullanici.h"
#include "VeriSiniflari/kosatis.h"
#include "VeriSiniflari/kosatisdetayi.h"
#include "VeriSiniflari/kourun.h"

class VERIKATMANI_EXPORT KOVT : public QObject
{
    Q_OBJECT
private:
    explicit KOVT(QObject *parent = nullptr);
public:

    static KOVT &nesne();
    UrunVeriErisimi &urunVE();
    KullaniciVeriErisim &kullaniciVE();
signals:
public slots:

private:
    KullaniciVeriErisim _kullaniciVE;
    UrunVeriErisimi _urunVE;
};
#endif // KOVT_H
