#include "karyawan.h"

karyawan::karyawan() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_penggajian2");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    }else{
        qDebug()<<koneksiDB.lastError().text();
    }
}

karyawan::karyawan(QString nik, QString golongan, QString status, int jumlahAnak, int masaKerja, QString nama, QString alamat, QString telp)
{
    this->nik= nik;
    this->setGolongan(golongan);
    this->setStatusNikah(status);
    this->setJumlahAnak(jumlahAnak);
    this->setMasaKerja(masaKerja);
    this->nama = nama;
    this->alamat = alamat;
    this->telp =telp;
}

void karyawan::setNIK(QString NIK)
{
    this->nik = NIK;
}

QString karyawan::getNIK()
{
    return this->nik;
}

void karyawan::setNAMA(QString NAMA)
{
    this->nama = NAMA;
}

QString karyawan::getNAMA()
{
    return this->nama;
}

void karyawan::setALAMAT(QString ALAMAT)
{
    this->alamat = ALAMAT;
}

QString karyawan::getALAMAT()
{
    return this->alamat;
}

void karyawan::setTELP(QString TELP)
{
    this->telp = TELP;
}

QString karyawan::getTELP()
{
    return this->telp;
}

