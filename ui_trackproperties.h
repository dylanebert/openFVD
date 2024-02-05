/********************************************************************************
** Form generated from reading UI file 'trackproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKPROPERTIES_H
#define UI_TRACKPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "myqdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_TrackProperties
{
public:
    QGridLayout *gridLayout;
    QFrame *trackFrame;
    QGridLayout *gridLayout_3;
    QLabel *frictionLabel;
    myQDoubleSpinBox *frictionBox;
    QLabel *heartlineLabel;
    myQDoubleSpinBox *heartlineBox;
    QLabel *colorLabel;
    QPushButton *transitionColorButton;
    QPushButton *defaultColorButton;
    QPushButton *sectionColorButton;
    QLabel *label;
    QComboBox *drawBox;
    QLabel *label_2;
    QComboBox *styleBox;
    QCheckBox *wireframeBox;
    QLabel *label_3;
    QLabel *resistanceLabel;
    myQDoubleSpinBox *resistanceBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TrackProperties)
    {
        if (TrackProperties->objectName().isEmpty())
            TrackProperties->setObjectName(QString::fromUtf8("TrackProperties"));
        TrackProperties->resize(320, 284);
        TrackProperties->setMinimumSize(QSize(320, 284));
        TrackProperties->setMaximumSize(QSize(320, 284));
        gridLayout = new QGridLayout(TrackProperties);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        trackFrame = new QFrame(TrackProperties);
        trackFrame->setObjectName(QString::fromUtf8("trackFrame"));
        trackFrame->setMaximumSize(QSize(16777215, 16777215));
        trackFrame->setFrameShape(QFrame::Panel);
        trackFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_3 = new QGridLayout(trackFrame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frictionLabel = new QLabel(trackFrame);
        frictionLabel->setObjectName(QString::fromUtf8("frictionLabel"));
        frictionLabel->setMinimumSize(QSize(140, 0));

        gridLayout_3->addWidget(frictionLabel, 0, 0, 1, 1);

        frictionBox = new myQDoubleSpinBox(trackFrame);
        frictionBox->setObjectName(QString::fromUtf8("frictionBox"));
        frictionBox->setContextMenuPolicy(Qt::NoContextMenu);
        frictionBox->setDecimals(3);
        frictionBox->setMaximum(2.000000000000000);
        frictionBox->setSingleStep(0.010000000000000);
        frictionBox->setValue(0.030000000000000);

        gridLayout_3->addWidget(frictionBox, 0, 1, 1, 2);

        heartlineLabel = new QLabel(trackFrame);
        heartlineLabel->setObjectName(QString::fromUtf8("heartlineLabel"));

        gridLayout_3->addWidget(heartlineLabel, 2, 0, 1, 1);

        heartlineBox = new myQDoubleSpinBox(trackFrame);
        heartlineBox->setObjectName(QString::fromUtf8("heartlineBox"));
        heartlineBox->setContextMenuPolicy(Qt::NoContextMenu);
        heartlineBox->setDecimals(2);
        heartlineBox->setMinimum(-5.000000000000000);
        heartlineBox->setMaximum(5.000000000000000);
        heartlineBox->setSingleStep(0.100000000000000);
        heartlineBox->setValue(1.100000000000000);

        gridLayout_3->addWidget(heartlineBox, 2, 1, 1, 2);

        colorLabel = new QLabel(trackFrame);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));

        gridLayout_3->addWidget(colorLabel, 6, 0, 1, 1);

        transitionColorButton = new QPushButton(trackFrame);
        transitionColorButton->setObjectName(QString::fromUtf8("transitionColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transitionColorButton->sizePolicy().hasHeightForWidth());
        transitionColorButton->setSizePolicy(sizePolicy);
        transitionColorButton->setMaximumSize(QSize(16777215, 21));

        gridLayout_3->addWidget(transitionColorButton, 7, 1, 1, 2);

        defaultColorButton = new QPushButton(trackFrame);
        defaultColorButton->setObjectName(QString::fromUtf8("defaultColorButton"));
        sizePolicy.setHeightForWidth(defaultColorButton->sizePolicy().hasHeightForWidth());
        defaultColorButton->setSizePolicy(sizePolicy);
        defaultColorButton->setMaximumSize(QSize(16777215, 21));

        gridLayout_3->addWidget(defaultColorButton, 6, 1, 1, 2);

        sectionColorButton = new QPushButton(trackFrame);
        sectionColorButton->setObjectName(QString::fromUtf8("sectionColorButton"));
        sizePolicy.setHeightForWidth(sectionColorButton->sizePolicy().hasHeightForWidth());
        sectionColorButton->setSizePolicy(sizePolicy);
        sectionColorButton->setMaximumSize(QSize(16777215, 21));

        gridLayout_3->addWidget(sectionColorButton, 7, 0, 1, 1);

        label = new QLabel(trackFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 4, 0, 1, 1);

        drawBox = new QComboBox(trackFrame);
        drawBox->addItem(QString());
        drawBox->addItem(QString());
        drawBox->addItem(QString());
        drawBox->setObjectName(QString::fromUtf8("drawBox"));

        gridLayout_3->addWidget(drawBox, 4, 1, 1, 2);

        label_2 = new QLabel(trackFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        styleBox = new QComboBox(trackFrame);
        styleBox->addItem(QString());
        styleBox->addItem(QString());
        styleBox->addItem(QString());
        styleBox->addItem(QString());
        styleBox->addItem(QString());
        styleBox->addItem(QString());
        styleBox->addItem(QString());
        styleBox->addItem(QString());
        styleBox->setObjectName(QString::fromUtf8("styleBox"));

        gridLayout_3->addWidget(styleBox, 3, 1, 1, 2);

        wireframeBox = new QCheckBox(trackFrame);
        wireframeBox->setObjectName(QString::fromUtf8("wireframeBox"));
        wireframeBox->setChecked(true);

        gridLayout_3->addWidget(wireframeBox, 5, 1, 1, 1);

        label_3 = new QLabel(trackFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 5, 0, 1, 1);

        resistanceLabel = new QLabel(trackFrame);
        resistanceLabel->setObjectName(QString::fromUtf8("resistanceLabel"));
        resistanceLabel->setMinimumSize(QSize(140, 0));

        gridLayout_3->addWidget(resistanceLabel, 1, 0, 1, 1);

        resistanceBox = new myQDoubleSpinBox(trackFrame);
        resistanceBox->setObjectName(QString::fromUtf8("resistanceBox"));
        resistanceBox->setContextMenuPolicy(Qt::NoContextMenu);
        resistanceBox->setDecimals(1);
        resistanceBox->setMaximum(100.000000000000000);
        resistanceBox->setSingleStep(1.000000000000000);
        resistanceBox->setValue(2.000000000000000);

        gridLayout_3->addWidget(resistanceBox, 1, 1, 1, 2);


        gridLayout->addWidget(trackFrame, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(TrackProperties);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(TrackProperties);
        QObject::connect(buttonBox, SIGNAL(accepted()), TrackProperties, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TrackProperties, SLOT(reject()));

        QMetaObject::connectSlotsByName(TrackProperties);
    } // setupUi

    void retranslateUi(QDialog *TrackProperties)
    {
        TrackProperties->setWindowTitle(QCoreApplication::translate("TrackProperties", "Dialog", nullptr));
        frictionLabel->setText(QCoreApplication::translate("TrackProperties", "Friction Parameter", nullptr));
        frictionBox->setSuffix(QCoreApplication::translate("TrackProperties", " m/m", nullptr));
        heartlineLabel->setText(QCoreApplication::translate("TrackProperties", "Heartline Height", nullptr));
        heartlineBox->setSuffix(QCoreApplication::translate("TrackProperties", " m", nullptr));
        colorLabel->setText(QCoreApplication::translate("TrackProperties", "Track Colors", nullptr));
        transitionColorButton->setText(QCoreApplication::translate("TrackProperties", "Transition", nullptr));
        defaultColorButton->setText(QCoreApplication::translate("TrackProperties", "Default", nullptr));
        sectionColorButton->setText(QCoreApplication::translate("TrackProperties", "Section", nullptr));
        label->setText(QCoreApplication::translate("TrackProperties", "Draw ...", nullptr));
        drawBox->setItemText(0, QCoreApplication::translate("TrackProperties", "Everything", nullptr));
        drawBox->setItemText(1, QCoreApplication::translate("TrackProperties", "Track only", nullptr));
        drawBox->setItemText(2, QCoreApplication::translate("TrackProperties", "Heartline only", nullptr));

        label_2->setText(QCoreApplication::translate("TrackProperties", "Track Style", nullptr));
        styleBox->setItemText(0, QCoreApplication::translate("TrackProperties", "Generic", nullptr));
        styleBox->setItemText(1, QCoreApplication::translate("TrackProperties", "Generic Flat", nullptr));
        styleBox->setItemText(2, QCoreApplication::translate("TrackProperties", "Vekoma", nullptr));
        styleBox->setItemText(3, QCoreApplication::translate("TrackProperties", "B&M", nullptr));
        styleBox->setItemText(4, QCoreApplication::translate("TrackProperties", "Triangle", nullptr));
        styleBox->setItemText(5, QCoreApplication::translate("TrackProperties", "Box", nullptr));
        styleBox->setItemText(6, QCoreApplication::translate("TrackProperties", "Small Flat", nullptr));
        styleBox->setItemText(7, QCoreApplication::translate("TrackProperties", "Double Spine", nullptr));

        wireframeBox->setText(QString());
        label_3->setText(QCoreApplication::translate("TrackProperties", "Wireframe", nullptr));
        resistanceLabel->setText(QCoreApplication::translate("TrackProperties", "Friction Coefficient", nullptr));
        resistanceBox->setSuffix(QCoreApplication::translate("TrackProperties", "e-005 m/s\302\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackProperties: public Ui_TrackProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKPROPERTIES_H
