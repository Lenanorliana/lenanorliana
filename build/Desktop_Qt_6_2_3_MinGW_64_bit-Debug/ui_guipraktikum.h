/********************************************************************************
** Form generated from reading UI file 'guipraktikum.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIPRAKTIKUM_H
#define UI_GUIPRAKTIKUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guipraktikum
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *guipraktikum)
    {
        if (guipraktikum->objectName().isEmpty())
            guipraktikum->setObjectName(QString::fromUtf8("guipraktikum"));
        guipraktikum->resize(400, 300);
        pushButton = new QPushButton(guipraktikum);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 230, 131, 31));

        retranslateUi(guipraktikum);

        QMetaObject::connectSlotsByName(guipraktikum);
    } // setupUi

    void retranslateUi(QWidget *guipraktikum)
    {
        guipraktikum->setWindowTitle(QCoreApplication::translate("guipraktikum", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("guipraktikum", "Form Karyawan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guipraktikum: public Ui_guipraktikum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIPRAKTIKUM_H
