#include "mouklien.h"

mouklien::mouklien() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_mouklien");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}
mouklien::mouklien(QString nomou ,QString idklien,QString tglmou,QString jangkawaktu)
{
    this->nomou= nomou;
    this->idklien = idklien;
    this->tglmou = tglmou;
    this->jangkawaktu = jangkawaktu;
}
void mouklien::setnomou(QString nomou)
{
    this->nomou = nomou;
}

QString mouklien::getnomou()
{
    return this->nomou;
}
void mouklien::setidklien(QString idklien)
{
    this->idklien= idklien;
}

QString mouklien::getidklien()
{
    return this->idklien;
}
void mouklien::settglmou(QString tglmou)
{
    this->tglmou = tglmou;
}

QString mouklien::gettglmou()
{
    return this->tglmou;
}
void mouklien::setjangkawaktu(QString jangkawaktu)
{
    this->jangkawaktu = jangkawaktu;
}

QString mouklien::getjangkawaktu()
{
    return this->jangkawaktu;
}

