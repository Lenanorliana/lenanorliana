#include "guipraktikum.h"
#include "ui_guipraktikum.h"
#include "Qstring"

guipraktikum::guipraktikum(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::guipraktikum)
{
    ui->setupUi(this);
    myForm = new FormKaryawan;
}

guipraktikum::~guipraktikum()
{
    delete ui;
}


void guipraktikum::on_pushButton_clicked()
{
    myForm->show();
}
