#ifndef KOURUN_H
#define KOURUN_H

#include <QObject>
#include <QString>

#include <memory>

#include "verikatmani_global.h"
using namespace std;

class VERIKATMANI_EXPORT KOUrun : public QObject
{
    Q_OBJECT
public:
    typedef shared_ptr<KOUrun> Ptr;
    explicit KOUrun(QObject *parent = nullptr);

    QString adi() const;
    QString emtia() const;
    float vergi() const;


signals:

    void AdiDegisti(const QString &adi);
    void EmtiaDegisti(const QString &emtia);
    void VergiDegisti(float vergi);


public slots:

    void setAdi(const QString &adi);
    void setEmtia(const QString &emtia);
    void setVergi(float vergi);

private:
    QString _adi;
    QString _emtia;
    float _vergi;


};

#endif // KOURUN_H
