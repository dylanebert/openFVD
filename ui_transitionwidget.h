/********************************************************************************
** Form generated from reading UI file 'transitionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSITIONWIDGET_H
#define UI_TRANSITIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myqdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_transitionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *selectedFrame;
    QGridLayout *gridLayout_2;
    QLabel *captionLabel;
    myQDoubleSpinBox *lengthSpin;
    QLabel *typeLabel;
    QComboBox *transitionBox;
    myQDoubleSpinBox *changeSpin;
    QLabel *errLabel;
    QCheckBox *lockCheck;
    QFrame *quadraticFrame;
    QGridLayout *gridLayout_3;
    QComboBox *quadraticBox;
    QSpacerItem *horizontalSpacer_5;
    QFrame *quarticFrame;
    QGridLayout *gridLayout_4;
    QComboBox *quarticBox;
    myQDoubleSpinBox *quarticSpin;
    QSpacerItem *horizontalSpacer;
    QFrame *quinticFrame;
    QGridLayout *gridLayout_5;
    QComboBox *quinticBox;
    myQDoubleSpinBox *quinticSpin;
    QSpacerItem *horizontalSpacer_2;
    QFrame *timewarpFrame;
    QGridLayout *gridLayout_6;
    QLabel *centerLabel;
    QLabel *tensionLabel;
    myQDoubleSpinBox *centerSpin;
    myQDoubleSpinBox *tensionSpin;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QFrame *buttonFrame;
    QGridLayout *gridLayout_7;
    QPushButton *appendButton;
    QPushButton *removeButton;
    QPushButton *prependButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *transitionWidget)
    {
        if (transitionWidget->objectName().isEmpty())
            transitionWidget->setObjectName(QString::fromUtf8("transitionWidget"));
        transitionWidget->resize(300, 287);
        verticalLayout = new QVBoxLayout(transitionWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 0, 2, 0);
        selectedFrame = new QFrame(transitionWidget);
        selectedFrame->setObjectName(QString::fromUtf8("selectedFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectedFrame->sizePolicy().hasHeightForWidth());
        selectedFrame->setSizePolicy(sizePolicy);
        selectedFrame->setMinimumSize(QSize(0, 60));
        selectedFrame->setFrameShape(QFrame::Panel);
        selectedFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(selectedFrame);
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(8);
        gridLayout_2->setVerticalSpacing(2);
        captionLabel = new QLabel(selectedFrame);
        captionLabel->setObjectName(QString::fromUtf8("captionLabel"));
        QFont font;
        font.setPointSize(10);
        captionLabel->setFont(font);

        gridLayout_2->addWidget(captionLabel, 0, 0, 1, 1);

        lengthSpin = new myQDoubleSpinBox(selectedFrame);
        lengthSpin->setObjectName(QString::fromUtf8("lengthSpin"));
        lengthSpin->setMinimumSize(QSize(80, 0));
        lengthSpin->setFocusPolicy(Qt::ClickFocus);
        lengthSpin->setContextMenuPolicy(Qt::NoContextMenu);
        lengthSpin->setReadOnly(false);
        lengthSpin->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        lengthSpin->setKeyboardTracking(true);
        lengthSpin->setDecimals(3);
        lengthSpin->setMinimum(0.100000000000000);
        lengthSpin->setMaximum(1080.000000000000000);

        gridLayout_2->addWidget(lengthSpin, 0, 2, 1, 1);

        typeLabel = new QLabel(selectedFrame);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setFont(font);

        gridLayout_2->addWidget(typeLabel, 2, 0, 1, 1);

        transitionBox = new QComboBox(selectedFrame);
        transitionBox->addItem(QString());
        transitionBox->addItem(QString());
        transitionBox->addItem(QString());
        transitionBox->addItem(QString());
        transitionBox->addItem(QString());
        transitionBox->addItem(QString());
        transitionBox->addItem(QString());
        transitionBox->setObjectName(QString::fromUtf8("transitionBox"));
        transitionBox->setDuplicatesEnabled(false);
        transitionBox->setFrame(true);

        gridLayout_2->addWidget(transitionBox, 2, 1, 1, 1);

        changeSpin = new myQDoubleSpinBox(selectedFrame);
        changeSpin->setObjectName(QString::fromUtf8("changeSpin"));
        changeSpin->setMinimumSize(QSize(80, 0));
        changeSpin->setFocusPolicy(Qt::ClickFocus);
        changeSpin->setContextMenuPolicy(Qt::NoContextMenu);
        changeSpin->setReadOnly(false);
        changeSpin->setDecimals(3);
        changeSpin->setMinimum(-10000.000000000000000);
        changeSpin->setMaximum(10000.000000000000000);

        gridLayout_2->addWidget(changeSpin, 2, 2, 1, 1);

        errLabel = new QLabel(selectedFrame);
        errLabel->setObjectName(QString::fromUtf8("errLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(errLabel->sizePolicy().hasHeightForWidth());
        errLabel->setSizePolicy(sizePolicy1);
        errLabel->setMinimumSize(QSize(0, 25));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        QBrush brush2(QColor(128, 125, 123, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        errLabel->setPalette(palette);
        QFont font1;
        font1.setPointSize(8);
        errLabel->setFont(font1);
        errLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(errLabel, 1, 0, 1, 3);

        lockCheck = new QCheckBox(selectedFrame);
        lockCheck->setObjectName(QString::fromUtf8("lockCheck"));

        gridLayout_2->addWidget(lockCheck, 0, 1, 1, 1);


        verticalLayout->addWidget(selectedFrame);

        quadraticFrame = new QFrame(transitionWidget);
        quadraticFrame->setObjectName(QString::fromUtf8("quadraticFrame"));
        quadraticFrame->setMinimumSize(QSize(0, 30));
        quadraticFrame->setFrameShape(QFrame::Panel);
        quadraticFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_3 = new QGridLayout(quadraticFrame);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setContentsMargins(4, 4, 4, 4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        quadraticBox = new QComboBox(quadraticFrame);
        quadraticBox->addItem(QString());
        quadraticBox->addItem(QString());
        quadraticBox->addItem(QString());
        quadraticBox->setObjectName(QString::fromUtf8("quadraticBox"));
        quadraticBox->setMinimumSize(QSize(160, 0));
        quadraticBox->setDuplicatesEnabled(false);
        quadraticBox->setFrame(true);

        gridLayout_3->addWidget(quadraticBox, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 1, 1, 1);


        verticalLayout->addWidget(quadraticFrame);

        quarticFrame = new QFrame(transitionWidget);
        quarticFrame->setObjectName(QString::fromUtf8("quarticFrame"));
        quarticFrame->setMinimumSize(QSize(0, 30));
        quarticFrame->setFrameShape(QFrame::Panel);
        quarticFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_4 = new QGridLayout(quarticFrame);
        gridLayout_4->setSpacing(2);
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        quarticBox = new QComboBox(quarticFrame);
        quarticBox->addItem(QString());
        quarticBox->addItem(QString());
        quarticBox->addItem(QString());
        quarticBox->setObjectName(QString::fromUtf8("quarticBox"));
        quarticBox->setMinimumSize(QSize(170, 0));
        quarticBox->setDuplicatesEnabled(false);
        quarticBox->setFrame(true);

        gridLayout_4->addWidget(quarticBox, 0, 0, 1, 1);

        quarticSpin = new myQDoubleSpinBox(quarticFrame);
        quarticSpin->setObjectName(QString::fromUtf8("quarticSpin"));
        quarticSpin->setMinimumSize(QSize(80, 0));
        quarticSpin->setFocusPolicy(Qt::ClickFocus);
        quarticSpin->setContextMenuPolicy(Qt::NoContextMenu);
        quarticSpin->setReadOnly(false);
        quarticSpin->setDecimals(3);
        quarticSpin->setMinimum(0.000000000000000);
        quarticSpin->setMaximum(10.000000000000000);
        quarticSpin->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(quarticSpin, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);


        verticalLayout->addWidget(quarticFrame);

        quinticFrame = new QFrame(transitionWidget);
        quinticFrame->setObjectName(QString::fromUtf8("quinticFrame"));
        quinticFrame->setMinimumSize(QSize(0, 30));
        quinticFrame->setFrameShape(QFrame::Panel);
        quinticFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_5 = new QGridLayout(quinticFrame);
        gridLayout_5->setSpacing(2);
        gridLayout_5->setContentsMargins(4, 4, 4, 4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        quinticBox = new QComboBox(quinticFrame);
        quinticBox->addItem(QString());
        quinticBox->addItem(QString());
        quinticBox->addItem(QString());
        quinticBox->setObjectName(QString::fromUtf8("quinticBox"));
        quinticBox->setMinimumSize(QSize(150, 0));
        quinticBox->setDuplicatesEnabled(false);
        quinticBox->setFrame(true);

        gridLayout_5->addWidget(quinticBox, 0, 0, 1, 1);

        quinticSpin = new myQDoubleSpinBox(quinticFrame);
        quinticSpin->setObjectName(QString::fromUtf8("quinticSpin"));
        quinticSpin->setMinimumSize(QSize(80, 0));
        quinticSpin->setFocusPolicy(Qt::ClickFocus);
        quinticSpin->setContextMenuPolicy(Qt::NoContextMenu);
        quinticSpin->setReadOnly(false);
        quinticSpin->setDecimals(3);
        quinticSpin->setMinimum(2.000000000000000);
        quinticSpin->setMaximum(8.000000000000000);
        quinticSpin->setSingleStep(0.100000000000000);
        quinticSpin->setValue(5.000000000000000);

        gridLayout_5->addWidget(quinticSpin, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        verticalLayout->addWidget(quinticFrame);

        timewarpFrame = new QFrame(transitionWidget);
        timewarpFrame->setObjectName(QString::fromUtf8("timewarpFrame"));
        timewarpFrame->setMinimumSize(QSize(0, 25));
        timewarpFrame->setFrameShape(QFrame::Panel);
        timewarpFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_6 = new QGridLayout(timewarpFrame);
        gridLayout_6->setSpacing(2);
        gridLayout_6->setContentsMargins(4, 4, 4, 4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        centerLabel = new QLabel(timewarpFrame);
        centerLabel->setObjectName(QString::fromUtf8("centerLabel"));
        centerLabel->setMinimumSize(QSize(120, 0));
        centerLabel->setFont(font);

        gridLayout_6->addWidget(centerLabel, 1, 0, 1, 1);

        tensionLabel = new QLabel(timewarpFrame);
        tensionLabel->setObjectName(QString::fromUtf8("tensionLabel"));
        tensionLabel->setMinimumSize(QSize(120, 0));
        tensionLabel->setFont(font);

        gridLayout_6->addWidget(tensionLabel, 4, 0, 1, 1);

        centerSpin = new myQDoubleSpinBox(timewarpFrame);
        centerSpin->setObjectName(QString::fromUtf8("centerSpin"));
        centerSpin->setMinimumSize(QSize(80, 0));
        centerSpin->setFocusPolicy(Qt::ClickFocus);
        centerSpin->setContextMenuPolicy(Qt::NoContextMenu);
        centerSpin->setReadOnly(false);
        centerSpin->setDecimals(3);
        centerSpin->setMinimum(-10.000000000000000);
        centerSpin->setMaximum(10.000000000000000);
        centerSpin->setSingleStep(0.100000000000000);

        gridLayout_6->addWidget(centerSpin, 1, 2, 1, 1);

        tensionSpin = new myQDoubleSpinBox(timewarpFrame);
        tensionSpin->setObjectName(QString::fromUtf8("tensionSpin"));
        tensionSpin->setMinimumSize(QSize(80, 0));
        tensionSpin->setFocusPolicy(Qt::ClickFocus);
        tensionSpin->setContextMenuPolicy(Qt::NoContextMenu);
        tensionSpin->setReadOnly(false);
        tensionSpin->setDecimals(3);
        tensionSpin->setMinimum(-10.000000000000000);
        tensionSpin->setMaximum(10.000000000000000);
        tensionSpin->setSingleStep(0.100000000000000);

        gridLayout_6->addWidget(tensionSpin, 4, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 4, 1, 1, 1);

        label = new QLabel(timewarpFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        label->setFont(font2);

        gridLayout_6->addWidget(label, 0, 0, 1, 3);


        verticalLayout->addWidget(timewarpFrame);

        buttonFrame = new QFrame(transitionWidget);
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        buttonFrame->setMinimumSize(QSize(0, 25));
        buttonFrame->setFrameShape(QFrame::Panel);
        buttonFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_7 = new QGridLayout(buttonFrame);
        gridLayout_7->setSpacing(2);
        gridLayout_7->setContentsMargins(4, 4, 4, 4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        appendButton = new QPushButton(buttonFrame);
        appendButton->setObjectName(QString::fromUtf8("appendButton"));
        appendButton->setMaximumSize(QSize(80, 21));

        gridLayout_7->addWidget(appendButton, 2, 0, 1, 1);

        removeButton = new QPushButton(buttonFrame);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setMaximumSize(QSize(80, 21));

        gridLayout_7->addWidget(removeButton, 2, 4, 1, 1);

        prependButton = new QPushButton(buttonFrame);
        prependButton->setObjectName(QString::fromUtf8("prependButton"));
        prependButton->setMaximumSize(QSize(80, 21));

        gridLayout_7->addWidget(prependButton, 2, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 2, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 2, 3, 1, 1);


        verticalLayout->addWidget(buttonFrame);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(transitionWidget);

        QMetaObject::connectSlotsByName(transitionWidget);
    } // setupUi

    void retranslateUi(QWidget *transitionWidget)
    {
        transitionWidget->setWindowTitle(QCoreApplication::translate("transitionWidget", "Form", nullptr));
        captionLabel->setText(QCoreApplication::translate("transitionWidget", "Length", nullptr));
        lengthSpin->setSpecialValueText(QString());
        typeLabel->setText(QCoreApplication::translate("transitionWidget", "Type", nullptr));
        transitionBox->setItemText(0, QCoreApplication::translate("transitionWidget", "Linear", nullptr));
        transitionBox->setItemText(1, QCoreApplication::translate("transitionWidget", "Quadratic", nullptr));
        transitionBox->setItemText(2, QCoreApplication::translate("transitionWidget", "Cubic", nullptr));
        transitionBox->setItemText(3, QCoreApplication::translate("transitionWidget", "Quartic", nullptr));
        transitionBox->setItemText(4, QCoreApplication::translate("transitionWidget", "Quintic", nullptr));
        transitionBox->setItemText(5, QCoreApplication::translate("transitionWidget", "Sinusoidal", nullptr));
        transitionBox->setItemText(6, QCoreApplication::translate("transitionWidget", "Plateau", nullptr));

        errLabel->setText(QString());
        lockCheck->setText(QCoreApplication::translate("transitionWidget", "dynamic", nullptr));
        quadraticBox->setItemText(0, QCoreApplication::translate("transitionWidget", "blend in", nullptr));
        quadraticBox->setItemText(1, QCoreApplication::translate("transitionWidget", "blend out", nullptr));
        quadraticBox->setItemText(2, QCoreApplication::translate("transitionWidget", "symmetric function", nullptr));

        quarticBox->setItemText(0, QCoreApplication::translate("transitionWidget", "symmetric function", nullptr));
        quarticBox->setItemText(1, QCoreApplication::translate("transitionWidget", "opposite direction first", nullptr));
        quarticBox->setItemText(2, QCoreApplication::translate("transitionWidget", "overshoot final value", nullptr));

        quinticBox->setItemText(0, QCoreApplication::translate("transitionWidget", "simple Transition", nullptr));
        quinticBox->setItemText(1, QCoreApplication::translate("transitionWidget", "doubleBump(1)", nullptr));
        quinticBox->setItemText(2, QCoreApplication::translate("transitionWidget", "doubleBump(2)", nullptr));

        centerLabel->setText(QCoreApplication::translate("transitionWidget", "Center:", nullptr));
        tensionLabel->setText(QCoreApplication::translate("transitionWidget", "Tension:", nullptr));
        label->setText(QCoreApplication::translate("transitionWidget", "Timewarp", nullptr));
        appendButton->setText(QCoreApplication::translate("transitionWidget", "Append", nullptr));
        removeButton->setText(QCoreApplication::translate("transitionWidget", "Remove", nullptr));
        prependButton->setText(QCoreApplication::translate("transitionWidget", "Prepend", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transitionWidget: public Ui_transitionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSITIONWIDGET_H
