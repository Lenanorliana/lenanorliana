#include "formgudang.h"
#include "ui_formgudang.h"

Formgudang::Formgudang(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formgudang)
{
    ui->setupUi(this);
    gudang uji;

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_gudang");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }
}

Formgudang::~Formgudang()
{
    delete ui;
}

void Formgudang::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO gudang (idgudang,alamatgudang)"
                "VALUES(:idgudang,:alamatgudang)");
    sql.bindValue(":idgudang",ui->idgudangLineEdit->text());
    sql.bindValue(":alamatgudang",ui->alamatgudangLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }

}


void Formgudang::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE gudang SET alamatgudang=:alamatgudang where idgudang=:idgudang");
    sql.bindValue(":idgudang",ui->idgudangLineEdit->text());
    sql.bindValue(":alamatgudang",ui->alamatgudangLineEdit->text());
    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formgudang::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM gudang WHERE idgudang=:idgudang");
    sql.bindValue(":idgudang",ui->idgudangLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

