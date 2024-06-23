#ifndef INVOICE_H
#define INVOICE_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>

class invoice
{
public:
    invoice();
    invoice(QString noinvoice ,QString nopo,QString tglinvoice, QString discon,QString ppn,QString jumbayar, QString idkaryawan, QString jangkapengiriman); //contructor 2 (Overload constructor)

    void setnoinvoice(QString noinvoice);
    QString getnoinvoice();

    void setnopo(QString nopo);
    QString getnopo();

    void settglinvoice(QString tglinvoice);
    QString gettglinvoice();

    void setdiscon(QString discon);
    QString getdiscon();

    void setjumbayar(QString jumbayar);
    QString getjumbayar();

    void setppn(QString ppn);
    QString getppn();

    void setidkaryawan(QString idkaryawan);
    QString getidkaryawan();

    void setjangkapengiriman(QString jangkapengiriman);
    QString getjangkapengiriman();

private:
    QString noinvoice,nopo,tglinvoice,jumbayar,discon,ppn,idkaryawan,jangkapengiriman;
    QSqlDatabase koneksiDB;
};

#endif // INVOICE_H
