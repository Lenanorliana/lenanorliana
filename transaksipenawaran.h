#ifndef TRANSAKSIPENAWARAN_H
#define TRANSAKSIPENAWARAN_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>

class transaksipenawaran
{
public:
    transaksipenawaran();
    transaksipenawaran(QString nopenawaran ,QString idbarang,QString idklien, QString tglpenawaran); //contructor 2 (Overload constructor)

    void setnopenawaran(QString nopenawaran);
    QString getnopenawaran();

    void setidbarang(QString idbarang);
    QString getidbarang();

    void setidklien(QString idklien);
    QString getidklien();

    void settgllpenawaran(QString tglpenawaran);
    QString gettgllpenawaran();
private:
    QString nopenawaran,idbarang,idklien,tglpenawaran;
    QSqlDatabase koneksiDB;
};

#endif // TRANSAKSIPENAWARAN_H
