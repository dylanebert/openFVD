/********************************************************************************
** Form generated from reading UI file 'graphwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWIDGET_H
#define UI_GRAPHWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"
#include "transitionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_graphWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *graphChooser;
    QGridLayout *gridLayout;
    QTreeWidget *selTree;
    transitionWidget *transitionEditor;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QCustomPlot *plotter;
    QFrame *povLine;

    void setupUi(QWidget *graphWidget)
    {
        if (graphWidget->objectName().isEmpty())
            graphWidget->setObjectName(QString::fromUtf8("graphWidget"));
        graphWidget->setWindowModality(Qt::NonModal);
        graphWidget->resize(846, 318);
        graphWidget->setMinimumSize(QSize(0, 280));
        graphWidget->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8("fvd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        graphWidget->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(graphWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(graphWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(250, 0));
        tabWidget->setMaximumSize(QSize(300, 16777215));
        graphChooser = new QWidget();
        graphChooser->setObjectName(QString::fromUtf8("graphChooser"));
        gridLayout = new QGridLayout(graphChooser);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        selTree = new QTreeWidget(graphChooser);
        QBrush brush(QColor(255, 0, 0, 80));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(255, 0, 0, 80));
        brush1.setStyle(Qt::NoBrush);
        new QTreeWidgetItem(selTree);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(selTree);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem2->setCheckState(1, Qt::Unchecked);
        __qtreewidgetitem2->setBackground(1, brush1);
        __qtreewidgetitem2->setBackground(0, brush);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem3->setCheckState(1, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem4->setCheckState(1, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem5);
        __qtreewidgetitem6->setCheckState(1, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(__qtreewidgetitem5);
        __qtreewidgetitem7->setCheckState(1, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem9->setCheckState(1, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem10->setCheckState(1, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem11 = new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem12 = new QTreeWidgetItem(__qtreewidgetitem11);
        __qtreewidgetitem12->setCheckState(1, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem13 = new QTreeWidgetItem(__qtreewidgetitem11);
        __qtreewidgetitem13->setCheckState(1, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem14 = new QTreeWidgetItem(selTree);
        QTreeWidgetItem *__qtreewidgetitem15 = new QTreeWidgetItem(__qtreewidgetitem14);
        __qtreewidgetitem15->setCheckState(1, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem16 = new QTreeWidgetItem(__qtreewidgetitem14);
        __qtreewidgetitem16->setCheckState(1, Qt::Unchecked);
        selTree->setObjectName(QString::fromUtf8("selTree"));
        selTree->setMinimumSize(QSize(200, 0));
        selTree->setMaximumSize(QSize(300, 16777215));
        selTree->setSelectionMode(QAbstractItemView::NoSelection);
        selTree->setRootIsDecorated(true);
        selTree->setUniformRowHeights(false);
        selTree->setColumnCount(2);
        selTree->header()->setVisible(false);

        gridLayout->addWidget(selTree, 0, 0, 1, 1);

        tabWidget->addTab(graphChooser, QString());
        transitionEditor = new transitionWidget();
        transitionEditor->setObjectName(QString::fromUtf8("transitionEditor"));
        tabWidget->addTab(transitionEditor, QString());
        splitter->addWidget(tabWidget);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        plotter = new QCustomPlot(frame);
        plotter->setObjectName(QString::fromUtf8("plotter"));
        plotter->setCursor(QCursor(Qt::CrossCursor));
        plotter->setContextMenuPolicy(Qt::CustomContextMenu);
        plotter->setInputMethodHints(Qt::ImhNone);
        povLine = new QFrame(plotter);
        povLine->setObjectName(QString::fromUtf8("povLine"));
        povLine->setGeometry(QRect(5, 0, 2, 301));
        povLine->setFrameShadow(QFrame::Raised);
        povLine->setLineWidth(4);
        povLine->setMidLineWidth(0);
        povLine->setFrameShape(QFrame::VLine);

        horizontalLayout_2->addWidget(plotter);

        splitter->addWidget(frame);

        horizontalLayout->addWidget(splitter);


        retranslateUi(graphWidget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(graphWidget);
    } // setupUi

    void retranslateUi(QWidget *graphWidget)
    {
        graphWidget->setWindowTitle(QCoreApplication::translate("graphWidget", "Graphs", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = selTree->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("graphWidget", "Show", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("graphWidget", "Graph", nullptr));

        const bool __sortingEnabled = selTree->isSortingEnabled();
        selTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = selTree->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("graphWidget", "Editable Graphs", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = selTree->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("graphWidget", "Resulting Graphs", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("graphWidget", "Roll", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("graphWidget", "Banking", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem3->child(1);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("graphWidget", "Roll Speed", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem3->child(2);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("graphWidget", "Roll Accel", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("graphWidget", "Normal Force", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("graphWidget", "Normal Force", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem7->child(1);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("graphWidget", "Force Change", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem2->child(2);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("graphWidget", "Lateral Force", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem10->child(0);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("graphWidget", "Lateral Force", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem10->child(1);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("graphWidget", "Force Change", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem2->child(3);
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("graphWidget", "Geometric", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem13->child(0);
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("graphWidget", "Pitch Change", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem13->child(1);
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("graphWidget", "Yaw Change", nullptr));
        QTreeWidgetItem *___qtreewidgetitem16 = selTree->topLevelItem(2);
        ___qtreewidgetitem16->setText(0, QCoreApplication::translate("graphWidget", "Markers", nullptr));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem16->child(0);
        ___qtreewidgetitem17->setText(0, QCoreApplication::translate("graphWidget", "Section Boundaries", nullptr));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem16->child(1);
        ___qtreewidgetitem18->setText(0, QCoreApplication::translate("graphWidget", "POV Position", nullptr));
        selTree->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(graphChooser), QCoreApplication::translate("graphWidget", "Graph List", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(transitionEditor), QCoreApplication::translate("graphWidget", "Transition Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graphWidget: public Ui_graphWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWIDGET_H
