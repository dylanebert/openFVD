/********************************************************************************
** Form generated from reading UI file 'objectexporter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTEXPORTER_H
#define UI_OBJECTEXPORTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_objectExporter
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QComboBox *trackBox;

    void setupUi(QDialog *objectExporter)
    {
        if (objectExporter->objectName().isEmpty())
            objectExporter->setObjectName(QString::fromUtf8("objectExporter"));
        objectExporter->resize(239, 76);
        gridLayout = new QGridLayout(objectExporter);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(objectExporter);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(objectExporter);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

        trackBox = new QComboBox(objectExporter);
        trackBox->setObjectName(QString::fromUtf8("trackBox"));

        gridLayout->addWidget(trackBox, 0, 1, 1, 1);


        retranslateUi(objectExporter);
        QObject::connect(buttonBox, SIGNAL(accepted()), objectExporter, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), objectExporter, SLOT(reject()));

        QMetaObject::connectSlotsByName(objectExporter);
    } // setupUi

    void retranslateUi(QDialog *objectExporter)
    {
        objectExporter->setWindowTitle(QCoreApplication::translate("objectExporter", "Export Object (experimental)", nullptr));
        label->setText(QCoreApplication::translate("objectExporter", "Track", nullptr));
    } // retranslateUi

};

namespace Ui {
    class objectExporter: public Ui_objectExporter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTEXPORTER_H
