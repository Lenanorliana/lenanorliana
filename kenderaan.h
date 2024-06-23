#ifndef KENDERAAN_H
#define KENDERAAN_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>


class kenderaan
{
public:
    kenderaan();
    kenderaan(QString nopolisi ,QString jenis,QString muatan, QString sopir); //contructor 2 (Overload constructor)

    void setnopolisi(QString nopolisi);
    QString getnopolisi();

    void setjenis(QString jenis);
    QString getjenis();

    void setmuatan(QString muatan);
    QString getmuatan();

    void setsopir(QString sopir);
    QString getsopir();
private:
    QString nopolisi,jenis,muatan,sopir;
    QSqlDatabase koneksiDB;
};

#endif // KENDERAAN_H
