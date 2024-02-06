/********************************************************************************
** Form generated from reading UI file 'optionsmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSMENU_H
#define UI_OPTIONSMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include "myqdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_optionsMenu
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QComboBox *measureBox;
    QLabel *distanceLabel;
    QLabel *glInfoLabel;
    QLabel *distanceLabel_3;
    QCheckBox *gridBox;
    QLabel *distanceLabel_4;
    QPushButton *backgroundButton;
    QLabel *distanceLabel_2;
    QComboBox *glBox;
    QLabel *distanceLabel_5;
    QLabel *distanceLabel_6;
    QComboBox *shadowModeBox;
    QSlider *fovSlider;
    myQDoubleSpinBox *fovBox;
    QLabel *distanceLabel_7;
    QComboBox *meshQualityBox;
    QFrame *colorFrame;
    QGridLayout *gridLayout;
    QLabel *nBackLabel;
    QPushButton *normColor2;
    QLabel *selLabel;
    QLabel *nLineLabel;
    QPushButton *rollColor1;
    QLabel *sLineLabel;
    QLabel *normLabel;
    QLabel *sBackLabel;
    QPushButton *latColor0;
    QLabel *rollLabel;
    QPushButton *rollColor3;
    QLabel *nonSelLabel;
    QPushButton *normColor3;
    QPushButton *latColor1;
    QPushButton *pitchColor1;
    QPushButton *rollColor2;
    QPushButton *latColor2;
    QLabel *latLabel;
    QLabel *yawLabel;
    QPushButton *yawColor1;
    QPushButton *normColor1;
    QPushButton *pitchColor3;
    QPushButton *yawColor3;
    QPushButton *yawColor2;
    QPushButton *yawColor0;
    QPushButton *latColor3;
    QPushButton *pitchColor0;
    QPushButton *pitchColor2;
    QPushButton *normColor0;
    QLabel *pitchLabel;
    QLabel *nonSelLabel_2;
    QPushButton *rollColor0;

    void setupUi(QDialog *optionsMenu)
    {
        if (optionsMenu->objectName().isEmpty())
            optionsMenu->setObjectName(QString::fromUtf8("optionsMenu"));
        optionsMenu->resize(480, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(optionsMenu->sizePolicy().hasHeightForWidth());
        optionsMenu->setSizePolicy(sizePolicy);
        optionsMenu->setMinimumSize(QSize(480, 480));
        optionsMenu->setMaximumSize(QSize(480, 520));
        QIcon icon;
        icon.addFile(QString::fromUtf8("fvd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        optionsMenu->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(optionsMenu);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(optionsMenu);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        frame = new QFrame(optionsMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        measureBox = new QComboBox(frame);
        measureBox->addItem(QString());
        measureBox->addItem(QString());
        measureBox->addItem(QString());
        measureBox->setObjectName(QString::fromUtf8("measureBox"));

        gridLayout_3->addWidget(measureBox, 0, 1, 1, 3);

        distanceLabel = new QLabel(frame);
        distanceLabel->setObjectName(QString::fromUtf8("distanceLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(distanceLabel->sizePolicy().hasHeightForWidth());
        distanceLabel->setSizePolicy(sizePolicy1);
        distanceLabel->setMaximumSize(QSize(16777215, 21));
        QFont font;
        font.setPointSize(10);
        distanceLabel->setFont(font);
        distanceLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(distanceLabel, 0, 0, 1, 1);

        glInfoLabel = new QLabel(frame);
        glInfoLabel->setObjectName(QString::fromUtf8("glInfoLabel"));
        sizePolicy1.setHeightForWidth(glInfoLabel->sizePolicy().hasHeightForWidth());
        glInfoLabel->setSizePolicy(sizePolicy1);
        glInfoLabel->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setPointSize(7);
        glInfoLabel->setFont(font1);
        glInfoLabel->setAlignment(Qt::AlignCenter);
        glInfoLabel->setMargin(0);

        gridLayout_3->addWidget(glInfoLabel, 9, 0, 1, 3);

        distanceLabel_3 = new QLabel(frame);
        distanceLabel_3->setObjectName(QString::fromUtf8("distanceLabel_3"));
        sizePolicy1.setHeightForWidth(distanceLabel_3->sizePolicy().hasHeightForWidth());
        distanceLabel_3->setSizePolicy(sizePolicy1);
        distanceLabel_3->setMaximumSize(QSize(16777215, 21));
        distanceLabel_3->setFont(font);
        distanceLabel_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(distanceLabel_3, 2, 0, 1, 1);

        gridBox = new QCheckBox(frame);
        gridBox->setObjectName(QString::fromUtf8("gridBox"));
        gridBox->setChecked(true);

        gridLayout_3->addWidget(gridBox, 2, 2, 1, 2);

        distanceLabel_4 = new QLabel(frame);
        distanceLabel_4->setObjectName(QString::fromUtf8("distanceLabel_4"));
        sizePolicy1.setHeightForWidth(distanceLabel_4->sizePolicy().hasHeightForWidth());
        distanceLabel_4->setSizePolicy(sizePolicy1);
        distanceLabel_4->setMaximumSize(QSize(16777215, 21));
        distanceLabel_4->setFont(font);
        distanceLabel_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(distanceLabel_4, 3, 0, 1, 1);

        backgroundButton = new QPushButton(frame);
        backgroundButton->setObjectName(QString::fromUtf8("backgroundButton"));
        backgroundButton->setMaximumSize(QSize(16777215, 21));

        gridLayout_3->addWidget(backgroundButton, 3, 1, 1, 3);

        distanceLabel_2 = new QLabel(frame);
        distanceLabel_2->setObjectName(QString::fromUtf8("distanceLabel_2"));
        sizePolicy1.setHeightForWidth(distanceLabel_2->sizePolicy().hasHeightForWidth());
        distanceLabel_2->setSizePolicy(sizePolicy1);
        distanceLabel_2->setMaximumSize(QSize(16777215, 21));
        distanceLabel_2->setFont(font);
        distanceLabel_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(distanceLabel_2, 8, 0, 1, 1);

        glBox = new QComboBox(frame);
        glBox->addItem(QString());
        glBox->addItem(QString());
        glBox->addItem(QString());
        glBox->setObjectName(QString::fromUtf8("glBox"));

        gridLayout_3->addWidget(glBox, 8, 1, 1, 3);

        distanceLabel_5 = new QLabel(frame);
        distanceLabel_5->setObjectName(QString::fromUtf8("distanceLabel_5"));
        sizePolicy1.setHeightForWidth(distanceLabel_5->sizePolicy().hasHeightForWidth());
        distanceLabel_5->setSizePolicy(sizePolicy1);
        distanceLabel_5->setMaximumSize(QSize(16777215, 21));
        distanceLabel_5->setFont(font);
        distanceLabel_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(distanceLabel_5, 4, 0, 1, 1);

        distanceLabel_6 = new QLabel(frame);
        distanceLabel_6->setObjectName(QString::fromUtf8("distanceLabel_6"));
        sizePolicy1.setHeightForWidth(distanceLabel_6->sizePolicy().hasHeightForWidth());
        distanceLabel_6->setSizePolicy(sizePolicy1);
        distanceLabel_6->setMaximumSize(QSize(16777215, 21));
        distanceLabel_6->setFont(font);
        distanceLabel_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(distanceLabel_6, 6, 0, 1, 1);

        shadowModeBox = new QComboBox(frame);
        shadowModeBox->addItem(QString());
        shadowModeBox->addItem(QString());
        shadowModeBox->addItem(QString());
        shadowModeBox->setObjectName(QString::fromUtf8("shadowModeBox"));

        gridLayout_3->addWidget(shadowModeBox, 4, 1, 1, 3);

        fovSlider = new QSlider(frame);
        fovSlider->setObjectName(QString::fromUtf8("fovSlider"));
        fovSlider->setMinimum(600);
        fovSlider->setMaximum(1750);
        fovSlider->setPageStep(100);
        fovSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(fovSlider, 6, 1, 1, 2);

        fovBox = new myQDoubleSpinBox(frame);
        fovBox->setObjectName(QString::fromUtf8("fovBox"));
        fovBox->setDecimals(1);
        fovBox->setMinimum(60.000000000000000);
        fovBox->setMaximum(175.000000000000000);
        fovBox->setValue(90.000000000000000);

        gridLayout_3->addWidget(fovBox, 6, 3, 1, 1);

        distanceLabel_7 = new QLabel(frame);
        distanceLabel_7->setObjectName(QString::fromUtf8("distanceLabel_7"));
        sizePolicy1.setHeightForWidth(distanceLabel_7->sizePolicy().hasHeightForWidth());
        distanceLabel_7->setSizePolicy(sizePolicy1);
        distanceLabel_7->setMaximumSize(QSize(16777215, 21));
        distanceLabel_7->setFont(font);
        distanceLabel_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(distanceLabel_7, 5, 0, 1, 1);

        meshQualityBox = new QComboBox(frame);
        meshQualityBox->addItem(QString());
        meshQualityBox->addItem(QString());
        meshQualityBox->addItem(QString());
        meshQualityBox->addItem(QString());
        meshQualityBox->setObjectName(QString::fromUtf8("meshQualityBox"));

        gridLayout_3->addWidget(meshQualityBox, 5, 1, 1, 3);


        verticalLayout->addWidget(frame);

        colorFrame = new QFrame(optionsMenu);
        colorFrame->setObjectName(QString::fromUtf8("colorFrame"));
        colorFrame->setFrameShape(QFrame::Panel);
        colorFrame->setFrameShadow(QFrame::Sunken);
        colorFrame->setLineWidth(1);
        colorFrame->setMidLineWidth(1);
        gridLayout = new QGridLayout(colorFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nBackLabel = new QLabel(colorFrame);
        nBackLabel->setObjectName(QString::fromUtf8("nBackLabel"));
        nBackLabel->setMaximumSize(QSize(16777215, 20));
        nBackLabel->setFont(font);
        nBackLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nBackLabel, 1, 2, 1, 1);

        normColor2 = new QPushButton(colorFrame);
        normColor2->setObjectName(QString::fromUtf8("normColor2"));

        gridLayout->addWidget(normColor2, 4, 3, 1, 1);

        selLabel = new QLabel(colorFrame);
        selLabel->setObjectName(QString::fromUtf8("selLabel"));
        sizePolicy1.setHeightForWidth(selLabel->sizePolicy().hasHeightForWidth());
        selLabel->setSizePolicy(sizePolicy1);
        selLabel->setMaximumSize(QSize(16777215, 20));
        selLabel->setFont(font);
        selLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(selLabel, 0, 3, 1, 2);

        nLineLabel = new QLabel(colorFrame);
        nLineLabel->setObjectName(QString::fromUtf8("nLineLabel"));
        sizePolicy1.setHeightForWidth(nLineLabel->sizePolicy().hasHeightForWidth());
        nLineLabel->setSizePolicy(sizePolicy1);
        nLineLabel->setMaximumSize(QSize(16777215, 20));
        nLineLabel->setFont(font);
        nLineLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nLineLabel, 1, 1, 1, 1);

        rollColor1 = new QPushButton(colorFrame);
        rollColor1->setObjectName(QString::fromUtf8("rollColor1"));

        gridLayout->addWidget(rollColor1, 2, 2, 1, 1);

        sLineLabel = new QLabel(colorFrame);
        sLineLabel->setObjectName(QString::fromUtf8("sLineLabel"));
        sLineLabel->setMaximumSize(QSize(16777215, 20));
        sLineLabel->setFont(font);
        sLineLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(sLineLabel, 1, 3, 1, 1);

        normLabel = new QLabel(colorFrame);
        normLabel->setObjectName(QString::fromUtf8("normLabel"));
        normLabel->setFont(font);
        normLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(normLabel, 4, 0, 1, 1);

        sBackLabel = new QLabel(colorFrame);
        sBackLabel->setObjectName(QString::fromUtf8("sBackLabel"));
        sBackLabel->setMinimumSize(QSize(0, 20));
        sBackLabel->setFont(font);
        sBackLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(sBackLabel, 1, 4, 1, 1);

        latColor0 = new QPushButton(colorFrame);
        latColor0->setObjectName(QString::fromUtf8("latColor0"));

        gridLayout->addWidget(latColor0, 5, 1, 1, 1);

        rollLabel = new QLabel(colorFrame);
        rollLabel->setObjectName(QString::fromUtf8("rollLabel"));
        rollLabel->setFont(font);
        rollLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(rollLabel, 2, 0, 1, 1);

        rollColor3 = new QPushButton(colorFrame);
        rollColor3->setObjectName(QString::fromUtf8("rollColor3"));
        rollColor3->setAutoFillBackground(false);

        gridLayout->addWidget(rollColor3, 2, 4, 1, 1);

        nonSelLabel = new QLabel(colorFrame);
        nonSelLabel->setObjectName(QString::fromUtf8("nonSelLabel"));
        sizePolicy1.setHeightForWidth(nonSelLabel->sizePolicy().hasHeightForWidth());
        nonSelLabel->setSizePolicy(sizePolicy1);
        nonSelLabel->setMaximumSize(QSize(16777215, 20));
        nonSelLabel->setFont(font);
        nonSelLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nonSelLabel, 0, 1, 1, 2);

        normColor3 = new QPushButton(colorFrame);
        normColor3->setObjectName(QString::fromUtf8("normColor3"));
        normColor3->setAutoFillBackground(false);

        gridLayout->addWidget(normColor3, 4, 4, 1, 1);

        latColor1 = new QPushButton(colorFrame);
        latColor1->setObjectName(QString::fromUtf8("latColor1"));

        gridLayout->addWidget(latColor1, 5, 2, 1, 1);

        pitchColor1 = new QPushButton(colorFrame);
        pitchColor1->setObjectName(QString::fromUtf8("pitchColor1"));

        gridLayout->addWidget(pitchColor1, 6, 2, 1, 1);

        rollColor2 = new QPushButton(colorFrame);
        rollColor2->setObjectName(QString::fromUtf8("rollColor2"));

        gridLayout->addWidget(rollColor2, 2, 3, 1, 1);

        latColor2 = new QPushButton(colorFrame);
        latColor2->setObjectName(QString::fromUtf8("latColor2"));

        gridLayout->addWidget(latColor2, 5, 3, 1, 1);

        latLabel = new QLabel(colorFrame);
        latLabel->setObjectName(QString::fromUtf8("latLabel"));
        latLabel->setFont(font);
        latLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(latLabel, 5, 0, 1, 1);

        yawLabel = new QLabel(colorFrame);
        yawLabel->setObjectName(QString::fromUtf8("yawLabel"));
        yawLabel->setFont(font);
        yawLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(yawLabel, 7, 0, 1, 1);

        yawColor1 = new QPushButton(colorFrame);
        yawColor1->setObjectName(QString::fromUtf8("yawColor1"));

        gridLayout->addWidget(yawColor1, 7, 2, 1, 1);

        normColor1 = new QPushButton(colorFrame);
        normColor1->setObjectName(QString::fromUtf8("normColor1"));

        gridLayout->addWidget(normColor1, 4, 2, 1, 1);

        pitchColor3 = new QPushButton(colorFrame);
        pitchColor3->setObjectName(QString::fromUtf8("pitchColor3"));
        pitchColor3->setAutoFillBackground(false);

        gridLayout->addWidget(pitchColor3, 6, 4, 1, 1);

        yawColor3 = new QPushButton(colorFrame);
        yawColor3->setObjectName(QString::fromUtf8("yawColor3"));
        yawColor3->setAutoFillBackground(false);

        gridLayout->addWidget(yawColor3, 7, 4, 1, 1);

        yawColor2 = new QPushButton(colorFrame);
        yawColor2->setObjectName(QString::fromUtf8("yawColor2"));

        gridLayout->addWidget(yawColor2, 7, 3, 1, 1);

        yawColor0 = new QPushButton(colorFrame);
        yawColor0->setObjectName(QString::fromUtf8("yawColor0"));

        gridLayout->addWidget(yawColor0, 7, 1, 1, 1);

        latColor3 = new QPushButton(colorFrame);
        latColor3->setObjectName(QString::fromUtf8("latColor3"));
        latColor3->setAutoFillBackground(false);

        gridLayout->addWidget(latColor3, 5, 4, 1, 1);

        pitchColor0 = new QPushButton(colorFrame);
        pitchColor0->setObjectName(QString::fromUtf8("pitchColor0"));

        gridLayout->addWidget(pitchColor0, 6, 1, 1, 1);

        pitchColor2 = new QPushButton(colorFrame);
        pitchColor2->setObjectName(QString::fromUtf8("pitchColor2"));

        gridLayout->addWidget(pitchColor2, 6, 3, 1, 1);

        normColor0 = new QPushButton(colorFrame);
        normColor0->setObjectName(QString::fromUtf8("normColor0"));

        gridLayout->addWidget(normColor0, 4, 1, 1, 1);

        pitchLabel = new QLabel(colorFrame);
        pitchLabel->setObjectName(QString::fromUtf8("pitchLabel"));
        pitchLabel->setFont(font);
        pitchLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pitchLabel, 6, 0, 1, 1);

        nonSelLabel_2 = new QLabel(colorFrame);
        nonSelLabel_2->setObjectName(QString::fromUtf8("nonSelLabel_2"));
        sizePolicy1.setHeightForWidth(nonSelLabel_2->sizePolicy().hasHeightForWidth());
        nonSelLabel_2->setSizePolicy(sizePolicy1);
        nonSelLabel_2->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        nonSelLabel_2->setFont(font2);
        nonSelLabel_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nonSelLabel_2, 0, 0, 1, 1);

        rollColor0 = new QPushButton(colorFrame);
        rollColor0->setObjectName(QString::fromUtf8("rollColor0"));
        rollColor0->setFocusPolicy(Qt::StrongFocus);
        rollColor0->setAutoFillBackground(false);
        rollColor0->setAutoDefault(false);
        rollColor0->setFlat(false);

        gridLayout->addWidget(rollColor0, 2, 1, 1, 1);


        verticalLayout->addWidget(colorFrame);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(optionsMenu);
        QObject::connect(buttonBox, SIGNAL(accepted()), optionsMenu, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), optionsMenu, SLOT(reject()));

        rollColor0->setDefault(false);


        QMetaObject::connectSlotsByName(optionsMenu);
    } // setupUi

    void retranslateUi(QDialog *optionsMenu)
    {
        optionsMenu->setWindowTitle(QCoreApplication::translate("optionsMenu", "Options", nullptr));
        measureBox->setItemText(0, QCoreApplication::translate("optionsMenu", "Metric (m, m/s)", nullptr));
        measureBox->setItemText(1, QCoreApplication::translate("optionsMenu", "Metric (m, kph)", nullptr));
        measureBox->setItemText(2, QCoreApplication::translate("optionsMenu", "English (ft, mph)", nullptr));

        distanceLabel->setText(QCoreApplication::translate("optionsMenu", "Measure", nullptr));
        glInfoLabel->setText(QCoreApplication::translate("optionsMenu", "detected OpenGL driver: ", nullptr));
        distanceLabel_3->setText(QCoreApplication::translate("optionsMenu", "Show Floor Grid", nullptr));
        gridBox->setText(QString());
        distanceLabel_4->setText(QCoreApplication::translate("optionsMenu", "Background Color", nullptr));
        backgroundButton->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        distanceLabel_2->setText(QCoreApplication::translate("optionsMenu", "use OpenGL version (requires restart)", nullptr));
        glBox->setItemText(0, QCoreApplication::translate("optionsMenu", "auto detect", nullptr));
        glBox->setItemText(1, QCoreApplication::translate("optionsMenu", "use OpenGL 2/1", nullptr));
        glBox->setItemText(2, QCoreApplication::translate("optionsMenu", "force OpenGL 3", nullptr));

        distanceLabel_5->setText(QCoreApplication::translate("optionsMenu", "Shadow Quality", nullptr));
        distanceLabel_6->setText(QCoreApplication::translate("optionsMenu", "FOV", nullptr));
        shadowModeBox->setItemText(0, QCoreApplication::translate("optionsMenu", "low", nullptr));
        shadowModeBox->setItemText(1, QCoreApplication::translate("optionsMenu", "medium", nullptr));
        shadowModeBox->setItemText(2, QCoreApplication::translate("optionsMenu", "high", nullptr));

        distanceLabel_7->setText(QCoreApplication::translate("optionsMenu", "Mesh Quality", nullptr));
        meshQualityBox->setItemText(0, QCoreApplication::translate("optionsMenu", "low", nullptr));
        meshQualityBox->setItemText(1, QCoreApplication::translate("optionsMenu", "medium", nullptr));
        meshQualityBox->setItemText(2, QCoreApplication::translate("optionsMenu", "high", nullptr));
        meshQualityBox->setItemText(3, QCoreApplication::translate("optionsMenu", "extreme", nullptr));

        nBackLabel->setText(QCoreApplication::translate("optionsMenu", "background", nullptr));
        normColor2->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        selLabel->setText(QCoreApplication::translate("optionsMenu", "selected", nullptr));
        nLineLabel->setText(QCoreApplication::translate("optionsMenu", "line", nullptr));
        rollColor1->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        sLineLabel->setText(QCoreApplication::translate("optionsMenu", "line", nullptr));
        normLabel->setText(QCoreApplication::translate("optionsMenu", "Normal Force", nullptr));
        sBackLabel->setText(QCoreApplication::translate("optionsMenu", "background", nullptr));
        latColor0->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        rollLabel->setText(QCoreApplication::translate("optionsMenu", "Roll Function", nullptr));
        rollColor3->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        nonSelLabel->setText(QCoreApplication::translate("optionsMenu", "not selected", nullptr));
        normColor3->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        latColor1->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        pitchColor1->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        rollColor2->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        latColor2->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        latLabel->setText(QCoreApplication::translate("optionsMenu", "Lateral Force", nullptr));
        yawLabel->setText(QCoreApplication::translate("optionsMenu", "Yaw Change", nullptr));
        yawColor1->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        normColor1->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        pitchColor3->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        yawColor3->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        yawColor2->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        yawColor0->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        latColor3->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        pitchColor0->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        pitchColor2->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        normColor0->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
        pitchLabel->setText(QCoreApplication::translate("optionsMenu", "Pitch Change", nullptr));
        nonSelLabel_2->setText(QCoreApplication::translate("optionsMenu", "Colors", nullptr));
        rollColor0->setText(QCoreApplication::translate("optionsMenu", "Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class optionsMenu: public Ui_optionsMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSMENU_H
