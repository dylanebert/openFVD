/********************************************************************************
** Form generated from reading UI file 'smoothui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMOOTHUI_H
#define UI_SMOOTHUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include "myqdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_smoothUi
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QTreeWidget *smoothUnitTree;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QPushButton *newButton;
    QPushButton *removeButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *downButton;
    QToolButton *upButton;
    QFrame *optsFrame;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *iterBox;
    myQDoubleSpinBox *lengthBox;
    QFrame *regionFrame;
    QGridLayout *gridLayout_5;
    QLabel *label;
    myQDoubleSpinBox *fromBox;
    QLabel *label_2;
    myQDoubleSpinBox *toBox;
    QDialogButtonBox *buttonBox;
    QLabel *warningLabel;

    void setupUi(QDialog *smoothUi)
    {
        if (smoothUi->objectName().isEmpty())
            smoothUi->setObjectName(QString::fromUtf8("smoothUi"));
        smoothUi->resize(480, 341);
        smoothUi->setMinimumSize(QSize(480, 200));
        smoothUi->setMaximumSize(QSize(520, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../fvd++ logo files/fvd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        smoothUi->setWindowIcon(icon);
        gridLayout_4 = new QGridLayout(smoothUi);
        gridLayout_4->setSpacing(4);
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame_2 = new QFrame(smoothUi);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(-1);
        smoothUnitTree = new QTreeWidget(frame_2);
        smoothUnitTree->setObjectName(QString::fromUtf8("smoothUnitTree"));
        smoothUnitTree->setProperty("showDropIndicator", QVariant(true));
        smoothUnitTree->setDragEnabled(false);
        smoothUnitTree->setDragDropMode(QAbstractItemView::NoDragDrop);
        smoothUnitTree->setDefaultDropAction(Qt::IgnoreAction);
        smoothUnitTree->setSelectionMode(QAbstractItemView::SingleSelection);
        smoothUnitTree->setRootIsDecorated(false);

        gridLayout_2->addWidget(smoothUnitTree, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_2, 0, 0, 1, 2);

        frame_3 = new QFrame(smoothUi);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(-1);
        gridLayout_3->setContentsMargins(0, 2, 0, 2);
        newButton = new QPushButton(frame_3);
        newButton->setObjectName(QString::fromUtf8("newButton"));
        newButton->setMaximumSize(QSize(80, 21));

        gridLayout_3->addWidget(newButton, 1, 2, 1, 1);

        removeButton = new QPushButton(frame_3);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setMaximumSize(QSize(80, 21));

        gridLayout_3->addWidget(removeButton, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        downButton = new QToolButton(frame_3);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setMinimumSize(QSize(25, 0));
        downButton->setMaximumSize(QSize(25, 21));
        downButton->setArrowType(Qt::DownArrow);

        gridLayout_3->addWidget(downButton, 1, 4, 1, 1);

        upButton = new QToolButton(frame_3);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setMinimumSize(QSize(25, 0));
        upButton->setMaximumSize(QSize(25, 21));
        upButton->setSizeIncrement(QSize(0, 0));
        upButton->setPopupMode(QToolButton::DelayedPopup);
        upButton->setArrowType(Qt::UpArrow);

        gridLayout_3->addWidget(upButton, 1, 1, 1, 1);


        gridLayout_4->addWidget(frame_3, 2, 0, 1, 2);

        optsFrame = new QFrame(smoothUi);
        optsFrame->setObjectName(QString::fromUtf8("optsFrame"));
        optsFrame->setFrameShape(QFrame::Panel);
        optsFrame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(optsFrame);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(optsFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(optsFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        iterBox = new QSpinBox(optsFrame);
        iterBox->setObjectName(QString::fromUtf8("iterBox"));
        iterBox->setMinimum(1);
        iterBox->setMaximum(16);

        gridLayout->addWidget(iterBox, 1, 1, 1, 1);

        lengthBox = new myQDoubleSpinBox(optsFrame);
        lengthBox->setObjectName(QString::fromUtf8("lengthBox"));
        lengthBox->setDecimals(3);
        lengthBox->setMinimum(0.000000000000000);
        lengthBox->setMaximum(6.000000000000000);
        lengthBox->setSingleStep(0.100000000000000);
        lengthBox->setValue(0.800000000000000);

        gridLayout->addWidget(lengthBox, 0, 1, 1, 1);


        gridLayout_4->addWidget(optsFrame, 6, 0, 1, 1);

        regionFrame = new QFrame(smoothUi);
        regionFrame->setObjectName(QString::fromUtf8("regionFrame"));
        regionFrame->setFrameShape(QFrame::Panel);
        regionFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_5 = new QGridLayout(regionFrame);
        gridLayout_5->setContentsMargins(4, 4, 4, 4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(regionFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        fromBox = new myQDoubleSpinBox(regionFrame);
        fromBox->setObjectName(QString::fromUtf8("fromBox"));
        fromBox->setDecimals(3);
        fromBox->setMinimum(0.000000000000000);
        fromBox->setMaximum(900000.000000000000000);
        fromBox->setSingleStep(0.100000000000000);
        fromBox->setValue(0.800000000000000);

        gridLayout_5->addWidget(fromBox, 0, 1, 1, 1);

        label_2 = new QLabel(regionFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        toBox = new myQDoubleSpinBox(regionFrame);
        toBox->setObjectName(QString::fromUtf8("toBox"));
        toBox->setDecimals(3);
        toBox->setMinimum(0.000000000000000);
        toBox->setMaximum(900000.000000000000000);
        toBox->setSingleStep(0.100000000000000);
        toBox->setValue(0.800000000000000);

        gridLayout_5->addWidget(toBox, 1, 1, 1, 1);


        gridLayout_4->addWidget(regionFrame, 6, 1, 1, 1);

        buttonBox = new QDialogButtonBox(smoothUi);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 12, 0, 1, 2);

        warningLabel = new QLabel(smoothUi);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setMinimumSize(QSize(0, 14));
        QPalette palette;
        QBrush brush(QColor(255, 0, 4, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(128, 125, 123, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        warningLabel->setPalette(palette);
        QFont font;
        font.setPointSize(8);
        warningLabel->setFont(font);
        warningLabel->setWordWrap(true);

        gridLayout_4->addWidget(warningLabel, 1, 0, 1, 2);


        retranslateUi(smoothUi);
        QObject::connect(buttonBox, SIGNAL(accepted()), smoothUi, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), smoothUi, SLOT(reject()));

        QMetaObject::connectSlotsByName(smoothUi);
    } // setupUi

    void retranslateUi(QDialog *smoothUi)
    {
        smoothUi->setWindowTitle(QCoreApplication::translate("smoothUi", "Smoothing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = smoothUnitTree->headerItem();
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("smoothUi", "Enabled", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("smoothUi", "Iterations", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("smoothUi", "Length", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("smoothUi", "To", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("smoothUi", "From", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("smoothUi", "Region", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("smoothUi", "No.", nullptr));
        newButton->setText(QCoreApplication::translate("smoothUi", "New", nullptr));
        removeButton->setText(QCoreApplication::translate("smoothUi", "Remove", nullptr));
        downButton->setText(QString());
        upButton->setText(QString());
        label_3->setText(QCoreApplication::translate("smoothUi", "Smoothing Length", nullptr));
        label_4->setText(QCoreApplication::translate("smoothUi", "Iterations", nullptr));
        lengthBox->setSuffix(QCoreApplication::translate("smoothUi", "s", nullptr));
        label->setText(QCoreApplication::translate("smoothUi", "Smooth From", nullptr));
        fromBox->setSuffix(QCoreApplication::translate("smoothUi", "s", nullptr));
        label_2->setText(QCoreApplication::translate("smoothUi", "Smooth To", nullptr));
        toBox->setSuffix(QCoreApplication::translate("smoothUi", "s", nullptr));
        warningLabel->setText(QCoreApplication::translate("smoothUi", "Warning:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class smoothUi: public Ui_smoothUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMOOTHUI_H
