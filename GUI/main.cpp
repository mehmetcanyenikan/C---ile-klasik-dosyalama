#include "kgkullanicigirisi.h"

#include <QApplication>
#include "kovt.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if(KOVT::nesne().kullaniciVE().veriSayisi()==0){
        auto kullanici = KOVT:: nesne().kullaniciVE().yeni();
        kullanici->setAdi(QObject::tr("yönetici"));
        kullanici->setSoyadi(QObject::tr("Yönetici"));
        kullanici->setKullaniciAdi(QObject::tr("yonetici"));
        kullanici->setSifre("yonetici");
        kullanici->setYetki(KOKullanici::YTYonetici);

        KOVT::nesne().kullaniciVE().ekle(kullanici);



    }

    KGKullaniciGirisi w;
    w.show();
    return a.exec();
}
