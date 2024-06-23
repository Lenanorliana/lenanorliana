#ifndef KLIEN_H
#define KLIEN_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>

class klien
{
public:
    klien();
    klien(QString idklien ,QString namaklien,QString alamat, QString telp); //contructor 2 (Overload constructor)

    void setidklien(QString idklien);
    QString getidklien();

    void setnamaklien(QString namaklien);
    QString getnamaklien();

    void setalamat(QString alamat);
    QString getalamat();

    void settelp(QString telp);
    QString gettelp();
private:
    QString idklien,namaklien,alamat,telp;
    QSqlDatabase koneksiDB;
};

#endif // KLIEN_H
