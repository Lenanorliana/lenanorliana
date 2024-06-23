#ifndef BUKTIPEMBAYARAN_H
#define BUKTIPEMBAYARAN_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>

class buktipembayaran
{
public:
    buktipembayaran();
    buktipembayaran(QString nobukti ,QString noinvoice,
           QString tglbukti,QString keterangan,QString norek); //contructor 2 (Overload constructor)

    void setnobukti(QString nobukti);
    QString getnobukti();

    void setnoinvoice(QString noinvoice);
    QString getnoinvoice();

    void settglbukti(QString tglbukti);
    QString gettglbukti();

    void setketerangan(QString keterangan);
    QString getketerangan();

    void setnorek(QString norek);
    QString getnorek();


private:
    QString nobukti,noinvoice,tglbukti,keterangan,norek;
    QSqlDatabase koneksiDB;
};

#endif // BUKTIPEMBAYARAN_H
