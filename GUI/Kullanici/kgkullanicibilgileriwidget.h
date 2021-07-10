#ifndef KGKULLANICIBILGILERIWIDGET_H
#define KGKULLANICIBILGILERIWIDGET_H

#include <QWidget>
#include<VeriSiniflari/kokullanici.h>
namespace Ui {
class KGKullaniciBilgileriWidget;
}

class KGKullaniciBilgileriWidget : public QWidget
{
    Q_OBJECT

public:
    explicit KGKullaniciBilgileriWidget(QWidget *parent = nullptr);
    ~KGKullaniciBilgileriWidget();

    KOKullanici::Ptr veri() const;
    void setVeri(const KOKullanici::Ptr &veri);

private:
    Ui::KGKullaniciBilgileriWidget *ui;


    KOKullanici::Ptr _veri;
    //pointer sebebi kopyalamanın önüne geçmek


};
//atayıcı ekrandaki bilgiler değişsin
//okuyucuda verileri güncellesin
#endif // KGKULLANICIBILGILERIWIDGET_H
