#include "formkaryawan.h"
#include "ui_formkaryawan.h"

FormKaryawan::FormKaryawan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormKaryawan)
{
    ui->setupUi(this);

    karyawan uji;

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_penggajian2");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }

}

FormKaryawan::~FormKaryawan()
{
    delete ui;
}

void FormKaryawan::on_pushButton_clicked()
{
    uji.setGolongan(ui->golonganComboBox->currentText());
    uji.setStatusNikah(ui->statusNikahComboBox->currentText());
    uji.setJumlahAnak(ui->jumlahAnakLineEdit->text().toInt());
    uji.setMasaKerja(ui->masaKerjaLineEdit->text().toInt());
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO karyawan1(nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
            "VALUE(:nik,:nama,:alamat,:telp,:golongan,:status,:anak,:masa,:gaji)");
    sql.bindValue(":nik",ui->nIKLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telp",ui->telpLineEdit->text());
    sql.bindValue(":golongan",ui->golonganComboBox->currentText());
    sql.bindValue(":status",ui->statusNikahComboBox->currentText());
    sql.bindValue(":anak",ui->jumlahAnakLineEdit->text().toInt());
    sql.bindValue(":masa",ui->masaKerjaLineEdit->text().toInt());
    sql.bindValue(":gaji",uji.getGajiTotal());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }

}


void FormKaryawan::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE karyawan1 SET nama=:nama, alamat=:alamat, telp=:telp, "
                "golongan=:golongan, status=:status, anak=:anak, masa=:masa, gaji=:gaji where nik=:nik");
    sql.bindValue(":nik",ui->nIKLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telp",ui->telpLineEdit->text());
    sql.bindValue(":golongan",ui->golonganComboBox->currentText());
    sql.bindValue(":status",ui->statusNikahComboBox->currentText());
    sql.bindValue(":anak",ui->jumlahAnakLineEdit->text().toInt());
    sql.bindValue(":masa",ui->masaKerjaLineEdit->text().toInt());
    sql.bindValue(":gaji",uji.getGajiTotal());

    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormKaryawan::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM karyawan1 WHERE nik=:nik");
    sql.bindValue(":nik",ui->nIKLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

