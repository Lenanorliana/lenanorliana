#include "klien.h"

klien::klien() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_klien");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}
klien::klien(QString idklien ,QString namaklien,QString alamat,QString telp)
{
    this->idklien= idklien;
    this->namaklien = namaklien;
    this->alamat = alamat;
    this->telp = telp;
}
void klien::setidklien(QString idklien)
{
    this->idklien = idklien;
}

QString klien::getidklien()
{
    return this->idklien;
}
void klien::setnamaklien(QString namaklien)
{
    this->namaklien= namaklien;
}

QString klien::getnamaklien()
{
    return this->namaklien;
}
void klien::setalamat(QString alamat)
{
    this->alamat = alamat;
}

QString klien::getalamat()
{
    return this->alamat;
}
void klien::settelp(QString telp)
{
    this->telp = telp;
}

QString klien::gettelp()
{
    return this->telp;
}
