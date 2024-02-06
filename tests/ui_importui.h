/********************************************************************************
** Form generated from reading UI file 'importui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTUI_H
#define UI_IMPORTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_importUi
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *importUi)
    {
        if (importUi->objectName().isEmpty())
            importUi->setObjectName(QString::fromUtf8("importUi"));
        importUi->resize(300, 240);
        verticalLayout = new QVBoxLayout(importUi);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(importUi);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setRootIsDecorated(false);
        treeWidget->setColumnCount(3);
        treeWidget->header()->setVisible(true);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(importUi);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(importUi);
        QObject::connect(buttonBox, SIGNAL(accepted()), importUi, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), importUi, SLOT(reject()));

        QMetaObject::connectSlotsByName(importUi);
    } // setupUi

    void retranslateUi(QDialog *importUi)
    {
        importUi->setWindowTitle(QCoreApplication::translate("importUi", "Dialog", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("importUi", "Import?", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("importUi", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("importUi", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class importUi: public Ui_importUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTUI_H
