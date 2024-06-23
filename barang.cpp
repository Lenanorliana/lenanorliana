#include "barang.h"


barang::barang() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_barang");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}

barang::barang(QString idbarang, QString nama, QString spesipikasi,QString satuan)
{
    this->idbarang= idbarang;
    this->nama = nama;
    this->spesipikasi = spesipikasi;
    this->satuan = satuan;
}

void barang::setidbarang(QString idbarang)
{
    this->idbarang = idbarang;
}

QString barang::getidbarang()
{
    return this->idbarang;
}

void barang::setnama(QString nama)
{
    this->nama = nama;
}

QString barang::getnama()
{
    return this->nama;
}

void barang::setspesipikasi(QString spesipikasi)
{
    this->spesipikasi = spesipikasi;
}

QString barang::getspesipikasi()
{
    return this->spesipikasi;
}
void barang::setsatuan(QString satuan)
{
    this->satuan = satuan;
}
QString barang::getsatuan()
{
    return this->satuan;
}



