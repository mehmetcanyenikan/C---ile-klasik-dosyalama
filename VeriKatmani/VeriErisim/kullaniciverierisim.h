#ifndef KULLANICIVERIERISIM_H
#define KULLANICIVERIERISIM_H

#include <QObject>
#include <QString>
#include <QVector>

#include <functional>
#include "VeriSiniflari/kokullanici.h"
using namespace std;

class VERIKATMANI_EXPORT KullaniciVeriErisim : public QObject
{
    Q_OBJECT
public:
    typedef KOKullanici VeriSinifi;
    typedef VeriSinifi::Ptr VeriPointer;
    typedef QVector<VeriPointer> Depolama;
    typedef QVector<VeriPointer> AramaSonucu;
    explicit KullaniciVeriErisim (QObject *parent = nullptr);

    VeriPointer yeni();
    void ekle(VeriPointer veri);

    AramaSonucu idyeGoreAra(QString kullaniciAdi);

    typedef function<bool(VeriPointer)> FiltreFonksiyonu;

    AramaSonucu ara(FiltreFonksiyonu f);

    bool kullaniciSil(int silinecekId);

    void geriDonusumuBosalt();

    AramaSonucu geriDonusumKutusu();

    bool kurtar(QString kullaniciAdi);

    int veriSayisi(){
        return _depo.size();
    }

signals:
    void kullaniciEklendi(VeriPointer kullanici);
    void kullaniciSilindi(VeriPointer kullanici);
    void kullaniciKurtarildi(VeriPointer kullanici);

public:

private:

    Depolama _depo;
    Depolama _geriDonusum;


};

#endif // KULLANICIVERIERISIM_H
