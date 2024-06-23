#include "transaksipenawaran.h"

transaksipenawaran::transaksipenawaran() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_transaksi");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}
transaksipenawaran::transaksipenawaran(QString nopenawaran ,QString idbarang,QString idklien,QString tglpenawaran)
{
    this->nopenawaran= nopenawaran;
    this->idbarang = idbarang;
    this->idklien = idklien;
    this->tglpenawaran = tglpenawaran;
}
void transaksipenawaran::setnopenawaran(QString nopenawaran)
{
    this->nopenawaran = nopenawaran;
}

QString transaksipenawaran::getnopenawaran()
{
    return this->nopenawaran;
}
void transaksipenawaran::setidbarang(QString idbarang)
{
    this->idbarang= idbarang;
}

QString transaksipenawaran::getidbarang()
{
    return this->idbarang;
}
void transaksipenawaran::setidklien(QString idklien)
{
    this->idklien = idklien;
}

QString transaksipenawaran::getidklien()
{
    return this->idklien;
}
void transaksipenawaran::settgllpenawaran(QString tglpenawaran)
{
    this->tglpenawaran = tglpenawaran;
}

QString transaksipenawaran::gettgllpenawaran()
{
    return this->tglpenawaran;
}

