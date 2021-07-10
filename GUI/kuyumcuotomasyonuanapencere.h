#ifndef KUYUMCUOTOMASYONUANAPENCERE_H
#define KUYUMCUOTOMASYONUANAPENCERE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class KuyumcuOtomasyonuAnaPencere; }
QT_END_NAMESPACE

class KuyumcuOtomasyonuAnaPencere : public QMainWindow
{
    Q_OBJECT

public:
    KuyumcuOtomasyonuAnaPencere(QWidget *parent = nullptr);
    ~KuyumcuOtomasyonuAnaPencere();

private slots:
    void on_actYeniKullaniciEkle_triggered();

private:
    Ui::KuyumcuOtomasyonuAnaPencere *ui;
};
#endif // KUYUMCUOTOMASYONUANAPENCERE_H
