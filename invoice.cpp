#include "invoice.h"

invoice::invoice() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_invoice");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}
invoice::invoice(QString noinvoice ,QString nopo,QString tglinvoice,QString jumbayar,QString discon,QString ppn,QString idkaryawan, QString jangkapengiriman)
{
    this->noinvoice= noinvoice;
    this->nopo = nopo;
    this->tglinvoice = tglinvoice;
    this->jumbayar = jumbayar;
    this->discon = discon;
    this->ppn = ppn;
    this->idkaryawan = idkaryawan;
    this->jangkapengiriman =jangkapengiriman;
}
void invoice::setnoinvoice(QString noinvoice)
{
    this->noinvoice = noinvoice;
}

QString invoice::getnoinvoice()
{
    return this->noinvoice;
}
void invoice::setnopo(QString nopo)
{
    this->nopo = nopo;
}

QString invoice::getnopo()
{
    return this->nopo;
}
void invoice::settglinvoice(QString tglinvoice)
{
    this->tglinvoice = tglinvoice;
}

QString invoice::gettglinvoice()
{
    return this->tglinvoice;
}
void invoice::setdiscon(QString discon)
{
    this->discon = discon;
}

QString invoice::getdiscon()
{
    return this->discon;
}
void invoice::setppn(QString ppn)
{
    this->ppn = ppn;
}

QString invoice::getppn()
{
    return this->ppn;
}
void invoice::setjumbayar(QString jumbayar)
{
    this->jumbayar = jumbayar;
}

QString invoice::getjumbayar()
{
    return this->jumbayar;
}
void invoice::setidkaryawan(QString idkaryawan)
{
    this->idkaryawan = idkaryawan;
}

QString invoice::getidkaryawan()
{
    return this->idkaryawan;
}
void invoice::setjangkapengiriman(QString jangkapengiriman)
{
    this->jangkapengiriman = jangkapengiriman;
}

QString invoice::getjangkapengiriman()
{
    return this->jangkapengiriman;
}
