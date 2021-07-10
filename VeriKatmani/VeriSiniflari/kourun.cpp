#include "kourun.h"

KOUrun::KOUrun(QObject *parent) : QObject(parent)
{

}

QString KOUrun::adi() const
{
    return _adi;
}

void KOUrun::setAdi(const QString &adi)
{
    if(_adi != adi){
       _adi=adi;
       AdiDegisti(_adi);

    }
}

QString KOUrun::emtia() const
{
    return _emtia;
}

void KOUrun::setEmtia(const QString &emtia)
{
    if(_emtia != emtia){
        _emtia=emtia;
        EmtiaDegisti(_emtia);
    }
}

float KOUrun::vergi() const
{
    return _vergi;
}

void KOUrun::setVergi(float vergi)
{
    if(_vergi != vergi){
        _vergi=vergi;
        VergiDegisti(_vergi);
    }
}
