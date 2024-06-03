#ifndef KARYAWAN_H
#define KARYAWAN_H
#include <gaji.h>
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>

class karyawan : public gaji
{
public:
    karyawan(); //constroctor 1
    karyawan(QString nik,QString golongan,
            QString status,int jumlahAnak,int masaKerja,  QString nama,
            QString alamat, QString telp); //contructor 2 (Overload constructor)

    void setNIK(QString NIK);
    QString getNIK();

    void setNAMA(QString NAMA);
    QString getNAMA();

    void setALAMAT(QString ALAMAT);
    QString getALAMAT();

    void setTELP(QString TELP);
    QString getTELP();

private:
    QString nik,nama,alamat,telp;
    QSqlDatabase koneksiDB;
};

#endif // KARYAWAN_H
