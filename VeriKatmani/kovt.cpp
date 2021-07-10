#include "kovt.h"

KOVT::KOVT(QObject *parent) : QObject(parent)
{

}

KOVT &KOVT::nesne()
{
    static KOVT nesne;
    return nesne;
}

UrunVeriErisimi &KOVT::urunVE()
{
    return _urunVE;
}

KullaniciVeriErisim &KOVT::kullaniciVE()
{
    return _kullaniciVE;
}


