#ifndef URUNVERIERISIM_H
#define URUNVERIERISIM_H

#include <QObject>
#include <QVector>
#include<functional>

using namespace std;

#include "VeriSiniflari/kourun.h"
#include "verikatmani_global.h"
class VERIKATMANI_EXPORT UrunVeriErisimi : public QObject
{
    Q_OBJECT
public:
    typedef KOUrun VeriSinifi;
    typedef VeriSinifi::Ptr VeriPointer;
    typedef QVector<VeriPointer> Depolama;
    typedef QVector<VeriPointer> AramaSonucu;
    explicit UrunVeriErisimi (QObject *parent = nullptr);

    VeriPointer yeni();
    void ekle(VeriPointer veri);

    AramaSonucu isimeGoreAra(QString kullaniciAdi);

    typedef function<bool(VeriPointer)> FiltreFonksiyonu;

    AramaSonucu ara(FiltreFonksiyonu f);

    bool urunSil(QString silinecekId);

    void tumunuSil();

    void geriDonusumuBosalt();

    AramaSonucu geriDonusumKutusu();

    bool kurtar(QString reyonId);

signals:
    void urunEklendi(VeriPointer urun);
    void urunSilindi(VeriPointer urun);
    void urunKurtarildi(VeriPointer urun);
    void urunGeriDonusumeGitti(VeriPointer urun);
public slots:
    // void UrunleriGeriDonustur(KOUrun::Ptr reyon);
  //   void UrunleriKurtar(KOUrun::Ptr reyon);
    // void UrunSilindi(KOUrun::Ptr reyon);


private:

    Depolama _depo;
    Depolama _geriDonusum;

};
#endif // URUNVERIERISIM_H
