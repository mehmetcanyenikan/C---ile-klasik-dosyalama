#ifndef KOSATIS_H
#define KOSATIS_H

#include <QObject>
#include <QDate>
#include <memory>
#include <QString>

#include <QTime>
#include "verikatmani_global.h"
using namespace std;
class VERIKATMANI_EXPORT KOSatis : public QObject
{
    Q_OBJECT
public:
    typedef shared_ptr<KOSatis> Ptr;
    explicit KOSatis(QObject *parent = nullptr);

    QDate tarih() const;
    QTime saat() const;
    QString satisYapan() const;


signals:

    void TarihDegisti(const QDate &tarih);
    void SaatDegisti(const QTime &saat);
    void SatisYapanDegisti(const QString &satisYapan);

public slots:

    void setTarih(const QDate &tarih);
    void setSaat(const QTime &saat);
    void setSatisYapan(const QString &satisYapan);

private:

    QDate _tarih;
    QTime _saat;
    QString _satisYapan;
};
#endif // KOSATIS_H
