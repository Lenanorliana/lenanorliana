#include "penawaran.h"

penawaran::penawaran() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_penawaran");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}
penawaran::penawaran(QString nopenawaran ,QString idbarang,QString status,QString harga)
{
    this->nopenawaran= nopenawaran;
    this->idbarang = idbarang;
    this->status = status;
    this->harga = harga;
}
void penawaran::setnopenawaran(QString nopenawaran)
{
    this->nopenawaran = nopenawaran;
}

QString penawaran::getnopenawaran()
{
    return this->nopenawaran;
}
void penawaran::setidbarang(QString idbarang)
{
    this->idbarang= idbarang;
}

QString penawaran::getidbarang()
{
    return this->idbarang;
}
void penawaran::setstatus(QString status)
{
    this->status = status;
}

QString penawaran::getstatus()
{
    return this->status;
}
void penawaran::setharga(QString harga)
{
    this->harga = harga;
}

QString penawaran::getharga()
{
    return this->harga;
}

