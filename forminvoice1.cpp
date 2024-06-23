#include "forminvoice1.h"
#include "ui_forminvoice1.h"

Forminvoice1::Forminvoice1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Forminvoice1)
{
    ui->setupUi(this);

    invoice uji;

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_invoice");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }
}

Forminvoice1::~Forminvoice1()
{
    delete ui;
}

void Forminvoice1::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO invoice1 (noinvoice,nopo,tglinvoice,discon,ppn,jumbayar,idkaryawan,jangkapengiriman)"
                "VALUES(:noinvoice,:nopo,:tglinvoice,:discon,:ppn,:jumbayar,:idkaryawan,:jangkapengiriman)");
    sql.bindValue(":noinvoice",ui->noinvoiceLineEdit->text());
    sql.bindValue(":nopo",ui->nopoLineEdit->text());
    sql.bindValue(":tglinvoice",ui->tglinvoiceDateEdit->text());
    sql.bindValue(":discon",ui->diskonLineEdit->text());
    sql.bindValue(":ppn",ui->ppnLineEdit->text());
    sql.bindValue(":jumbayar",ui->jumlahbayarLineEdit->text());
    sql.bindValue(":idkaryawan",ui->idkaryawanLineEdit->text());
    sql.bindValue(":jangkapengiriman",ui->jangkapengirimanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Forminvoice1::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE invoice1 SET nopo=:nopo, tglinvoice=:tglinvoice discon=:discon,ppn=:ppn,jumbayar=:jumbayar,idkaryawan=;idkaryawan,jangkapengiriman=:jangkapengiriman where noinvoice=:noinvoice");
    sql.bindValue(":noinvoice",ui->noinvoiceLineEdit->text());
    sql.bindValue(":nopo",ui->nopoLineEdit->text());
    sql.bindValue(":tglinvoice",ui->tglinvoiceDateEdit->text());
    sql.bindValue(":discon",ui->diskonLineEdit->text());
    sql.bindValue(":ppn",ui->ppnLineEdit->text());
    sql.bindValue(":jumbayar",ui->jumlahbayarLineEdit->text());
    sql.bindValue(":idkaryawan",ui->idkaryawanLineEdit->text());
    sql.bindValue(":jangkapengiriman",ui->jangkapengirimanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Forminvoice1::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM invoice1 WHERE noinvoice=:noinvoice");
    sql.bindValue(":noinvoice",ui->noinvoiceLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

