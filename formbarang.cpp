#include "formbarang.h"
#include "ui_formbarang.h"

Formbarang::Formbarang(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formbarang)
{
    ui->setupUi(this);

    barang uji;

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_barang");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }

}

Formbarang::~Formbarang()
{
    delete ui;
}


void Formbarang::on_simpan_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO barang1 (idbarang,nama,spesipikasi,satuan)"
                "VALUES(:idbarang,:nama,:spesipikasi,:satuan)");
    sql.bindValue(":idbarang",ui->id_barangLineEdit->text());
    sql.bindValue(":nama",ui->namaBarangLineEdit->text());
    sql.bindValue(":spesipikasi",ui->spesipikasiLineEdit->text());
    sql.bindValue(":satuan",ui->hargaSatuanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }

}





void Formbarang::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE barang1 SET nama=:nama, spesipikasi=:spesipikasi, satuan=:satuan where idbarang=:idbarang");
    sql.bindValue(":idbarang",ui->id_barangLineEdit->text());
    sql.bindValue(":nama",ui->namaBarangLineEdit->text());
    sql.bindValue(":spesipikasi",ui->spesipikasiLineEdit->text());
    sql.bindValue(":satuan",ui->hargaSatuanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formbarang::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM barang1 WHERE idbarang=:idbarang");
    sql.bindValue(":idbarang",ui->id_barangLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

