#include "formgoodreceipt.h"
#include "ui_formgoodreceipt.h"

Formgoodreceipt::Formgoodreceipt(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formgoodreceipt)
{
    ui->setupUi(this);
    goodreceipt uji;

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_goodreceipt");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }
}

Formgoodreceipt::~Formgoodreceipt()
{
    delete ui;
}

void Formgoodreceipt::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO good_receipt (nogr,tglmasuk,tglposting,jumlahorder,tglgr,keterangan,nopo,jangkapengiriman)"
                "VALUES(:nogr,:tglmasuk,:tglposting,:jumlahorder,:tglgr,:keterangan,:nopo,:jangkapengiriman)");
    sql.bindValue(":nogr",ui->nogrLineEdit->text());
    sql.bindValue(":tglmasuk",ui->tglmasukDateEdit->text());
    sql.bindValue(":tglposting",ui->tglpostingDateEdit->text());
    sql.bindValue(":jumlahorder",ui->jumlahorderLineEdit->text());
    sql.bindValue(":tglgr",ui->tglgrDateEdit->text());
    sql.bindValue(":keterangan",ui->keteranganLineEdit->text());
    sql.bindValue(":nopo",ui->nopoLineEdit->text());
    sql.bindValue(":jangkapengiriman",ui->jangkapengirimanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formgoodreceipt::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE good_receipt SET tglmasuk=:tglmasuk,tglposting=:tglposting,jumlahorder=:jumlahorder,tglgr=:tglgr,keterangan=:keterangan,nopo=:nopo,jangkapengiriman=:jangkapengiriman where nogr=:nogr");
    sql.bindValue(":nogr",ui->nogrLineEdit->text());
    sql.bindValue(":tglmasuk",ui->tglmasukDateEdit->text());
    sql.bindValue(":tglposting",ui->tglpostingDateEdit->text());
    sql.bindValue(":jumlahorder",ui->jumlahorderLineEdit->text());
    sql.bindValue(":tglgr",ui->tglgrDateEdit->text());
    sql.bindValue(":keterangan",ui->keteranganLineEdit->text());
    sql.bindValue(":nopo",ui->nopoLineEdit->text());
    sql.bindValue(":jangkapengiriman",ui->jangkapengirimanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formgoodreceipt::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM good_receipt WHERE nogr=:nogr");
    sql.bindValue(":nogr",ui->nogrLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

