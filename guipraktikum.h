#ifndef GUIPRAKTIKUM_H
#define GUIPRAKTIKUM_H

#include <QWidget>
#include <formkaryawan.h>

namespace Ui {
class guipraktikum;
}

class guipraktikum : public QWidget
{
    Q_OBJECT

public:
    explicit guipraktikum(QWidget *parent = nullptr);
    ~guipraktikum();

private slots:
    void on_pushButton_clicked();

private:
    Ui::guipraktikum *ui;
    FormKaryawan * myForm;
};

#endif // GUIPRAKTIKUM_H
