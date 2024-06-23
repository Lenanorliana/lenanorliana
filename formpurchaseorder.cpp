#include "formpurchaseorder.h"
#include "ui_formpurchaseorder.h"

Formpurchaseorder::Formpurchaseorder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formpurchaseorder)
{
    ui->setupUi(this);
    purchaseorder uji;
    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_order");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi!";
    }
}

Formpurchaseorder::~Formpurchaseorder()
{
    delete ui;
}

void Formpurchaseorder::on_pushButton_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO purchase_order (nopo,idklien,jangkapengiriman,tglpo,statuspo,qty,harga,UoM,idbarang,idgudang)"
                "VALUES(:nopo,:idklien,:jangkapengiriman,:tglpo,:statuspo,:qty,:harga,:UoM,:idbarang,:idgudang)");
    sql.bindValue(":nopo",ui->nopoLineEdit->text());
    sql.bindValue(":jangkapengiriman",ui->jangkapengirimanLineEdit->text());
    sql.bindValue(":idklien",ui->idklienLineEdit->text());
    sql.bindValue(":tglpo",ui->tglpoLineEdit->text());
    sql.bindValue(":statuspo",ui->statuspoLineEdit->text());
    sql.bindValue(":qty",ui->qytLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text());
    sql.bindValue(":UoM",ui->uoMLineEdit->text());
    sql.bindValue(":idbarang",ui->idbarangLineEdit->text());
    sql.bindValue(":idgudang",ui->idgudangLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }

}


void Formpurchaseorder::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE penawaran SET purchase_order idklien=:idklien,jangkapengirirman=:jangkapengiriman,tglpo=:tglpo,statuspo:statuspo,qty=:qty,harga=:harga,UoM=:UoM,idbarang=:idbarang,idgudang=:idgudang where nopo=:nopo");
    sql.bindValue(":nopo",ui->nopoLineEdit->text());
    sql.bindValue(":jangkapengiriman",ui->jangkapengirimanLineEdit->text());
    sql.bindValue(":idklien",ui->idklienLineEdit->text());
    sql.bindValue(":tglpo",ui->tglpoLineEdit->text());
    sql.bindValue(":statuspo",ui->statuspoLineEdit->text());
    sql.bindValue(":qty",ui->qytLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text());
    sql.bindValue(":UoM",ui->uoMLineEdit->text());
    sql.bindValue(":idbarang",ui->idbarangLineEdit->text());
    sql.bindValue(":idgudang",ui->idgudangLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil Diubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formpurchaseorder::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM purchase_order WHERE nopo=:nopo");
    sql.bindValue(":nopo",ui->nopoLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data berhasil dihapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

