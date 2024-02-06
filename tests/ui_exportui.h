/********************************************************************************
** Form generated from reading UI file 'exportui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTUI_H
#define UI_EXPORTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Exportui
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *exportFromBox;
    QLabel *exportFromLabel;
    QLabel *exportTypeLabel;
    QComboBox *exportToBox;
    QLabel *exportToLabel;
    QLabel *exportTrackLabel;
    QComboBox *exportTrackBox;
    QComboBox *exportTypeBox;
    QFrame *nl1_frame;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *nl1_layout;
    QCheckBox *noHeartLineBox;
    QLabel *exportMPerNodeLabel;
    QDoubleSpinBox *segmentLengthBox;
    QLabel *relThreshLabel;
    QDoubleSpinBox *relThresBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Exportui)
    {
        if (Exportui->objectName().isEmpty())
            Exportui->setObjectName(QString::fromUtf8("Exportui"));
        Exportui->resize(300, 270);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Exportui->sizePolicy().hasHeightForWidth());
        Exportui->setSizePolicy(sizePolicy);
        Exportui->setMinimumSize(QSize(300, 240));
        Exportui->setMaximumSize(QSize(300, 270));
        verticalLayout = new QVBoxLayout(Exportui);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        exportFromBox = new QComboBox(Exportui);
        exportFromBox->setObjectName(QString::fromUtf8("exportFromBox"));

        gridLayout->addWidget(exportFromBox, 2, 1, 1, 1);

        exportFromLabel = new QLabel(Exportui);
        exportFromLabel->setObjectName(QString::fromUtf8("exportFromLabel"));

        gridLayout->addWidget(exportFromLabel, 2, 0, 1, 1);

        exportTypeLabel = new QLabel(Exportui);
        exportTypeLabel->setObjectName(QString::fromUtf8("exportTypeLabel"));

        gridLayout->addWidget(exportTypeLabel, 0, 0, 1, 1);

        exportToBox = new QComboBox(Exportui);
        exportToBox->setObjectName(QString::fromUtf8("exportToBox"));

        gridLayout->addWidget(exportToBox, 3, 1, 1, 1);

        exportToLabel = new QLabel(Exportui);
        exportToLabel->setObjectName(QString::fromUtf8("exportToLabel"));

        gridLayout->addWidget(exportToLabel, 3, 0, 1, 1);

        exportTrackLabel = new QLabel(Exportui);
        exportTrackLabel->setObjectName(QString::fromUtf8("exportTrackLabel"));

        gridLayout->addWidget(exportTrackLabel, 1, 0, 1, 1);

        exportTrackBox = new QComboBox(Exportui);
        exportTrackBox->setObjectName(QString::fromUtf8("exportTrackBox"));

        gridLayout->addWidget(exportTrackBox, 1, 1, 1, 1);

        exportTypeBox = new QComboBox(Exportui);
        exportTypeBox->addItem(QString());
        exportTypeBox->addItem(QString());
        exportTypeBox->addItem(QString());
        exportTypeBox->setObjectName(QString::fromUtf8("exportTypeBox"));

        gridLayout->addWidget(exportTypeBox, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        nl1_frame = new QFrame(Exportui);
        nl1_frame->setObjectName(QString::fromUtf8("nl1_frame"));
        nl1_frame->setFrameShape(QFrame::NoFrame);
        nl1_frame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(nl1_frame);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        nl1_layout = new QGridLayout();
        nl1_layout->setObjectName(QString::fromUtf8("nl1_layout"));
        noHeartLineBox = new QCheckBox(nl1_frame);
        noHeartLineBox->setObjectName(QString::fromUtf8("noHeartLineBox"));

        nl1_layout->addWidget(noHeartLineBox, 2, 0, 1, 2);

        exportMPerNodeLabel = new QLabel(nl1_frame);
        exportMPerNodeLabel->setObjectName(QString::fromUtf8("exportMPerNodeLabel"));

        nl1_layout->addWidget(exportMPerNodeLabel, 1, 0, 1, 1);

        segmentLengthBox = new QDoubleSpinBox(nl1_frame);
        segmentLengthBox->setObjectName(QString::fromUtf8("segmentLengthBox"));
        segmentLengthBox->setMinimum(0.200000000000000);
        segmentLengthBox->setMaximum(10.000000000000000);
        segmentLengthBox->setSingleStep(0.200000000000000);
        segmentLengthBox->setValue(2.000000000000000);

        nl1_layout->addWidget(segmentLengthBox, 1, 1, 1, 1);

        relThreshLabel = new QLabel(nl1_frame);
        relThreshLabel->setObjectName(QString::fromUtf8("relThreshLabel"));

        nl1_layout->addWidget(relThreshLabel, 0, 0, 1, 1);

        relThresBox = new QDoubleSpinBox(nl1_frame);
        relThresBox->setObjectName(QString::fromUtf8("relThresBox"));
        relThresBox->setMinimum(75.000000000000000);
        relThresBox->setMaximum(90.000000000000000);
        relThresBox->setSingleStep(1.000000000000000);
        relThresBox->setValue(85.000000000000000);

        nl1_layout->addWidget(relThresBox, 0, 1, 1, 1);


        verticalLayout_2->addLayout(nl1_layout);


        verticalLayout->addWidget(nl1_frame);

        buttonBox = new QDialogButtonBox(Exportui);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Exportui);
        QObject::connect(buttonBox, SIGNAL(accepted()), Exportui, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Exportui, SLOT(reject()));

        QMetaObject::connectSlotsByName(Exportui);
    } // setupUi

    void retranslateUi(QDialog *Exportui)
    {
        Exportui->setWindowTitle(QCoreApplication::translate("Exportui", "Export Track", nullptr));
        exportFromLabel->setText(QCoreApplication::translate("Exportui", "Export From Section:", nullptr));
        exportTypeLabel->setText(QCoreApplication::translate("Exportui", "Exporter Type", nullptr));
        exportToLabel->setText(QCoreApplication::translate("Exportui", "Export To Section", nullptr));
        exportTrackLabel->setText(QCoreApplication::translate("Exportui", "Export Track", nullptr));
        exportTypeBox->setItemText(0, QCoreApplication::translate("Exportui", "NoLimits2 Exporter", nullptr));
        exportTypeBox->setItemText(1, QCoreApplication::translate("Exportui", "Tangent Exporter", nullptr));
        exportTypeBox->setItemText(2, QCoreApplication::translate("Exportui", "Spline Exporter", nullptr));

        noHeartLineBox->setText(QCoreApplication::translate("Exportui", "Export without heartlining the Track", nullptr));
        exportMPerNodeLabel->setText(QCoreApplication::translate("Exportui", "Segment Length (in m)", nullptr));
        relThreshLabel->setText(QCoreApplication::translate("Exportui", "Threshold for RelRoll (in \302\260)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Exportui: public Ui_Exportui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTUI_H
