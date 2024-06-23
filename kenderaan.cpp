#include "kenderaan.h"

kenderaan::kenderaan() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_kenderaan");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}
kenderaan::kenderaan(QString nopolisi ,QString jenis,QString muatan,QString sopir)
{
    this->nopolisi= nopolisi;
    this->jenis = jenis;
    this->muatan = muatan;
    this->sopir = sopir;
}
void kenderaan::setnopolisi(QString nopolisi)
{
    this->nopolisi = nopolisi;
}

QString kenderaan::getnopolisi()
{
    return this->nopolisi;
}
void kenderaan::setjenis(QString jenis)
{
    this->jenis= jenis;
}

QString kenderaan::getjenis()
{
    return this->jenis;
}
void kenderaan::setmuatan(QString muatan)
{
    this->muatan = muatan;
}

QString kenderaan::getmuatan()
{
    return this->muatan;
}
void kenderaan::setsopir(QString sopir)
{
    this->sopir = sopir;
}

QString kenderaan::getsopir()
{
    return this->sopir;
}

