#include "formutama.h"
#include "ui_formutama.h"

formutama::formutama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::formutama)
{
    ui->setupUi(this);
}

formutama::~formutama()
{
    delete ui;
}
