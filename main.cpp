
#include "guipraktikum.h"

#include <QApplication>
#include <karyawan.h>
#include <barang.h>
#include<buktipembayaran.h>
#include<buktitimbangan.h>
#include<kenderaan.h>


int main(int argc, char *argv[])




{
    QApplication a(argc, argv);
    guipraktikum g;
    g.show();


    QSqlDatabase konekDB = QSqlDatabase::addDatabase("QODBC");
    konekDB.setDatabaseName("dsn_penggajian2");
    konekDB.setUserName("root");
    konekDB.setPassword("");

    if (!konekDB.open())
    {

        qDebug()<<konekDB.lastError().text();

        return false;
    }

    QSqlQuery sql(konekDB);

     sql.prepare("INSERT INTO karyawan1(nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
                "VALUE(:nik,:nama,:alamat,:telp,:golongan,:status,:anak,:masa,:gaji)");
         sql.bindValue(":nik","22111");
         sql.bindValue(":nama","lena liana");
         sql.bindValue(":alamat","banjarbaru");
         sql.bindValue(":telp","081952441");
         sql.bindValue(":golongan","I");
         sql.bindValue(":status","Menikah");
         sql.bindValue(":anak","3");
         sql.bindValue(":masa","10");
         sql.bindValue(":gaji","1000000");

        if (sql.exec()){
          qDebug()<<"Data berhasil Disimpan";
        }else{
            qDebug()<<sql.lastError().text();
         }



    /* if(!sql.exec("INSERT INTO karyawan(nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
                        "VALUE('151412','lena','banjarbaru','081952445441','I','Menikah','3','10','3000000')")){
            qDebug()<<sql.lastError().text();
            return false;
        }else{
            qDebug()<<"Data berhasil disimpan";
     }
    */




    karyawan k;
    k.setNIK("2210010008");
    k.setNAMA("NORLIANA");
    k.setALAMAT("081952445441");
    k.setGolongan("1");
    k.setStatusNikah("menikah");
    k.setJumlahAnak(1);
    k.setMasaKerja(3);
    qDebug()<<"NIK "<<k.getNIK()<<"\n";
    qDebug()<<"NAMA "<<k.getNAMA()<<"\n";
    qDebug()<<"ALAMAT "<<k.getALAMAT()<<"\n";
    qDebug()<<"GAJI POKOK "<<k.getTunjGolongan()<<"\n";
    qDebug()<<"TUNJ.STATUS  "<<k.getTunjNikah()<<"\n";
    qDebug()<<"TUNJ. ANAK  "<<k.getTunjAnak()<<"\n";
    qDebug()<<"TUNJ. MASA KERJA "<<k.getTunjMasaKerja()<<"\n";
    qDebug()<<"GAJI TOTAL "<<k.getGajiTotal()<<"\n";
    return a.exec();
}
