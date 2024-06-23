#ifndef PURCHASEORDER_H
#define PURCHASEORDER_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>

class purchaseorder
{
public:
    purchaseorder();
    purchaseorder(QString nopo ,QString jangkapengiriman ,QString idklien, QString tglpo,QString statuspo, QString qty,QString harga, QString uom, QString idbarang,QString idgudang); //contructor 2 (Overload constructor)

    void setnopo(QString nopo);
    QString getnopo();

    void setjangkapengiriman (QString jangkapengiriman);
    QString getjangkapengiriman();

    void setidklien(QString idklien);
    QString getidklien();

    void settglpo(QString tglpo);
    QString gettglpo();

    void setstatuspo(QString statuspo);
    QString getstatuspo();

    void setqty (QString qty);
    QString getqty();

    void setharga(QString harga);
    QString getharga();

    void setuom(QString uom);
    QString getuom();

    void setidbarang(QString idbarang);
    QString getidbarang();

    void setidgudang(QString idgudang);
    QString getidgudang();

private:
    QString nopo,jangkapengiriman,idklien,tglpo,statuspo, qty,harga,uom,idbarang,idgudang;
    QSqlDatabase koneksiDB;

};

#endif // PURCHASEORDER_H
