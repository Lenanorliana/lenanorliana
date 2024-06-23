#include "buktitimbangan.h"

buktitimbangan::buktitimbangan() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_buktitim");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}

buktitimbangan::buktitimbangan(QString nobukti ,QString tglmasuk , QString tglkirim,QString nopolisi, QString nobt,QString tglkeluar,QString beratmasuk, QString beratkeluar, QString nogr)
{
    this->nobukti= nobukti;
    this->tglmasuk = tglmasuk;
    this->tglkirim = tglkirim;
    this->nopolisi = nopolisi;
    this->nobt = nobt;
    this->tglkeluar = tglkeluar;
    this->beratmasuk =beratmasuk;
    this->beratkeluar =beratkeluar;
    this->nogr= nogr;
}

void buktitimbangan::setnobukti(QString nobukti)
{
    this->nobukti = nobukti;
}

QString buktitimbangan::getnobukti()
{
    return this->nobukti;
}

void buktitimbangan::settglmasuk(QString tglmasuk)
{
    this->tglmasuk = tglmasuk;
}

QString buktitimbangan::gettglmasuk()
{
    return this->tglmasuk;
}

void buktitimbangan::settglkirim(QString tglkirim)
{
    this->tglkirim = tglkirim;
}

QString buktitimbangan::gettglkirim()
{
    return this->tglkirim;
}
void buktitimbangan::setnopolisi(QString nopolisi)
{
    this->nopolisi = nopolisi;
}
QString buktitimbangan::getnopolisi()
{
    return this->nopolisi;
}
void buktitimbangan::setnobt(QString nobt)
{
    this->nobt = nobt;
}
QString buktitimbangan::getnobt()
{
    return this->nobt;
}
void buktitimbangan::settglkeluar(QString tglkeluar)
{
    this->tglkeluar = tglkeluar;
}
QString buktitimbangan::gettglkeluar()
{
    return this->tglkeluar;
}
void buktitimbangan::setberatmasuk(QString beratmasuk)
{
    this->beratmasuk = beratmasuk;
}
QString buktitimbangan::getberatmasuk()
{
    return this->beratmasuk;
}
void buktitimbangan::setnogr(QString nogr)
{
    this->nogr = nogr;
}
QString buktitimbangan::getnogr()
{
    return this->nogr;
}


