#ifndef KOSATISDETAYI_H
#define KOSATISDETAYI_H

#include <QObject>

#include <QString>
#include<memory>
#include "verikatmani_global.h"
using namespace std;
class VERIKATMANI_EXPORT KOSatisDetayi : public QObject
{
    Q_OBJECT
public:
     typedef shared_ptr<KOSatisDetayi> Ptr;
    explicit KOSatisDetayi(QObject *parent = nullptr);

    float vergi() const;
    float adet() const;
    float birimFiyat() const;


signals:

    void VergiDegisti(float vergi);
    void BirimFiyatDegisti(float birimFiyat);
    void AdetDegisti(float adet);

public slots:

    void setVergi(float vergi);
    void setBirimFiyat(float birimFiyat);
    void setAdet(float adet);

private:
    float _vergi;
    float _birimFiyat;
    float _adet;

};


#endif // KOSATISDETAYI_H
