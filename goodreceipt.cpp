#include "goodreceipt.h"

goodreceipt::goodreceipt() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_goodreceipt");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}
goodreceipt::goodreceipt(QString nogr ,QString tglmasuk,QString tglposting, QString jumlahorder,QString tglgr,QString nopo,QString keterangan,QString jangkapengiriman)
{
    this->nogr= nogr;
    this->tglmasuk = tglmasuk;
    this->tglposting= tglposting;
    this->jumlahorder= jumlahorder;
    this->tglgr=tglgr;
    this->nopo= nopo;
    this->keterangan= keterangan;
    this->jangkapengiriman= jangkapengiriman;
}
void goodreceipt::setnogr(QString nogr)
{
    this-> nogr= nogr;
}

QString goodreceipt::getnogr()
{
    return this-> nogr;
}

void goodreceipt::settglmasuk(QString tglmasuk)
{
    this->tglmasuk = tglmasuk;
}

QString goodreceipt::gettglmasuk()
{
    return this-> tglmasuk;
}

void goodreceipt::settglposting(QString tglposting)
{
    this-> tglposting= tglposting;
}

QString goodreceipt::gettglposting()
{
    return this-> tglposting;
}

void goodreceipt::setjumlahorder(QString jumlahorder)
{
    this-> jumlahorder= jumlahorder;
}

QString goodreceipt::getjumlahorder()
{
    return this-> jumlahorder;
}

void goodreceipt::settglgr(QString tglgr)
{
    this-> tglgr= tglgr;
}

QString goodreceipt::gettglgr()
{
    return this-> tglgr;
}

void goodreceipt::setnopo(QString nopo)
{
    this->nopo = nopo;
}

QString goodreceipt::getnopo()
{
    return this-> nopo;
}

void goodreceipt::setketerangan(QString keterangan)
{
    this->keterangan = keterangan;
}

QString goodreceipt::getketerangan()
{
    return this-> keterangan;
}

void goodreceipt::setjangkapengiriman(QString jangkapengiriman)
{
    this-> jangkapengiriman= jangkapengiriman;
}

QString goodreceipt::getjangkapengiriman()
{
    return this-> jangkapengiriman;
}
