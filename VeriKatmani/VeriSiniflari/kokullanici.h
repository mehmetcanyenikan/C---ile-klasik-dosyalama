#ifndef KOKULLANICI_H
#define KOKULLANICI_H

#include <QObject>
#include <QString>

#include <memory>
using namespace std;
#include "verikatmani_global.h"

using namespace std;
class VERIKATMANI_EXPORT KOKullanici : public QObject
{
    Q_OBJECT
public:
    typedef shared_ptr<KOKullanici> Ptr;
    typedef enum{YTYonetici =1, YTKullanici =2} YetkiTuru;
    explicit KOKullanici(QObject *parent = nullptr);

    QString adi() const;
    QString soyadi() const;
    QString kullaniciAdi() const;
    QString sifre() const;
    YetkiTuru yetki() const;


signals:
    void AdiDegisti(const QString &adi);
    void SoyadiDegisti(const QString &soyadi);
    void KullaniciAdiDegisti(const QString &kullaniciAdi);
    void SifreDegisti(const QString &sifre);
    void YetkiDegisti(const YetkiTuru &yetki);


public slots:

    void setAdi(const QString &adi);
    void setSoyadi(const QString &soyadi);
    void setKullaniciAdi(const QString &kullaniciAdi);
    void setSifre(const QString &sifre);
    void setYetki(const YetkiTuru &yetki);


private:

    QString _adi;
    QString _soyadi;
    QString _kullaniciAdi;
    QString _sifre;
    YetkiTuru _yetki;

};

#endif // KOKULLANICI_H
