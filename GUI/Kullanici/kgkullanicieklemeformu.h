#ifndef KGKULLANICIEKLEMEFORMU_H
#define KGKULLANICIEKLEMEFORMU_H

#include <QDialog>

namespace Ui {
class KGKullaniciEklemeFormu;
}

class KGKullaniciEklemeFormu : public QDialog
{
    Q_OBJECT

public:
    explicit KGKullaniciEklemeFormu(QWidget *parent = nullptr);
    ~KGKullaniciEklemeFormu();

private slots:
    void on_pbKaydet_clicked();

private:
    Ui::KGKullaniciEklemeFormu *ui;
};

#endif // KGKULLANICIEKLEMEFORMU_H
