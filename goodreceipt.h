#ifndef GOODRECEIPT_H
#define GOODRECEIPT_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>

class goodreceipt
{
public:
    goodreceipt();
    goodreceipt(QString nogr ,QString tglmasuk,QString tglposting,QString jumlahorder,QString tglgr,QString keterangan,QString nopo,QString jangkapengiriman); //contructor 2 (Overload constructor)
    void setnogr(QString nogr);
    QString getnogr();
    void settglmasuk(QString tglmasuk);
    QString gettglmasuk();
    void settglposting(QString tglposting);
    QString gettglposting();
    void setjumlahorder(QString jumlahorder);
    QString getjumlahorder();
    void settglgr(QString tglgr);
    QString gettglgr();
    void setketerangan(QString keterangan);
    QString getketerangan();
    void setnopo(QString nopo);
    QString getnopo();
    void setjangkapengiriman(QString jangkapengiriman);
    QString getjangkapengiriman();
private:
    QString nogr,tglmasuk,tglposting,jumlahorder,tglgr,keterangan,nopo,jangkapengiriman;
    QSqlDatabase koneksiDB;
};

#endif // GOODRECEIPT_H
