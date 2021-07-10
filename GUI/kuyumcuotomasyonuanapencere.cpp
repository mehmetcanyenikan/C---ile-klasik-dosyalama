#include "kuyumcuotomasyonuanapencere.h"
#include "ui_kuyumcuotomasyonuanapencere.h"
#include <Kullanici/kgkullanicieklemeformu.h>
KuyumcuOtomasyonuAnaPencere::KuyumcuOtomasyonuAnaPencere(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::KuyumcuOtomasyonuAnaPencere)
{
    ui->setupUi(this);
}

KuyumcuOtomasyonuAnaPencere::~KuyumcuOtomasyonuAnaPencere()
{
    delete ui;
}


void KuyumcuOtomasyonuAnaPencere::on_actYeniKullaniciEkle_triggered()
{
    KGKullaniciEklemeFormu nesne;
    nesne.exec();//exec burada durduruyor programı dialoga devrediyor dialog kapanana kadar devam

            //dialog olduğu için show kullanma
            //dialogsa exec
    //show da pointer koymalısın

}
