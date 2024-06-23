#include "buktipembayaran.h"

buktipembayaran::buktipembayaran() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_buktipem");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}

buktipembayaran::buktipembayaran(QString nobukti, QString noinvoice, QString tglbukti,QString keterangan,QString norek)
{
    this->nobukti= nobukti;
    this->noinvoice = noinvoice;
    this->tglbukti = tglbukti;
    this->keterangan = keterangan;
    this->norek = norek;

}

void buktipembayaran::setnobukti(QString nobukti)
{
    this->nobukti = nobukti;
}

QString buktipembayaran::getnobukti()
{
    return this->nobukti;
}

void buktipembayaran::setnoinvoice(QString noinvoice)
{
    this->noinvoice = noinvoice;
}

QString buktipembayaran::getnoinvoice()
{
    return this->noinvoice;
}

void buktipembayaran::settglbukti(QString tglbukti)
{
    this->tglbukti = tglbukti;
}

QString buktipembayaran::gettglbukti()
{
    return this->tglbukti;
}
void buktipembayaran::setketerangan(QString keterangan)
{
    this->keterangan = keterangan;
}
QString buktipembayaran::getketerangan()
{
    return this->keterangan;
}
void buktipembayaran::setnorek(QString norek)
{
    this->norek = norek;
}
QString buktipembayaran::getnorek()
{
    return this->norek;
}


