#include "formkenderaan.h"
#include "ui_formkenderaan.h"

Formkenderaan::Formkenderaan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formkenderaan)
{
    ui->setupUi(this);
    kenderaan uji;

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_kenderaan");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }
}

Formkenderaan::~Formkenderaan()
{
    delete ui;
}

void Formkenderaan::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO kenderaan (nopolisi,jenis,muatan,sopir)"
                "VALUES(:nopolisi,:jenis,:muatan,:sopir)");
    sql.bindValue(":nopolisi",ui->nopolisiLineEdit->text());
    sql.bindValue(":jenis",ui->jenisLineEdit->text());
    sql.bindValue(":muatan",ui->muatanLineEdit->text());
    sql.bindValue(":sopir",ui->sopirLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formkenderaan::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE kenderaan SET jenis=:jenis,muatan=:muatan,sopir=:sopir where nopolisi=:nopolis");
    sql.bindValue(":nopolisi",ui->nopolisiLineEdit->text());
    sql.bindValue(":jenis",ui->jenisLineEdit->text());
    sql.bindValue(":muatan",ui->muatanLineEdit->text());
    sql.bindValue(":sopir",ui->sopirLineEdit->text());
    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formkenderaan::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM kenderaan WHERE nopolisi=:nopolisi");
    sql.bindValue(":nopolisi",ui->nopolisiLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }

}

