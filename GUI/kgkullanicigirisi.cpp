#include "kgkullanicigirisi.h"
#include "ui_kgkullanicigirisi.h"
#include <QMessageBox>
#include<kovt.h>
#include "kuyumcuotomasyonuanapencere.h"
KGKullaniciGirisi::KGKullaniciGirisi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KGKullaniciGirisi)
{
    ui->setupUi(this);

    hataliGirisSayisi=0;




 // connect(ui->btnCikis,&QPushButton::clicked,qApp,&QApplication::quit);
    //üstteki kod çıkış yaptırır
}

KGKullaniciGirisi::~KGKullaniciGirisi()
{
    delete ui;
}

void KGKullaniciGirisi::reject()
{
    QMessageBox mesaj(QMessageBox::Question,tr("UYARI"),tr("Çıkmak istediğinize emin misiniz?"),
                      QMessageBox::Yes|QMessageBox::No);

  //  qApp->quit();
    //information
  //  reject();
    mesaj.setButtonText(QMessageBox::Yes,tr("Evet"));
    mesaj.setButtonText(QMessageBox::No,tr("Hayır"));
    mesaj.setInformativeText(tr("Bu işlem yazılımı kapatacaktır."));
    if (mesaj.exec()==QMessageBox::Yes){
    QDialog::reject();
    }else{

    }
}

void KGKullaniciGirisi::on_btnCikis_clicked()
{
  //  QMessageBox mesaj(QMessageBox::Question,tr("UYARI"),tr("Çıkmak istediğinize emin misiniz?"),
    //                  QMessageBox::Yes|QMessageBox::No);

  //  qApp->quit();
    //information
    reject();
 //   mesaj.setButtonText(QMessageBox::Yes,tr("Evet"));
  //  mesaj.setButtonText(QMessageBox::No,tr("Hayır"));
  //  mesaj.setInformativeText(tr("Bu işlem yazılımı kapatacaktır."));
    //if (mesaj.exec()==QMessageBox::Yes){

     //    qApp->quit();
  //  }//else{

  //  }
}

void KGKullaniciGirisi::on_btnGiris_clicked()
{
    auto aramaSonucu = KOVT::nesne().kullaniciVE().idyeGoreAra(ui->leKullaniciAdi->text());
    hataliGirisSayisi++;
    if(aramaSonucu.size()==0 ){
        //kullanıcı bulunamadı

        QMessageBox mesaj(QMessageBox::Critical,tr("BULUNAMADI"),tr("Kullanıcı Adı Bulunamadı"),
                          QMessageBox::Ok);


        mesaj.setButtonText(QMessageBox::Ok,tr("Tamam"));
        mesaj.setInformativeText(tr("Tekrar Deneyin, %1 deneme kaldı...").arg(3-hataliGirisSayisi));

        mesaj.exec();

    }else if(aramaSonucu[0]->sifre()!=ui->leSifre->text()){

        //Şifre yanlış

        QMessageBox mesaj(QMessageBox::Critical,tr("Hata"),tr("Hatalı Şifre"),
                          QMessageBox::Ok);


        mesaj.setButtonText(QMessageBox::Ok,tr("Tamam"));
        mesaj.setInformativeText(tr("Tekrar Deneyin.."));

        mesaj.exec();


    }else {
    /*    //Doğru giriş
        QMessageBox mesaj(QMessageBox::Information,tr("BİLGİ"),tr("Giriş Tamam!"),
                          QMessageBox::Ok);


        mesaj.setButtonText(QMessageBox::Ok,tr("Tamam"));
        //mesaj.setInformativeText(tr("Tekrar Deneyin.."));

        mesaj.exec();*/

        KuyumcuOtomasyonuAnaPencere *pencere = new KuyumcuOtomasyonuAnaPencere;
        pencere->show();
        hide();
        //hide gizler kullanıcı girişini
    }

    if(hataliGirisSayisi>=3){

        //kullanıcı bulunamadı

        QMessageBox mesaj(QMessageBox::Critical,tr("KAPATILIYOR"),tr("Deneme Sayısı Aşıldı..."),
                          QMessageBox::Ok);


        mesaj.setButtonText(QMessageBox::Ok,tr("Tamam"));
        mesaj.setInformativeText(tr("Tekrar Deneyin.."));

        mesaj.exec();
        qApp->quit();

    }

}
