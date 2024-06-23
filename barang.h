#ifndef BARANG_H
#define BARANG_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>

class barang
{
public:
    barang();
    barang(QString idbarang ,QString nama,
             QString spesipikasi,QString satuan); //contructor 2 (Overload constructor)

    void setidbarang(QString idbarang);
    QString getidbarang();

    void setnama(QString nama);
    QString getnama();

    void setspesipikasi(QString spesipikasi);
    QString getspesipikasi();

    void setsatuan(QString satuan);
    QString getsatuan();

private:
    QString idbarang,nama,spesipikasi,satuan;
    QSqlDatabase koneksiDB;
};

#endif // BARANG_H
