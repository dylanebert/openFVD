/********************************************************************************
** Form generated from reading UI file 'trackwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKWIDGET_H
#define UI_TRACKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myqdoublespinbox.h"
#include "mytreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_trackWidget
{
public:
    QVBoxLayout *verticalLayout;
    myTreeWidget *sectionListWidget;
    QHBoxLayout *buttonFrame;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *smoothButton;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QFrame *sectionFrame;
    QGridLayout *gridLayout_2;
    QLabel *timeInfo;
    QLabel *timeLabel;
    QLabel *lengthInfo;
    QLabel *lengthLabel;
    QFrame *optionsFrame;
    QGridLayout *gridLayout_6;
    QLabel *orientationLabel;
    QComboBox *orientationBox;
    QLabel *funcLabel;
    QComboBox *argumentBox;
    QFrame *anchorFrame;
    QGridLayout *gridLayout;
    QLabel *posLabel;
    QLabel *zLabel;
    myQDoubleSpinBox *yBox;
    QLabel *yLabel;
    QLabel *xLabel;
    myQDoubleSpinBox *xBox;
    myQDoubleSpinBox *zBox;
    QLabel *rLabel;
    myQDoubleSpinBox *rBox;
    QLabel *pLabel;
    myQDoubleSpinBox *pBox;
    QLabel *jLabel;
    myQDoubleSpinBox *jBox;
    QLabel *label;
    QGridLayout *gridLayout_7;
    myQDoubleSpinBox *normalBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lateralLabel;
    myQDoubleSpinBox *lateralBox;
    QLabel *normalLabel;
    QLabel *pitchChangeLabel;
    myQDoubleSpinBox *pitchChangeBox;
    QSpacerItem *horizontalSpacer_4;
    QLabel *yawChangeLabel;
    myQDoubleSpinBox *yawChangeBox;
    myQDoubleSpinBox *anchorSpeedBox;
    QFrame *curvedFrame;
    QGridLayout *gridLayout_5;
    QCheckBox *curvedSpeedCheck;
    myQDoubleSpinBox *curvedSpeedBox;
    QLabel *curvedRadiusLabel;
    QLabel *curvedLeadInLabel;
    myQDoubleSpinBox *curvedLeadInBox;
    QLabel *curvedLeadOutLabel;
    myQDoubleSpinBox *curvedLeadOutBox;
    myQDoubleSpinBox *curvedAngleBox;
    myQDoubleSpinBox *curvedRadiusBox;
    QLabel *curvedAngleLabel;
    QLabel *curvedDirectionLabel;
    myQDoubleSpinBox *curvedDirectionBox;
    QFrame *advancedFrame;
    QGridLayout *gridLayout_4;
    QCheckBox *advancedSpeedCheck;
    myQDoubleSpinBox *advancedSpeedBox;
    QFrame *straightFrame;
    QGridLayout *gridLayout_3;
    QCheckBox *straightSpeedCheck;
    myQDoubleSpinBox *straightSpeedBox;
    QLabel *sHLengthLabel;
    myQDoubleSpinBox *straightLengthBox;

    void setupUi(QWidget *trackWidget)
    {
        if (trackWidget->objectName().isEmpty())
            trackWidget->setObjectName(QString::fromUtf8("trackWidget"));
        trackWidget->resize(320, 347);
        trackWidget->setFocusPolicy(Qt::StrongFocus);
        verticalLayout = new QVBoxLayout(trackWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        sectionListWidget = new myTreeWidget(trackWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("No"));
        sectionListWidget->setHeaderItem(__qtreewidgetitem);
        sectionListWidget->setObjectName(QString::fromUtf8("sectionListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sectionListWidget->sizePolicy().hasHeightForWidth());
        sectionListWidget->setSizePolicy(sizePolicy);
        sectionListWidget->setMinimumSize(QSize(0, 0));
        sectionListWidget->setMaximumSize(QSize(16777215, 16777215));
        sectionListWidget->setBaseSize(QSize(0, 0));
        sectionListWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        sectionListWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        sectionListWidget->setRootIsDecorated(false);
        sectionListWidget->setColumnCount(3);
        sectionListWidget->header()->setMinimumSectionSize(30);

        verticalLayout->addWidget(sectionListWidget);

        buttonFrame = new QHBoxLayout();
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        buttonFrame->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonFrame->addItem(horizontalSpacer);

        addButton = new QPushButton(trackWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(80, 0));
        addButton->setMaximumSize(QSize(80, 21));

        buttonFrame->addWidget(addButton);

        deleteButton = new QPushButton(trackWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMaximumSize(QSize(80, 21));

        buttonFrame->addWidget(deleteButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonFrame->addItem(horizontalSpacer_5);

        smoothButton = new QPushButton(trackWidget);
        smoothButton->setObjectName(QString::fromUtf8("smoothButton"));
        smoothButton->setMaximumSize(QSize(80, 21));
        smoothButton->setAutoDefault(false);
        smoothButton->setFlat(false);

        buttonFrame->addWidget(smoothButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonFrame->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(buttonFrame);

        scrollArea = new QScrollArea(trackWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setMaximumSize(QSize(16777215, 200));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 304, 559));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        sectionFrame = new QFrame(scrollAreaWidgetContents);
        sectionFrame->setObjectName(QString::fromUtf8("sectionFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sectionFrame->sizePolicy().hasHeightForWidth());
        sectionFrame->setSizePolicy(sizePolicy3);
        sectionFrame->setFrameShape(QFrame::Panel);
        sectionFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(sectionFrame);
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        timeInfo = new QLabel(sectionFrame);
        timeInfo->setObjectName(QString::fromUtf8("timeInfo"));

        gridLayout_2->addWidget(timeInfo, 0, 0, 1, 1);

        timeLabel = new QLabel(sectionFrame);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        gridLayout_2->addWidget(timeLabel, 0, 1, 1, 1);

        lengthInfo = new QLabel(sectionFrame);
        lengthInfo->setObjectName(QString::fromUtf8("lengthInfo"));

        gridLayout_2->addWidget(lengthInfo, 1, 0, 1, 1);

        lengthLabel = new QLabel(sectionFrame);
        lengthLabel->setObjectName(QString::fromUtf8("lengthLabel"));

        gridLayout_2->addWidget(lengthLabel, 1, 1, 1, 1);


        verticalLayout_3->addWidget(sectionFrame);

        optionsFrame = new QFrame(scrollAreaWidgetContents);
        optionsFrame->setObjectName(QString::fromUtf8("optionsFrame"));
        sizePolicy3.setHeightForWidth(optionsFrame->sizePolicy().hasHeightForWidth());
        optionsFrame->setSizePolicy(sizePolicy3);
        optionsFrame->setMinimumSize(QSize(0, 60));
        optionsFrame->setFrameShape(QFrame::Panel);
        optionsFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_6 = new QGridLayout(optionsFrame);
        gridLayout_6->setContentsMargins(4, 4, 4, 4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        orientationLabel = new QLabel(optionsFrame);
        orientationLabel->setObjectName(QString::fromUtf8("orientationLabel"));
        QFont font;
        font.setPointSize(8);
        orientationLabel->setFont(font);

        gridLayout_6->addWidget(orientationLabel, 0, 0, 1, 1);

        orientationBox = new QComboBox(optionsFrame);
        orientationBox->addItem(QString());
        orientationBox->addItem(QString());
        orientationBox->setObjectName(QString::fromUtf8("orientationBox"));
        orientationBox->setMaximumSize(QSize(120, 16777215));
        orientationBox->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(orientationBox, 0, 1, 1, 1);

        funcLabel = new QLabel(optionsFrame);
        funcLabel->setObjectName(QString::fromUtf8("funcLabel"));
        funcLabel->setFont(font);

        gridLayout_6->addWidget(funcLabel, 1, 0, 1, 1);

        argumentBox = new QComboBox(optionsFrame);
        argumentBox->addItem(QString());
        argumentBox->addItem(QString());
        argumentBox->setObjectName(QString::fromUtf8("argumentBox"));
        argumentBox->setMaximumSize(QSize(120, 16777215));
        argumentBox->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(argumentBox, 1, 1, 1, 1);


        verticalLayout_3->addWidget(optionsFrame);

        anchorFrame = new QFrame(scrollAreaWidgetContents);
        anchorFrame->setObjectName(QString::fromUtf8("anchorFrame"));
        sizePolicy3.setHeightForWidth(anchorFrame->sizePolicy().hasHeightForWidth());
        anchorFrame->setSizePolicy(sizePolicy3);
        anchorFrame->setFrameShape(QFrame::Panel);
        anchorFrame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(anchorFrame);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        posLabel = new QLabel(anchorFrame);
        posLabel->setObjectName(QString::fromUtf8("posLabel"));
        posLabel->setMaximumSize(QSize(16777215, 1677215));

        gridLayout->addWidget(posLabel, 0, 0, 1, 6);

        zLabel = new QLabel(anchorFrame);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));
        zLabel->setLayoutDirection(Qt::LeftToRight);
        zLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(zLabel, 1, 4, 1, 1);

        yBox = new myQDoubleSpinBox(anchorFrame);
        yBox->setObjectName(QString::fromUtf8("yBox"));
        yBox->setMaximumSize(QSize(80, 16777215));
        yBox->setFocusPolicy(Qt::WheelFocus);
        yBox->setContextMenuPolicy(Qt::NoContextMenu);
        yBox->setDecimals(3);
        yBox->setMinimum(-9999.989999999999782);
        yBox->setMaximum(9999.989999999999782);

        gridLayout->addWidget(yBox, 1, 3, 1, 1);

        yLabel = new QLabel(anchorFrame);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        yLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(yLabel, 1, 2, 1, 1);

        xLabel = new QLabel(anchorFrame);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(xLabel, 1, 0, 1, 1);

        xBox = new myQDoubleSpinBox(anchorFrame);
        xBox->setObjectName(QString::fromUtf8("xBox"));
        xBox->setMaximumSize(QSize(80, 16777215));
        xBox->setFocusPolicy(Qt::WheelFocus);
        xBox->setContextMenuPolicy(Qt::NoContextMenu);
        xBox->setDecimals(3);
        xBox->setMinimum(-9999.989999999999782);
        xBox->setMaximum(9999.989999999999782);

        gridLayout->addWidget(xBox, 1, 1, 1, 1);

        zBox = new myQDoubleSpinBox(anchorFrame);
        zBox->setObjectName(QString::fromUtf8("zBox"));
        zBox->setMaximumSize(QSize(80, 16777215));
        zBox->setFocusPolicy(Qt::WheelFocus);
        zBox->setContextMenuPolicy(Qt::NoContextMenu);
        zBox->setDecimals(3);
        zBox->setMinimum(-9999.989999999999782);
        zBox->setMaximum(9999.989999999999782);

        gridLayout->addWidget(zBox, 1, 5, 1, 1);

        rLabel = new QLabel(anchorFrame);
        rLabel->setObjectName(QString::fromUtf8("rLabel"));
        rLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(rLabel, 2, 0, 1, 1);

        rBox = new myQDoubleSpinBox(anchorFrame);
        rBox->setObjectName(QString::fromUtf8("rBox"));
        rBox->setMaximumSize(QSize(80, 16777215));
        rBox->setFocusPolicy(Qt::WheelFocus);
        rBox->setContextMenuPolicy(Qt::NoContextMenu);
        rBox->setDecimals(3);
        rBox->setMinimum(-1800.000000000000000);
        rBox->setMaximum(1800.000000000000000);
        rBox->setValue(0.000000000000000);

        gridLayout->addWidget(rBox, 2, 1, 1, 1);

        pLabel = new QLabel(anchorFrame);
        pLabel->setObjectName(QString::fromUtf8("pLabel"));
        pLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(pLabel, 2, 2, 1, 1);

        pBox = new myQDoubleSpinBox(anchorFrame);
        pBox->setObjectName(QString::fromUtf8("pBox"));
        pBox->setFocusPolicy(Qt::WheelFocus);
        pBox->setContextMenuPolicy(Qt::NoContextMenu);
        pBox->setDecimals(3);
        pBox->setMinimum(-90.000000000000000);
        pBox->setMaximum(90.000000000000000);

        gridLayout->addWidget(pBox, 2, 3, 1, 1);

        jLabel = new QLabel(anchorFrame);
        jLabel->setObjectName(QString::fromUtf8("jLabel"));
        jLabel->setLayoutDirection(Qt::LeftToRight);
        jLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(jLabel, 2, 4, 1, 1);

        jBox = new myQDoubleSpinBox(anchorFrame);
        jBox->setObjectName(QString::fromUtf8("jBox"));
        jBox->setMaximumSize(QSize(80, 16777215));
        jBox->setFocusPolicy(Qt::WheelFocus);
        jBox->setContextMenuPolicy(Qt::NoContextMenu);
        jBox->setDecimals(3);
        jBox->setMinimum(-1800.000000000000000);
        jBox->setMaximum(1800.000000000000000);

        gridLayout->addWidget(jBox, 2, 5, 1, 1);

        label = new QLabel(anchorFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 3);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 5);
        normalBox = new myQDoubleSpinBox(anchorFrame);
        normalBox->setObjectName(QString::fromUtf8("normalBox"));
        normalBox->setMaximumSize(QSize(80, 16777215));
        normalBox->setFocusPolicy(Qt::WheelFocus);
        normalBox->setContextMenuPolicy(Qt::NoContextMenu);
        normalBox->setDecimals(3);
        normalBox->setMinimum(-20.000000000000000);
        normalBox->setMaximum(20.000000000000000);
        normalBox->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(normalBox, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        lateralLabel = new QLabel(anchorFrame);
        lateralLabel->setObjectName(QString::fromUtf8("lateralLabel"));
        lateralLabel->setLayoutDirection(Qt::LeftToRight);
        lateralLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(lateralLabel, 0, 3, 1, 1);

        lateralBox = new myQDoubleSpinBox(anchorFrame);
        lateralBox->setObjectName(QString::fromUtf8("lateralBox"));
        lateralBox->setMaximumSize(QSize(80, 16777215));
        lateralBox->setFocusPolicy(Qt::WheelFocus);
        lateralBox->setContextMenuPolicy(Qt::NoContextMenu);
        lateralBox->setDecimals(3);
        lateralBox->setMinimum(-15.000000000000000);
        lateralBox->setMaximum(15.000000000000000);
        lateralBox->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(lateralBox, 0, 4, 1, 1);

        normalLabel = new QLabel(anchorFrame);
        normalLabel->setObjectName(QString::fromUtf8("normalLabel"));
        normalLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(normalLabel, 0, 0, 1, 1);

        pitchChangeLabel = new QLabel(anchorFrame);
        pitchChangeLabel->setObjectName(QString::fromUtf8("pitchChangeLabel"));
        pitchChangeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(pitchChangeLabel, 1, 0, 1, 1);

        pitchChangeBox = new myQDoubleSpinBox(anchorFrame);
        pitchChangeBox->setObjectName(QString::fromUtf8("pitchChangeBox"));
        pitchChangeBox->setMaximumSize(QSize(80, 16777215));
        pitchChangeBox->setFocusPolicy(Qt::WheelFocus);
        pitchChangeBox->setContextMenuPolicy(Qt::NoContextMenu);
        pitchChangeBox->setDecimals(3);
        pitchChangeBox->setMinimum(-1000000000.000000000000000);
        pitchChangeBox->setMaximum(1000000000.000000000000000);

        gridLayout_7->addWidget(pitchChangeBox, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        yawChangeLabel = new QLabel(anchorFrame);
        yawChangeLabel->setObjectName(QString::fromUtf8("yawChangeLabel"));
        yawChangeLabel->setLayoutDirection(Qt::LeftToRight);
        yawChangeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(yawChangeLabel, 1, 3, 1, 1);

        yawChangeBox = new myQDoubleSpinBox(anchorFrame);
        yawChangeBox->setObjectName(QString::fromUtf8("yawChangeBox"));
        yawChangeBox->setMaximumSize(QSize(80, 16777215));
        yawChangeBox->setFocusPolicy(Qt::WheelFocus);
        yawChangeBox->setContextMenuPolicy(Qt::NoContextMenu);
        yawChangeBox->setDecimals(3);
        yawChangeBox->setMinimum(-1000000000.000000000000000);
        yawChangeBox->setMaximum(1000000000.000000000000000);

        gridLayout_7->addWidget(yawChangeBox, 1, 4, 1, 1);


        gridLayout->addLayout(gridLayout_7, 6, 0, 1, 6);

        anchorSpeedBox = new myQDoubleSpinBox(anchorFrame);
        anchorSpeedBox->setObjectName(QString::fromUtf8("anchorSpeedBox"));
        anchorSpeedBox->setMaximumSize(QSize(80, 16777215));
        anchorSpeedBox->setFocusPolicy(Qt::WheelFocus);
        anchorSpeedBox->setContextMenuPolicy(Qt::NoContextMenu);
        anchorSpeedBox->setDecimals(3);
        anchorSpeedBox->setMinimum(0.100000000000000);
        anchorSpeedBox->setMaximum(500.000000000000000);

        gridLayout->addWidget(anchorSpeedBox, 4, 3, 1, 1);


        verticalLayout_3->addWidget(anchorFrame);

        curvedFrame = new QFrame(scrollAreaWidgetContents);
        curvedFrame->setObjectName(QString::fromUtf8("curvedFrame"));
        sizePolicy3.setHeightForWidth(curvedFrame->sizePolicy().hasHeightForWidth());
        curvedFrame->setSizePolicy(sizePolicy3);
        curvedFrame->setFrameShape(QFrame::Panel);
        curvedFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_5 = new QGridLayout(curvedFrame);
        gridLayout_5->setContentsMargins(4, 4, 4, 4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        curvedSpeedCheck = new QCheckBox(curvedFrame);
        curvedSpeedCheck->setObjectName(QString::fromUtf8("curvedSpeedCheck"));
        curvedSpeedCheck->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(curvedSpeedCheck, 0, 0, 1, 1);

        curvedSpeedBox = new myQDoubleSpinBox(curvedFrame);
        curvedSpeedBox->setObjectName(QString::fromUtf8("curvedSpeedBox"));
        curvedSpeedBox->setFocusPolicy(Qt::WheelFocus);
        curvedSpeedBox->setContextMenuPolicy(Qt::NoContextMenu);
        curvedSpeedBox->setDecimals(3);
        curvedSpeedBox->setMinimum(0.100000000000000);
        curvedSpeedBox->setMaximum(500.000000000000000);

        gridLayout_5->addWidget(curvedSpeedBox, 0, 1, 1, 1);

        curvedRadiusLabel = new QLabel(curvedFrame);
        curvedRadiusLabel->setObjectName(QString::fromUtf8("curvedRadiusLabel"));

        gridLayout_5->addWidget(curvedRadiusLabel, 1, 0, 1, 1);

        curvedLeadInLabel = new QLabel(curvedFrame);
        curvedLeadInLabel->setObjectName(QString::fromUtf8("curvedLeadInLabel"));

        gridLayout_5->addWidget(curvedLeadInLabel, 4, 0, 1, 1);

        curvedLeadInBox = new myQDoubleSpinBox(curvedFrame);
        curvedLeadInBox->setObjectName(QString::fromUtf8("curvedLeadInBox"));
        curvedLeadInBox->setFocusPolicy(Qt::WheelFocus);
        curvedLeadInBox->setContextMenuPolicy(Qt::NoContextMenu);
        curvedLeadInBox->setDecimals(3);
        curvedLeadInBox->setMaximum(500.000000000000000);

        gridLayout_5->addWidget(curvedLeadInBox, 4, 1, 1, 1);

        curvedLeadOutLabel = new QLabel(curvedFrame);
        curvedLeadOutLabel->setObjectName(QString::fromUtf8("curvedLeadOutLabel"));

        gridLayout_5->addWidget(curvedLeadOutLabel, 5, 0, 1, 1);

        curvedLeadOutBox = new myQDoubleSpinBox(curvedFrame);
        curvedLeadOutBox->setObjectName(QString::fromUtf8("curvedLeadOutBox"));
        curvedLeadOutBox->setFocusPolicy(Qt::WheelFocus);
        curvedLeadOutBox->setContextMenuPolicy(Qt::NoContextMenu);
        curvedLeadOutBox->setDecimals(3);
        curvedLeadOutBox->setMaximum(500.000000000000000);

        gridLayout_5->addWidget(curvedLeadOutBox, 5, 1, 1, 1);

        curvedAngleBox = new myQDoubleSpinBox(curvedFrame);
        curvedAngleBox->setObjectName(QString::fromUtf8("curvedAngleBox"));
        curvedAngleBox->setFocusPolicy(Qt::WheelFocus);
        curvedAngleBox->setContextMenuPolicy(Qt::NoContextMenu);
        curvedAngleBox->setDecimals(3);
        curvedAngleBox->setMinimum(1.000000000000000);
        curvedAngleBox->setMaximum(5000.000000000000000);

        gridLayout_5->addWidget(curvedAngleBox, 2, 1, 1, 1);

        curvedRadiusBox = new myQDoubleSpinBox(curvedFrame);
        curvedRadiusBox->setObjectName(QString::fromUtf8("curvedRadiusBox"));
        curvedRadiusBox->setFocusPolicy(Qt::WheelFocus);
        curvedRadiusBox->setContextMenuPolicy(Qt::NoContextMenu);
        curvedRadiusBox->setDecimals(3);
        curvedRadiusBox->setMinimum(1.000000000000000);
        curvedRadiusBox->setMaximum(500.000000000000000);

        gridLayout_5->addWidget(curvedRadiusBox, 1, 1, 1, 1);

        curvedAngleLabel = new QLabel(curvedFrame);
        curvedAngleLabel->setObjectName(QString::fromUtf8("curvedAngleLabel"));

        gridLayout_5->addWidget(curvedAngleLabel, 2, 0, 1, 1);

        curvedDirectionLabel = new QLabel(curvedFrame);
        curvedDirectionLabel->setObjectName(QString::fromUtf8("curvedDirectionLabel"));

        gridLayout_5->addWidget(curvedDirectionLabel, 3, 0, 1, 1);

        curvedDirectionBox = new myQDoubleSpinBox(curvedFrame);
        curvedDirectionBox->setObjectName(QString::fromUtf8("curvedDirectionBox"));
        curvedDirectionBox->setFocusPolicy(Qt::WheelFocus);
        curvedDirectionBox->setContextMenuPolicy(Qt::NoContextMenu);
        curvedDirectionBox->setDecimals(3);
        curvedDirectionBox->setMinimum(-180.000000000000000);
        curvedDirectionBox->setMaximum(180.000000000000000);

        gridLayout_5->addWidget(curvedDirectionBox, 3, 1, 1, 1);


        verticalLayout_3->addWidget(curvedFrame);

        advancedFrame = new QFrame(scrollAreaWidgetContents);
        advancedFrame->setObjectName(QString::fromUtf8("advancedFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(advancedFrame->sizePolicy().hasHeightForWidth());
        advancedFrame->setSizePolicy(sizePolicy4);
        advancedFrame->setFrameShape(QFrame::Panel);
        advancedFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_4 = new QGridLayout(advancedFrame);
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        advancedSpeedCheck = new QCheckBox(advancedFrame);
        advancedSpeedCheck->setObjectName(QString::fromUtf8("advancedSpeedCheck"));
        advancedSpeedCheck->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(advancedSpeedCheck, 0, 0, 1, 1);

        advancedSpeedBox = new myQDoubleSpinBox(advancedFrame);
        advancedSpeedBox->setObjectName(QString::fromUtf8("advancedSpeedBox"));
        advancedSpeedBox->setFocusPolicy(Qt::WheelFocus);
        advancedSpeedBox->setContextMenuPolicy(Qt::NoContextMenu);
        advancedSpeedBox->setDecimals(3);
        advancedSpeedBox->setMinimum(0.100000000000000);
        advancedSpeedBox->setMaximum(500.000000000000000);

        gridLayout_4->addWidget(advancedSpeedBox, 0, 1, 1, 1);


        verticalLayout_3->addWidget(advancedFrame);

        straightFrame = new QFrame(scrollAreaWidgetContents);
        straightFrame->setObjectName(QString::fromUtf8("straightFrame"));
        sizePolicy3.setHeightForWidth(straightFrame->sizePolicy().hasHeightForWidth());
        straightFrame->setSizePolicy(sizePolicy3);
        straightFrame->setFrameShape(QFrame::Panel);
        straightFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_3 = new QGridLayout(straightFrame);
        gridLayout_3->setContentsMargins(4, 4, 4, 4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        straightSpeedCheck = new QCheckBox(straightFrame);
        straightSpeedCheck->setObjectName(QString::fromUtf8("straightSpeedCheck"));

        gridLayout_3->addWidget(straightSpeedCheck, 0, 0, 1, 1);

        straightSpeedBox = new myQDoubleSpinBox(straightFrame);
        straightSpeedBox->setObjectName(QString::fromUtf8("straightSpeedBox"));
        straightSpeedBox->setFocusPolicy(Qt::WheelFocus);
        straightSpeedBox->setContextMenuPolicy(Qt::NoContextMenu);
        straightSpeedBox->setDecimals(3);
        straightSpeedBox->setMinimum(0.100000000000000);
        straightSpeedBox->setMaximum(500.000000000000000);

        gridLayout_3->addWidget(straightSpeedBox, 0, 1, 1, 1);

        sHLengthLabel = new QLabel(straightFrame);
        sHLengthLabel->setObjectName(QString::fromUtf8("sHLengthLabel"));

        gridLayout_3->addWidget(sHLengthLabel, 1, 0, 1, 1);

        straightLengthBox = new myQDoubleSpinBox(straightFrame);
        straightLengthBox->setObjectName(QString::fromUtf8("straightLengthBox"));
        straightLengthBox->setFocusPolicy(Qt::WheelFocus);
        straightLengthBox->setContextMenuPolicy(Qt::NoContextMenu);
        straightLengthBox->setDecimals(3);
        straightLengthBox->setMinimum(0.100000000000000);
        straightLengthBox->setMaximum(500.000000000000000);

        gridLayout_3->addWidget(straightLengthBox, 1, 1, 1, 1);


        verticalLayout_3->addWidget(straightFrame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(trackWidget);

        smoothButton->setDefault(false);


        QMetaObject::connectSlotsByName(trackWidget);
    } // setupUi

    void retranslateUi(QWidget *trackWidget)
    {
        trackWidget->setWindowTitle(QCoreApplication::translate("trackWidget", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = sectionListWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("trackWidget", "Type", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("trackWidget", "Name", nullptr));
        addButton->setText(QCoreApplication::translate("trackWidget", "Add...", nullptr));
        deleteButton->setText(QCoreApplication::translate("trackWidget", "Delete", nullptr));
        smoothButton->setText(QCoreApplication::translate("trackWidget", "Smoothing", nullptr));
        timeInfo->setText(QCoreApplication::translate("trackWidget", "section time:", nullptr));
        timeLabel->setText(QString());
        lengthInfo->setText(QCoreApplication::translate("trackWidget", "section length:", nullptr));
        lengthLabel->setText(QString());
        orientationLabel->setText(QCoreApplication::translate("trackWidget", "Orientation", nullptr));
        orientationBox->setItemText(0, QCoreApplication::translate("trackWidget", "Quaternion", nullptr));
        orientationBox->setItemText(1, QCoreApplication::translate("trackWidget", "Euler", nullptr));

        funcLabel->setText(QCoreApplication::translate("trackWidget", "Function with respect to", nullptr));
        argumentBox->setItemText(0, QCoreApplication::translate("trackWidget", "Time", nullptr));
        argumentBox->setItemText(1, QCoreApplication::translate("trackWidget", "Distance", nullptr));

        posLabel->setText(QCoreApplication::translate("trackWidget", "Position:", nullptr));
        zLabel->setText(QCoreApplication::translate("trackWidget", "Z", nullptr));
        yLabel->setText(QCoreApplication::translate("trackWidget", "Y", nullptr));
        xLabel->setText(QCoreApplication::translate("trackWidget", "X", nullptr));
        rLabel->setText(QCoreApplication::translate("trackWidget", "R", nullptr));
        rBox->setSuffix(QCoreApplication::translate("trackWidget", "\302\260", nullptr));
        pLabel->setText(QCoreApplication::translate("trackWidget", "P", nullptr));
        pBox->setSuffix(QCoreApplication::translate("trackWidget", "\302\260", nullptr));
        jLabel->setText(QCoreApplication::translate("trackWidget", "J", nullptr));
        jBox->setSuffix(QCoreApplication::translate("trackWidget", "\302\260", nullptr));
        label->setText(QCoreApplication::translate("trackWidget", "Speed:", nullptr));
        normalBox->setSuffix(QCoreApplication::translate("trackWidget", "g", nullptr));
        lateralLabel->setText(QCoreApplication::translate("trackWidget", "Lateral", nullptr));
        lateralBox->setSuffix(QCoreApplication::translate("trackWidget", "g", nullptr));
        normalLabel->setText(QCoreApplication::translate("trackWidget", "Normal", nullptr));
        pitchChangeLabel->setText(QCoreApplication::translate("trackWidget", "P/s", nullptr));
        pitchChangeBox->setSuffix(QCoreApplication::translate("trackWidget", "\302\260/s", nullptr));
        yawChangeLabel->setText(QCoreApplication::translate("trackWidget", "J/s", nullptr));
        yawChangeBox->setSuffix(QCoreApplication::translate("trackWidget", "\302\260/s", nullptr));
        curvedSpeedCheck->setText(QCoreApplication::translate("trackWidget", "fixed speed", nullptr));
        curvedRadiusLabel->setText(QCoreApplication::translate("trackWidget", "Track Radius:", nullptr));
        curvedLeadInLabel->setText(QCoreApplication::translate("trackWidget", "Lead In:", nullptr));
        curvedLeadInBox->setSuffix(QCoreApplication::translate("trackWidget", "\302\260", nullptr));
        curvedLeadOutLabel->setText(QCoreApplication::translate("trackWidget", "Lead Out:", nullptr));
        curvedLeadOutBox->setSuffix(QCoreApplication::translate("trackWidget", "\302\260", nullptr));
        curvedAngleBox->setSuffix(QCoreApplication::translate("trackWidget", "\302\260", nullptr));
        curvedAngleLabel->setText(QCoreApplication::translate("trackWidget", "Total Angle:", nullptr));
        curvedDirectionLabel->setText(QCoreApplication::translate("trackWidget", "Direction:", nullptr));
        curvedDirectionBox->setSuffix(QCoreApplication::translate("trackWidget", "\302\260", nullptr));
        advancedSpeedCheck->setText(QCoreApplication::translate("trackWidget", "fixed speed", nullptr));
        straightSpeedCheck->setText(QCoreApplication::translate("trackWidget", "fixed speed", nullptr));
        sHLengthLabel->setText(QCoreApplication::translate("trackWidget", "Length of Heartline:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class trackWidget: public Ui_trackWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKWIDGET_H
