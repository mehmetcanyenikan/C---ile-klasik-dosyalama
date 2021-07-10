#include "kosatis.h"
//#include  <QDate>
KOSatis::KOSatis(QObject *parent) : QObject(parent)
{

}

QDate KOSatis::tarih() const
{
    return _tarih;
}

void KOSatis::setTarih(const QDate &tarih)
{
    if(_tarih != tarih){
        _tarih=tarih;
        TarihDegisti(_tarih);


    }

}

QTime KOSatis::saat() const
{
    return _saat;
}

void KOSatis::setSaat(const QTime &saat)
{
    if(_saat != saat){
        _saat=saat;
        SaatDegisti(_saat);
    }
}

QString KOSatis::satisYapan() const
{
    return _satisYapan;
}

void KOSatis::setSatisYapan(const QString &satisYapan)
{
    if(_satisYapan != satisYapan){
        _satisYapan=satisYapan;
        SatisYapanDegisti(_satisYapan);
    }
}
