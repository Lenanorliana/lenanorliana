#ifndef GUDANG_H
#define GUDANG_H
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>

class gudang
{
public:
    gudang();
    gudang(QString idgudang ,QString alamatgudang); //contructor 2 (Overload constructor)

    void setidgudang(QString idgudang);
    QString getidgudang();

    void setalamatgudang(QString alamatgudang);
    QString getalamatgudang();
private:
    QString idgudang,alamatgudang;
    QSqlDatabase koneksiDB;
};

#endif // GUDANG_H
