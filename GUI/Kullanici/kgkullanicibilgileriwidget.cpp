#include "kgkullanicibilgileriwidget.h"
#include "ui_kgkullanicibilgileriwidget.h"

KGKullaniciBilgileriWidget::KGKullaniciBilgileriWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KGKullaniciBilgileriWidget)
{
    ui->setupUi(this);
}

KGKullaniciBilgileriWidget::~KGKullaniciBilgileriWidget()
{
    delete ui;
}

KOKullanici::Ptr KGKullaniciBilgileriWidget::veri() const
{
    //görsel girdi değişmiş olabilir,veri geçersiz
    // veri güncellenir
    _veri->setAdi(ui->leAdi->text());
    _veri->setSifre(ui->leSifre->text());
    _veri->setSoyadi(ui->leSoyadi->text());
    _veri->setKullaniciAdi(ui->leKullaniciAdi->text());

    if(ui->cmbYetki->currentIndex()==1){
        _veri->setYetki(KOKullanici::YTKullanici);

    }else if(ui->cmbYetki->currentIndex()==2){
        _veri->setYetki(KOKullanici::YTYonetici);
    }

    return _veri;
}

void KGKullaniciBilgileriWidget::setVeri(const KOKullanici::Ptr &veri)
{



    _veri = veri;
    //saklanan veri değişti,görsel kısım geçersiz
    // görsel kısım güncellenir.

    ui->leAdi->setText(_veri->adi());
    ui->leSifre->setText(_veri->sifre());
    ui->leSoyadi->setText(_veri->soyadi());
    ui->leKullaniciAdi->setText(_veri->kullaniciAdi());


    if(_veri->yetki()==KOKullanici::YTKullanici){
        ui->cmbYetki->setCurrentIndex(1);
    }else{
        ui->cmbYetki->setCurrentIndex(2);
    }
}
