#include "formklien.h"
#include "ui_formklien.h"

Formklien::Formklien(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formklien)
{
    ui->setupUi(this);
    klien uji;
    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_klien");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }
}

Formklien::~Formklien()
{
    delete ui;
}

void Formklien::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO klien (idklien,namaklien,alamat,telp)"
                "VALUES(:idklien,:namaklien,:alamat,:telp)");
    sql.bindValue(":idklien",ui->idklienLineEdit->text());
    sql.bindValue(":namaklien",ui->namaklienLineEdit->text());
    sql.bindValue(":alamat",ui->alamatklienLineEdit->text());
    sql.bindValue(":telp",ui->telpklienLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formklien::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE klien SET namaklien=:namaklien,alamat=:alamat,telp=:telp where idklien=:idklien");
    sql.bindValue(":idklien",ui->idklienLineEdit->text());
    sql.bindValue(":namaklien",ui->namaklienLineEdit->text());
    sql.bindValue(":alamat",ui->alamatklienLineEdit->text());
    sql.bindValue(":telp",ui->telpklienLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formklien::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM klien WHERE idklien=:idklien");
    sql.bindValue(":idklien",ui->idklienLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

