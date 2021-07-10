#include "kullaniciverierisim.h"

KullaniciVeriErisim::KullaniciVeriErisim(QObject *parent) : QObject(parent)
{

}
KullaniciVeriErisim::VeriPointer KullaniciVeriErisim::yeni() {
    return make_shared<VeriSinifi>();
}

void KullaniciVeriErisim::ekle(KullaniciVeriErisim::VeriPointer veri)
{
   for(auto reyon : _depo){
       if(reyon->kullaniciAdi()== veri->kullaniciAdi()){
           throw tr("Aynı ada sahip urun var");
       }
   }
   _depo.append(veri);
   kullaniciEklendi(veri);
}

KullaniciVeriErisim::AramaSonucu KullaniciVeriErisim::idyeGoreAra(QString kullaniciAdi)
{
    return ara([kullaniciAdi](VeriPointer v){
       return v->kullaniciAdi()==kullaniciAdi;
    });
}

KullaniciVeriErisim::AramaSonucu KullaniciVeriErisim::ara(KullaniciVeriErisim::FiltreFonksiyonu f)
{
    AramaSonucu sonuc;
    for (auto reyon : _depo) {
      if (f(reyon)) {
        sonuc.append(reyon);
      }
    }
    return sonuc;
}
