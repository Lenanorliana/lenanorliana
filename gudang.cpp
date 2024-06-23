#include "gudang.h"


gudang::gudang() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_gudang");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}
gudang::gudang(QString idgudang ,QString alamatgudang)
{
    this->idgudang= idgudang;
    this->alamatgudang = alamatgudang;
}
void gudang::setidgudang(QString idgudang)
{
    this->idgudang = idgudang;
}

QString gudang::getidgudang()
{
    return this->idgudang;
}

void gudang::setalamatgudang(QString alamatgudang)
{
    this->alamatgudang = alamatgudang;
}

QString gudang::getalamatgudang()
{
    return this->alamatgudang;
}

