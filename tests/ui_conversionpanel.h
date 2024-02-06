/********************************************************************************
** Form generated from reading UI file 'conversionpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSIONPANEL_H
#define UI_CONVERSIONPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "myqdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_conversionPanel
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QFrame *speedFrame;
    QGridLayout *gridLayout_2;
    QLabel *speedLabel;
    myQDoubleSpinBox *mpsSpin;
    myQDoubleSpinBox *kphSpin;
    myQDoubleSpinBox *mphSpin;
    QFrame *lengthFrame;
    QGridLayout *gridLayout_3;
    myQDoubleSpinBox *mileSpin;
    myQDoubleSpinBox *feetSpin;
    myQDoubleSpinBox *meterSpin;
    QLabel *lengthLabel;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_20;
    QLabel *label_17;
    QLabel *label_15;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_21;
    QLabel *label_2;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_6;
    QLabel *label_25;
    QLabel *label_7;
    QLabel *label_24;
    QLabel *label_8;
    QLabel *label_34;
    QLabel *label_5;
    QLabel *label_35;
    QLabel *label_10;
    QLabel *label_36;
    QLabel *label_19;
    QLabel *label_37;
    QLabel *label_18;
    QLabel *label_38;
    QLabel *label_16;
    QLabel *label_39;
    QLabel *label_14;
    QLabel *label_40;
    QLabel *label_11;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *conversionPanel)
    {
        if (conversionPanel->objectName().isEmpty())
            conversionPanel->setObjectName(QString::fromUtf8("conversionPanel"));
        conversionPanel->setWindowModality(Qt::NonModal);
        conversionPanel->resize(420, 460);
        conversionPanel->setMinimumSize(QSize(420, 460));
        conversionPanel->setMaximumSize(QSize(420, 460));
        conversionPanel->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8("fvd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        conversionPanel->setWindowIcon(icon);
        conversionPanel->setSizeGripEnabled(false);
        conversionPanel->setModal(false);
        verticalLayout = new QVBoxLayout(conversionPanel);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        speedFrame = new QFrame(conversionPanel);
        speedFrame->setObjectName(QString::fromUtf8("speedFrame"));
        speedFrame->setFrameShape(QFrame::Panel);
        speedFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(speedFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        speedLabel = new QLabel(speedFrame);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        speedLabel->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        speedLabel->setFont(font);
        speedLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(speedLabel, 0, 0, 1, 3);

        mpsSpin = new myQDoubleSpinBox(speedFrame);
        mpsSpin->setObjectName(QString::fromUtf8("mpsSpin"));
        mpsSpin->setContextMenuPolicy(Qt::NoContextMenu);
        mpsSpin->setMaximum(1000000.000000000000000);
        mpsSpin->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(mpsSpin, 1, 0, 1, 1);

        kphSpin = new myQDoubleSpinBox(speedFrame);
        kphSpin->setObjectName(QString::fromUtf8("kphSpin"));
        kphSpin->setContextMenuPolicy(Qt::NoContextMenu);
        kphSpin->setMaximum(1000000.000000000000000);

        gridLayout_2->addWidget(kphSpin, 1, 1, 1, 1);

        mphSpin = new myQDoubleSpinBox(speedFrame);
        mphSpin->setObjectName(QString::fromUtf8("mphSpin"));
        mphSpin->setContextMenuPolicy(Qt::NoContextMenu);
        mphSpin->setMaximum(1000000.000000000000000);

        gridLayout_2->addWidget(mphSpin, 1, 2, 1, 1);


        gridLayout->addWidget(speedFrame, 0, 0, 1, 1);

        lengthFrame = new QFrame(conversionPanel);
        lengthFrame->setObjectName(QString::fromUtf8("lengthFrame"));
        lengthFrame->setFrameShape(QFrame::Panel);
        lengthFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_3 = new QGridLayout(lengthFrame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mileSpin = new myQDoubleSpinBox(lengthFrame);
        mileSpin->setObjectName(QString::fromUtf8("mileSpin"));
        mileSpin->setContextMenuPolicy(Qt::NoContextMenu);
        mileSpin->setMaximum(1000000.000000000000000);
        mileSpin->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(mileSpin, 1, 2, 1, 1);

        feetSpin = new myQDoubleSpinBox(lengthFrame);
        feetSpin->setObjectName(QString::fromUtf8("feetSpin"));
        feetSpin->setContextMenuPolicy(Qt::NoContextMenu);
        feetSpin->setMaximum(1000000.000000000000000);

        gridLayout_3->addWidget(feetSpin, 1, 1, 1, 1);

        meterSpin = new myQDoubleSpinBox(lengthFrame);
        meterSpin->setObjectName(QString::fromUtf8("meterSpin"));
        meterSpin->setContextMenuPolicy(Qt::NoContextMenu);
        meterSpin->setMaximum(1000000.000000000000000);

        gridLayout_3->addWidget(meterSpin, 1, 0, 1, 1);

        lengthLabel = new QLabel(lengthFrame);
        lengthLabel->setObjectName(QString::fromUtf8("lengthLabel"));
        lengthLabel->setMaximumSize(QSize(16777215, 20));
        lengthLabel->setFont(font);
        lengthLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lengthLabel, 0, 0, 1, 3);


        gridLayout->addWidget(lengthFrame, 1, 0, 1, 1);

        frame = new QFrame(conversionPanel);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(135, 0));
        QFont font1;
        font1.setPointSize(8);
        label->setFont(font1);

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(135, 0));
        label_3->setFont(font1);

        gridLayout_4->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(135, 0));
        label_4->setFont(font1);

        gridLayout_4->addWidget(label_4, 4, 0, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(135, 0));
        label_9->setFont(font1);

        gridLayout_4->addWidget(label_9, 5, 0, 1, 1);

        label_20 = new QLabel(frame);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(135, 0));
        label_20->setFont(font1);

        gridLayout_4->addWidget(label_20, 6, 0, 1, 1);

        label_17 = new QLabel(frame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(135, 0));
        label_17->setFont(font1);

        gridLayout_4->addWidget(label_17, 7, 0, 1, 1);

        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(135, 0));
        label_15->setFont(font1);

        gridLayout_4->addWidget(label_15, 8, 0, 1, 1);

        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(135, 0));
        label_13->setFont(font1);

        gridLayout_4->addWidget(label_13, 9, 0, 1, 1);

        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(135, 0));
        label_12->setMaximumSize(QSize(130, 16777215));
        label_12->setFont(font1);

        gridLayout_4->addWidget(label_12, 10, 0, 1, 1);

        label_21 = new QLabel(frame);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(0, 25));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_21, 0, 0, 1, 4);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(65, 0));
        label_2->setMaximumSize(QSize(40, 16777215));
        label_2->setFont(font1);

        gridLayout_4->addWidget(label_2, 1, 1, 1, 1);

        label_22 = new QLabel(frame);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(135, 0));
        label_22->setFont(font1);

        gridLayout_4->addWidget(label_22, 2, 0, 1, 1);

        label_23 = new QLabel(frame);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(65, 0));
        label_23->setMaximumSize(QSize(40, 16777215));
        label_23->setFont(font1);

        gridLayout_4->addWidget(label_23, 2, 1, 1, 1);

        label_26 = new QLabel(frame);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(65, 0));
        label_26->setMaximumSize(QSize(40, 16777215));
        label_26->setFont(font1);

        gridLayout_4->addWidget(label_26, 3, 1, 1, 1);

        label_27 = new QLabel(frame);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(65, 0));
        label_27->setMaximumSize(QSize(40, 16777215));
        label_27->setFont(font1);

        gridLayout_4->addWidget(label_27, 4, 1, 1, 1);

        label_28 = new QLabel(frame);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(65, 0));
        label_28->setMaximumSize(QSize(40, 16777215));
        label_28->setFont(font1);

        gridLayout_4->addWidget(label_28, 5, 1, 1, 1);

        label_29 = new QLabel(frame);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(65, 0));
        label_29->setMaximumSize(QSize(40, 16777215));
        label_29->setFont(font1);

        gridLayout_4->addWidget(label_29, 6, 1, 1, 1);

        label_30 = new QLabel(frame);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMinimumSize(QSize(65, 0));
        label_30->setMaximumSize(QSize(40, 16777215));
        label_30->setFont(font1);

        gridLayout_4->addWidget(label_30, 7, 1, 1, 1);

        label_31 = new QLabel(frame);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMinimumSize(QSize(65, 0));
        label_31->setMaximumSize(QSize(40, 16777215));
        label_31->setFont(font1);

        gridLayout_4->addWidget(label_31, 8, 1, 1, 1);

        label_32 = new QLabel(frame);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setMinimumSize(QSize(65, 0));
        label_32->setMaximumSize(QSize(40, 16777215));
        label_32->setFont(font1);

        gridLayout_4->addWidget(label_32, 9, 1, 1, 1);

        label_33 = new QLabel(frame);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMinimumSize(QSize(65, 0));
        label_33->setMaximumSize(QSize(40, 16777215));
        label_33->setFont(font1);

        gridLayout_4->addWidget(label_33, 10, 1, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(135, 0));
        label_6->setFont(font1);

        gridLayout_4->addWidget(label_6, 11, 0, 1, 1);

        label_25 = new QLabel(frame);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(65, 0));
        label_25->setFont(font1);

        gridLayout_4->addWidget(label_25, 11, 1, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(135, 0));
        label_7->setFont(font1);

        gridLayout_4->addWidget(label_7, 1, 2, 1, 1);

        label_24 = new QLabel(frame);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(50, 0));
        label_24->setFont(font1);

        gridLayout_4->addWidget(label_24, 1, 3, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(135, 0));
        label_8->setFont(font1);

        gridLayout_4->addWidget(label_8, 2, 2, 1, 1);

        label_34 = new QLabel(frame);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setMinimumSize(QSize(50, 0));
        label_34->setFont(font1);

        gridLayout_4->addWidget(label_34, 2, 3, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(135, 0));
        label_5->setFont(font1);

        gridLayout_4->addWidget(label_5, 3, 2, 1, 1);

        label_35 = new QLabel(frame);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMinimumSize(QSize(50, 0));
        label_35->setFont(font1);

        gridLayout_4->addWidget(label_35, 3, 3, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(135, 0));
        label_10->setFont(font1);

        gridLayout_4->addWidget(label_10, 4, 2, 1, 1);

        label_36 = new QLabel(frame);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setMinimumSize(QSize(50, 0));
        label_36->setFont(font1);

        gridLayout_4->addWidget(label_36, 4, 3, 1, 1);

        label_19 = new QLabel(frame);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(135, 0));
        label_19->setFont(font1);

        gridLayout_4->addWidget(label_19, 5, 2, 1, 1);

        label_37 = new QLabel(frame);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setMinimumSize(QSize(50, 0));
        label_37->setFont(font1);

        gridLayout_4->addWidget(label_37, 5, 3, 1, 1);

        label_18 = new QLabel(frame);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(135, 0));
        label_18->setFont(font1);

        gridLayout_4->addWidget(label_18, 6, 2, 1, 1);

        label_38 = new QLabel(frame);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setMinimumSize(QSize(50, 0));
        label_38->setFont(font1);

        gridLayout_4->addWidget(label_38, 6, 3, 1, 1);

        label_16 = new QLabel(frame);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(135, 0));
        label_16->setFont(font1);

        gridLayout_4->addWidget(label_16, 7, 2, 1, 1);

        label_39 = new QLabel(frame);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setMinimumSize(QSize(50, 0));
        label_39->setFont(font1);

        gridLayout_4->addWidget(label_39, 7, 3, 1, 1);

        label_14 = new QLabel(frame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(135, 0));
        label_14->setFont(font1);

        gridLayout_4->addWidget(label_14, 8, 2, 1, 1);

        label_40 = new QLabel(frame);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setMinimumSize(QSize(50, 0));
        label_40->setFont(font1);

        gridLayout_4->addWidget(label_40, 8, 3, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(135, 0));
        label_11->setFont(font1);

        gridLayout_4->addWidget(label_11, 9, 2, 1, 1);

        label_41 = new QLabel(frame);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setMinimumSize(QSize(50, 0));
        label_41->setFont(font1);

        gridLayout_4->addWidget(label_41, 9, 3, 1, 1);

        label_42 = new QLabel(frame);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setMinimumSize(QSize(135, 0));
        label_42->setFont(font1);

        gridLayout_4->addWidget(label_42, 10, 2, 1, 1);

        label_43 = new QLabel(frame);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setMinimumSize(QSize(50, 0));
        label_43->setFont(font1);

        gridLayout_4->addWidget(label_43, 10, 3, 1, 1);

        label_44 = new QLabel(frame);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setMinimumSize(QSize(135, 0));
        label_44->setFont(font1);

        gridLayout_4->addWidget(label_44, 11, 2, 1, 1);

        label_45 = new QLabel(frame);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setMinimumSize(QSize(50, 0));
        label_45->setFont(font1);

        gridLayout_4->addWidget(label_45, 11, 3, 1, 1);


        gridLayout->addWidget(frame, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(conversionPanel);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        buttonBox->setFont(font2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(conversionPanel);
        QObject::connect(buttonBox, SIGNAL(accepted()), conversionPanel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), conversionPanel, SLOT(reject()));

        QMetaObject::connectSlotsByName(conversionPanel);
    } // setupUi

    void retranslateUi(QDialog *conversionPanel)
    {
        conversionPanel->setWindowTitle(QCoreApplication::translate("conversionPanel", "Conversions", nullptr));
        speedLabel->setText(QCoreApplication::translate("conversionPanel", "Speed", nullptr));
        lengthLabel->setText(QCoreApplication::translate("conversionPanel", "Length", nullptr));
        label->setText(QCoreApplication::translate("conversionPanel", "Classic Steel Looping:", nullptr));
        label_3->setText(QCoreApplication::translate("conversionPanel", "Inverted (2 Seat):", nullptr));
        label_4->setText(QCoreApplication::translate("conversionPanel", "Twisted Steel (4 Seat):", nullptr));
        label_9->setText(QCoreApplication::translate("conversionPanel", "Inverted Coaster (4 Seat):", nullptr));
        label_20->setText(QCoreApplication::translate("conversionPanel", "Hyper Coaster:", nullptr));
        label_17->setText(QCoreApplication::translate("conversionPanel", "Floorless Twisted Steel:", nullptr));
        label_15->setText(QCoreApplication::translate("conversionPanel", "Stand-Up Twisted Steel:", nullptr));
        label_13->setText(QCoreApplication::translate("conversionPanel", "Hyper Coaster (4 Seat):", nullptr));
        label_12->setText(QCoreApplication::translate("conversionPanel", "Wooden Coaster (all types):", nullptr));
        label_21->setText(QCoreApplication::translate("conversionPanel", "Heartline Values", nullptr));
        label_2->setText(QCoreApplication::translate("conversionPanel", "+1.1m", nullptr));
        label_22->setText(QCoreApplication::translate("conversionPanel", "Corkscrew Coaster:", nullptr));
        label_23->setText(QCoreApplication::translate("conversionPanel", "+0.8m", nullptr));
        label_26->setText(QCoreApplication::translate("conversionPanel", "-0.9m", nullptr));
        label_27->setText(QCoreApplication::translate("conversionPanel", "+1.1m", nullptr));
        label_28->setText(QCoreApplication::translate("conversionPanel", "-1.1m", nullptr));
        label_29->setText(QCoreApplication::translate("conversionPanel", "+0.9m", nullptr));
        label_30->setText(QCoreApplication::translate("conversionPanel", "+1.3m", nullptr));
        label_31->setText(QCoreApplication::translate("conversionPanel", "+1.6m", nullptr));
        label_32->setText(QCoreApplication::translate("conversionPanel", "+1.1m", nullptr));
        label_33->setText(QCoreApplication::translate("conversionPanel", "+1.0m", nullptr));
        label_6->setText(QCoreApplication::translate("conversionPanel", "LIM Launched Coaster:", nullptr));
        label_25->setText(QCoreApplication::translate("conversionPanel", "+1.1m", nullptr));
        label_7->setText(QCoreApplication::translate("conversionPanel", "Inverted Impulse Coaster:", nullptr));
        label_24->setText(QCoreApplication::translate("conversionPanel", "-1.15m", nullptr));
        label_8->setText(QCoreApplication::translate("conversionPanel", "Vekoma Flying Dutchman:", nullptr));
        label_34->setText(QCoreApplication::translate("conversionPanel", "-0.8m", nullptr));
        label_5->setText(QCoreApplication::translate("conversionPanel", "Maurer S\303\266hne Spinning:", nullptr));
        label_35->setText(QCoreApplication::translate("conversionPanel", "+1.15m", nullptr));
        label_10->setText(QCoreApplication::translate("conversionPanel", "Vekoma Minetrain:", nullptr));
        label_36->setText(QCoreApplication::translate("conversionPanel", "+1.2m", nullptr));
        label_19->setText(QCoreApplication::translate("conversionPanel", "Gerstlauer Euro-Fighter:", nullptr));
        label_37->setText(QCoreApplication::translate("conversionPanel", "+1.1m", nullptr));
        label_18->setText(QCoreApplication::translate("conversionPanel", "Vekoma Motorbike:", nullptr));
        label_38->setText(QCoreApplication::translate("conversionPanel", "+1.1m", nullptr));
        label_16->setText(QCoreApplication::translate("conversionPanel", "Gerstlauer Bobsled:", nullptr));
        label_39->setText(QCoreApplication::translate("conversionPanel", "+1.0m", nullptr));
        label_14->setText(QCoreApplication::translate("conversionPanel", "Gerstlauer Spinning:", nullptr));
        label_40->setText(QCoreApplication::translate("conversionPanel", "+1.0m", nullptr));
        label_11->setText(QCoreApplication::translate("conversionPanel", "Steel Looping (modern):", nullptr));
        label_41->setText(QCoreApplication::translate("conversionPanel", "+1.1m", nullptr));
        label_42->setText(QCoreApplication::translate("conversionPanel", "Maurer S\303\266hne X-Car:", nullptr));
        label_43->setText(QCoreApplication::translate("conversionPanel", "+1.3m", nullptr));
        label_44->setText(QCoreApplication::translate("conversionPanel", "Zamperla Twister:", nullptr));
        label_45->setText(QCoreApplication::translate("conversionPanel", "+1.1m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class conversionPanel: public Ui_conversionPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSIONPANEL_H
