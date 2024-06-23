#include "purchaseorder.h"

purchaseorder::purchaseorder() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_order");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}
purchaseorder::purchaseorder(QString nopo ,QString jangkapengiriman ,QString idklien, QString tglpo,QString statuspo, QString qty,QString harga, QString uom, QString idbarang,QString idgudang)
{
    this->nopo= nopo;
    this->jangkapengiriman = jangkapengiriman;
    this->idklien= idklien;
    this->tglpo = tglpo;
    this->statuspo =statuspo;
    this->qty =qty;
    this->harga = harga;
    this->uom =uom;
    this->idbarang =idbarang;
    this->idgudang = idgudang;
}
void purchaseorder::setnopo(QString nopo)
{
    this->nopo = nopo;
}
QString purchaseorder::getnopo()
{
    return this->nopo;
}
void purchaseorder::setjangkapengiriman(QString jangkapengiriman)
{
    this-> jangkapengiriman = jangkapengiriman;
}
QString purchaseorder::getjangkapengiriman()
{
    return this->jangkapengiriman;
}
void purchaseorder::setidklien(QString idklien)
{
    this-> idklien=idklien ;
}
QString purchaseorder::getidklien()
{
    return this->idklien;
}
void purchaseorder::settglpo(QString tglpo)
{
    this->tglpo = tglpo;
}
QString purchaseorder::gettglpo()
{
    return this->tglpo;
}
void purchaseorder::setstatuspo(QString statuspo)
{
    this-> statuspo= statuspo;
}
QString purchaseorder::getstatuspo()
{
    return this->statuspo;
}
void purchaseorder::setqty(QString qty)
{
    this->qty =qty ;
}
QString purchaseorder::getqty()
{
    return this->qty;
}
void purchaseorder::setuom(QString uom)
{
    this->uom =uom;
}
QString purchaseorder::getuom()
{
    return this->uom;
}
void purchaseorder::setidbarang(QString idbarang)
{
    this-> idbarang= idbarang;
}
QString purchaseorder::getidbarang()
{
    return this->idbarang;
}
void purchaseorder::setidgudang(QString idgudang)
{
    this->idgudang =idgudang;
}
QString purchaseorder::getidgudang()
{
    return this->idgudang;
}
void purchaseorder::setharga(QString harga)
{
    this->harga = harga;
}
QString purchaseorder::getharga()
{
    return this->harga;
}
