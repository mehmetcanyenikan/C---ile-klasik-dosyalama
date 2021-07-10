#include "kgkullanicieklemeformu.h"
#include "ui_kgkullanicieklemeformu.h"
#include <kovt.h>

#include <QMessageBox>
KGKullaniciEklemeFormu::KGKullaniciEklemeFormu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KGKullaniciEklemeFormu)
{
    ui->setupUi(this);

    auto yeniKullanici =KOVT::nesne().kullaniciVE().yeni();
    //veri ile ilgili herşeyde üstekini ekle

        ui->widget->setVeri(yeniKullanici);
}

KGKullaniciEklemeFormu::~KGKullaniciEklemeFormu()
{
    delete ui;
}

void KGKullaniciEklemeFormu::on_pbKaydet_clicked()
{
    auto kullanici=ui->widget->veri();

    try {
        //Hata meydana gelmesi olası kodlar
        KOVT::nesne().kullaniciVE().ekle(kullanici);
    }  catch (QString hata) {

        QMessageBox mesaj(QMessageBox::Critical,tr("HATA"),hata,
                          QMessageBox::Ok);

        mesaj.setButtonText(QMessageBox::Ok,tr("Tamam"));
        mesaj.exec();
      return;

    }




    QMessageBox mesaj(QMessageBox::Question,tr("KAYIT"),tr("Kayıt Tamamlandı, Yeni Kullanıcı Eklemek ister misiniz?"),
                      QMessageBox::Yes|QMessageBox::No);

    mesaj.setButtonText(QMessageBox::Yes,tr("Evet"));
    mesaj.setButtonText(QMessageBox::No,tr("Hayır"));

    if(mesaj.exec()==QMessageBox::Yes){
        auto kullanici=ui->widget->veri();
        KOVT::nesne().kullaniciVE().ekle(kullanici);
    }else{
        close();
    }


}
// shft f4 ile geçiş
