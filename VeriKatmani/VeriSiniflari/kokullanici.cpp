#include "kokullanici.h"

KOKullanici::KOKullanici(QObject *parent) : QObject(parent)
{

}

QString KOKullanici::adi() const
{
    return _adi;
}

void KOKullanici::setAdi(const QString &adi)
{
    if(_adi != adi){
        _adi=adi;
        AdiDegisti(_adi);

    }
}

QString KOKullanici::soyadi() const
{
    return _soyadi;
}

void KOKullanici::setSoyadi(const QString &soyadi)
{
    if(_soyadi != soyadi){
        _soyadi=soyadi;
        SoyadiDegisti(_soyadi);

    }
}

QString KOKullanici::kullaniciAdi() const
{
    return _kullaniciAdi;
}

void KOKullanici::setKullaniciAdi(const QString &kullaniciAdi)
{
    if(_kullaniciAdi != kullaniciAdi){
        _kullaniciAdi= kullaniciAdi;
        KullaniciAdiDegisti(_kullaniciAdi);
    }
}

QString KOKullanici::sifre() const
{
    return _sifre;
}

void KOKullanici::setSifre(const QString &sifre)
{
    if(_sifre != sifre){
        _sifre=sifre;
        KullaniciAdiDegisti(_sifre);

    }
}

KOKullanici::YetkiTuru KOKullanici::yetki() const
{
    return _yetki;
}

void KOKullanici::setYetki(const YetkiTuru &yetki)
{
    if(_yetki != yetki){
        _yetki=yetki;
        YetkiDegisti(_yetki);
    }
}
