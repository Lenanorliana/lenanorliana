/********************************************************************************
** Form generated from reading UI file 'formkaryawan.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKARYAWAN_H
#define UI_FORMKARYAWAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormKaryawan
{
public:
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QComboBox *golonganComboBox;
    QLabel *golonganLabel;
    QLabel *statusNikahLabel;
    QComboBox *statusNikahComboBox;
    QLabel *jumlahAnakLabel;
    QLineEdit *jumlahAnakLineEdit;
    QLabel *masaKerjaLabel;
    QLineEdit *masaKerjaLineEdit;
    QLabel *gajiTotalLabel;
    QLineEdit *gajiTotalLineEdit;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *nIKLabel;
    QLineEdit *nIKLineEdit;
    QLabel *namaLabel;
    QLineEdit *namaLineEdit;
    QLabel *telpLabel;
    QLineEdit *telpLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;

    void setupUi(QWidget *FormKaryawan)
    {
        if (FormKaryawan->objectName().isEmpty())
            FormKaryawan->setObjectName(QString::fromUtf8("FormKaryawan"));
        FormKaryawan->resize(531, 300);
        pushButton = new QPushButton(FormKaryawan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 140, 75, 41));
        formLayoutWidget = new QWidget(FormKaryawan);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(210, 0, 211, 158));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        golonganComboBox = new QComboBox(formLayoutWidget);
        golonganComboBox->addItem(QString());
        golonganComboBox->addItem(QString());
        golonganComboBox->addItem(QString());
        golonganComboBox->addItem(QString());
        golonganComboBox->setObjectName(QString::fromUtf8("golonganComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, golonganComboBox);

        golonganLabel = new QLabel(formLayoutWidget);
        golonganLabel->setObjectName(QString::fromUtf8("golonganLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, golonganLabel);

        statusNikahLabel = new QLabel(formLayoutWidget);
        statusNikahLabel->setObjectName(QString::fromUtf8("statusNikahLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, statusNikahLabel);

        statusNikahComboBox = new QComboBox(formLayoutWidget);
        statusNikahComboBox->addItem(QString());
        statusNikahComboBox->addItem(QString());
        statusNikahComboBox->setObjectName(QString::fromUtf8("statusNikahComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, statusNikahComboBox);

        jumlahAnakLabel = new QLabel(formLayoutWidget);
        jumlahAnakLabel->setObjectName(QString::fromUtf8("jumlahAnakLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, jumlahAnakLabel);

        jumlahAnakLineEdit = new QLineEdit(formLayoutWidget);
        jumlahAnakLineEdit->setObjectName(QString::fromUtf8("jumlahAnakLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, jumlahAnakLineEdit);

        masaKerjaLabel = new QLabel(formLayoutWidget);
        masaKerjaLabel->setObjectName(QString::fromUtf8("masaKerjaLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, masaKerjaLabel);

        masaKerjaLineEdit = new QLineEdit(formLayoutWidget);
        masaKerjaLineEdit->setObjectName(QString::fromUtf8("masaKerjaLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, masaKerjaLineEdit);

        gajiTotalLabel = new QLabel(formLayoutWidget);
        gajiTotalLabel->setObjectName(QString::fromUtf8("gajiTotalLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, gajiTotalLabel);

        gajiTotalLineEdit = new QLineEdit(formLayoutWidget);
        gajiTotalLineEdit->setObjectName(QString::fromUtf8("gajiTotalLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, gajiTotalLineEdit);

        formLayoutWidget_2 = new QWidget(FormKaryawan);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 10, 211, 111));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        nIKLabel = new QLabel(formLayoutWidget_2);
        nIKLabel->setObjectName(QString::fromUtf8("nIKLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nIKLabel);

        nIKLineEdit = new QLineEdit(formLayoutWidget_2);
        nIKLineEdit->setObjectName(QString::fromUtf8("nIKLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nIKLineEdit);

        namaLabel = new QLabel(formLayoutWidget_2);
        namaLabel->setObjectName(QString::fromUtf8("namaLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, namaLabel);

        namaLineEdit = new QLineEdit(formLayoutWidget_2);
        namaLineEdit->setObjectName(QString::fromUtf8("namaLineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, namaLineEdit);

        telpLabel = new QLabel(formLayoutWidget_2);
        telpLabel->setObjectName(QString::fromUtf8("telpLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, telpLabel);

        telpLineEdit = new QLineEdit(formLayoutWidget_2);
        telpLineEdit->setObjectName(QString::fromUtf8("telpLineEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, telpLineEdit);

        alamatLabel = new QLabel(formLayoutWidget_2);
        alamatLabel->setObjectName(QString::fromUtf8("alamatLabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formLayoutWidget_2);
        alamatLineEdit->setObjectName(QString::fromUtf8("alamatLineEdit"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, alamatLineEdit);


        retranslateUi(FormKaryawan);

        QMetaObject::connectSlotsByName(FormKaryawan);
    } // setupUi

    void retranslateUi(QWidget *FormKaryawan)
    {
        FormKaryawan->setWindowTitle(QCoreApplication::translate("FormKaryawan", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("FormKaryawan", "Hitung", nullptr));
        golonganComboBox->setItemText(0, QCoreApplication::translate("FormKaryawan", "I", nullptr));
        golonganComboBox->setItemText(1, QCoreApplication::translate("FormKaryawan", "II", nullptr));
        golonganComboBox->setItemText(2, QCoreApplication::translate("FormKaryawan", "III", nullptr));
        golonganComboBox->setItemText(3, QCoreApplication::translate("FormKaryawan", "IV", nullptr));

        golonganLabel->setText(QCoreApplication::translate("FormKaryawan", "golongan", nullptr));
        statusNikahLabel->setText(QCoreApplication::translate("FormKaryawan", "status nikah", nullptr));
        statusNikahComboBox->setItemText(0, QCoreApplication::translate("FormKaryawan", "Menikah", nullptr));
        statusNikahComboBox->setItemText(1, QCoreApplication::translate("FormKaryawan", "Belum Menikah", nullptr));

        jumlahAnakLabel->setText(QCoreApplication::translate("FormKaryawan", "Jumlah Anak", nullptr));
        masaKerjaLabel->setText(QCoreApplication::translate("FormKaryawan", "Masa Kerja", nullptr));
        gajiTotalLabel->setText(QCoreApplication::translate("FormKaryawan", "Gaji Total", nullptr));
        nIKLabel->setText(QCoreApplication::translate("FormKaryawan", "NIK", nullptr));
        namaLabel->setText(QCoreApplication::translate("FormKaryawan", "Nama", nullptr));
        telpLabel->setText(QCoreApplication::translate("FormKaryawan", "Telp", nullptr));
        alamatLabel->setText(QCoreApplication::translate("FormKaryawan", "Alamat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormKaryawan: public Ui_FormKaryawan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKARYAWAN_H
