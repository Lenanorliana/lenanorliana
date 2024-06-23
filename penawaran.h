#ifndef PENAWARAN_H
#define PENAWARAN_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>

class penawaran
{
public:
    penawaran();
    penawaran(QString nopenawaran ,QString idbarang,QString status, QString harga); //contructor 2 (Overload constructor)

    void setnopenawaran(QString nopenawaran);
    QString getnopenawaran();

    void setidbarang(QString idbarang);
    QString getidbarang();

    void setstatus(QString status);
    QString getstatus();

    void setharga(QString harga);
    QString getharga();
private:
    QString nopenawaran,idbarang,status,harga;
    QSqlDatabase koneksiDB;
};

#endif // PENAWARAN_H
