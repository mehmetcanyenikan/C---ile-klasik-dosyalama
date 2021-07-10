#ifndef KGKULLANICIGIRISI_H
#define KGKULLANICIGIRISI_H
//f1 tuşu yardımcı olur
#include <QDialog>

namespace Ui {
class KGKullaniciGirisi;
}

class KGKullaniciGirisi : public QDialog
{
    Q_OBJECT

public:
    explicit KGKullaniciGirisi(QWidget *parent = nullptr);
    ~KGKullaniciGirisi();

public slots :
    void reject();
    //qt yazıyı eğiyorsa üst ata sınıftandır

private slots:
    void on_btnCikis_clicked();

    void on_btnGiris_clicked();

private:
    Ui::KGKullaniciGirisi *ui;

    int hataliGirisSayisi;




};

#endif // KGKULLANICIGIRISI_H
