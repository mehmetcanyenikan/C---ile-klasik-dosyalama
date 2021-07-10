#include "kosatisdetayi.h"

KOSatisDetayi::KOSatisDetayi(QObject *parent) : QObject(parent)
{

}

float KOSatisDetayi::vergi() const
{
    return _vergi;
}

void KOSatisDetayi::setVergi(float vergi)
{
    if(_vergi != vergi){
        _vergi=vergi;
        VergiDegisti(_vergi);
    }
}

float KOSatisDetayi::adet() const
{
    return _adet;
}

void KOSatisDetayi::setAdet(float adet)
{
    if(_adet != adet){
        _adet=adet;
        AdetDegisti(_adet);
}




}

float KOSatisDetayi::birimFiyat() const
{
    return _birimFiyat;
}

void KOSatisDetayi::setBirimFiyat(float birimFiyat)
{
    if(_birimFiyat != birimFiyat){
        _birimFiyat=birimFiyat;
        BirimFiyatDegisti(_birimFiyat);
    }
}
