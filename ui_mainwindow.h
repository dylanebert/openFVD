/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "graphwidget.h"
#include "projectwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExportAs;
    QAction *actionNew;
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionQuit;
    QAction *actionUseShader0;
    QAction *actionUseShader1;
    QAction *actionUseShader2;
    QAction *actionUseShader3;
    QAction *actionUseShader4;
    QAction *actionUseShader5;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionExport;
    QAction *actionOptions;
    QAction *actionConversion_Panel;
    QAction *actionExport_Model;
    QAction *actionExport_Model_As;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *vertSplitter;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QFrame *tabFrame;
    QGridLayout *gridLayout;
    QTabWidget *tabChooser;
    projectWidget *projectTab;
    QFrame *infoFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *infoPosLabel;
    QLabel *infoRollLabel;
    QLabel *infoPitchLabel;
    QLabel *infoDirLabel;
    QLabel *infoSpeedLabel;
    QLabel *infoNormalLabel;
    QLabel *infoLateralLabel;
    graphWidget *customPlot;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1024, 656);
        MainWindow->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8("fvd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExportAs = new QAction(MainWindow);
        actionExportAs->setObjectName(QString::fromUtf8("actionExportAs"));
        actionExportAs->setCheckable(false);
        actionExportAs->setVisible(true);
        actionExportAs->setIconVisibleInMenu(false);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionUseShader0 = new QAction(MainWindow);
        actionUseShader0->setObjectName(QString::fromUtf8("actionUseShader0"));
        actionUseShader0->setCheckable(true);
        actionUseShader0->setChecked(true);
        actionUseShader1 = new QAction(MainWindow);
        actionUseShader1->setObjectName(QString::fromUtf8("actionUseShader1"));
        actionUseShader1->setCheckable(true);
        actionUseShader2 = new QAction(MainWindow);
        actionUseShader2->setObjectName(QString::fromUtf8("actionUseShader2"));
        actionUseShader2->setCheckable(true);
        actionUseShader3 = new QAction(MainWindow);
        actionUseShader3->setObjectName(QString::fromUtf8("actionUseShader3"));
        actionUseShader3->setCheckable(true);
        actionUseShader4 = new QAction(MainWindow);
        actionUseShader4->setObjectName(QString::fromUtf8("actionUseShader4"));
        actionUseShader4->setCheckable(true);
        actionUseShader5 = new QAction(MainWindow);
        actionUseShader5->setObjectName(QString::fromUtf8("actionUseShader5"));
        actionUseShader5->setCheckable(true);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionConversion_Panel = new QAction(MainWindow);
        actionConversion_Panel->setObjectName(QString::fromUtf8("actionConversion_Panel"));
        actionExport_Model = new QAction(MainWindow);
        actionExport_Model->setObjectName(QString::fromUtf8("actionExport_Model"));
        actionExport_Model_As = new QAction(MainWindow);
        actionExport_Model_As->setObjectName(QString::fromUtf8("actionExport_Model_As"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        vertSplitter = new QSplitter(centralWidget);
        vertSplitter->setObjectName(QString::fromUtf8("vertSplitter"));
        vertSplitter->setOrientation(Qt::Vertical);
        mainFrame = new QFrame(vertSplitter);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setFrameShape(QFrame::NoFrame);
        mainFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(mainFrame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setLineWidth(5);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(4);
        tabFrame = new QFrame(splitter);
        tabFrame->setObjectName(QString::fromUtf8("tabFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabFrame->sizePolicy().hasHeightForWidth());
        tabFrame->setSizePolicy(sizePolicy1);
        tabFrame->setMaximumSize(QSize(320, 16777215));
        tabFrame->setFrameShape(QFrame::NoFrame);
        tabFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(tabFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabChooser = new QTabWidget(tabFrame);
        tabChooser->setObjectName(QString::fromUtf8("tabChooser"));
        tabChooser->setMinimumSize(QSize(320, 0));
        tabChooser->setMaximumSize(QSize(320, 16777214));
        tabChooser->setTabPosition(QTabWidget::North);
        tabChooser->setDocumentMode(false);
        tabChooser->setTabsClosable(true);
        tabChooser->setMovable(false);
        projectTab = new projectWidget();
        projectTab->setObjectName(QString::fromUtf8("projectTab"));
        tabChooser->addTab(projectTab, QString());

        gridLayout->addWidget(tabChooser, 0, 0, 1, 1);

        splitter->addWidget(tabFrame);

        verticalLayout_2->addWidget(splitter);

        infoFrame = new QFrame(mainFrame);
        infoFrame->setObjectName(QString::fromUtf8("infoFrame"));
        infoFrame->setMinimumSize(QSize(0, 22));
        infoFrame->setMaximumSize(QSize(16777215, 22));
        infoFrame->setFrameShape(QFrame::NoFrame);
        infoFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(infoFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        infoPosLabel = new QLabel(infoFrame);
        infoPosLabel->setObjectName(QString::fromUtf8("infoPosLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(110);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(infoPosLabel->sizePolicy().hasHeightForWidth());
        infoPosLabel->setSizePolicy(sizePolicy2);
        infoPosLabel->setMaximumSize(QSize(16777215, 15));
        QFont font;
        font.setPointSize(10);
        infoPosLabel->setFont(font);
        infoPosLabel->setContextMenuPolicy(Qt::NoContextMenu);
        infoPosLabel->setAutoFillBackground(false);
        infoPosLabel->setLineWidth(0);
        infoPosLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(infoPosLabel);

        infoRollLabel = new QLabel(infoFrame);
        infoRollLabel->setObjectName(QString::fromUtf8("infoRollLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(100);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(infoRollLabel->sizePolicy().hasHeightForWidth());
        infoRollLabel->setSizePolicy(sizePolicy3);
        infoRollLabel->setMaximumSize(QSize(16777215, 15));
        infoRollLabel->setFont(font);

        horizontalLayout->addWidget(infoRollLabel);

        infoPitchLabel = new QLabel(infoFrame);
        infoPitchLabel->setObjectName(QString::fromUtf8("infoPitchLabel"));
        sizePolicy3.setHeightForWidth(infoPitchLabel->sizePolicy().hasHeightForWidth());
        infoPitchLabel->setSizePolicy(sizePolicy3);
        infoPitchLabel->setMaximumSize(QSize(16777215, 15));
        infoPitchLabel->setFont(font);

        horizontalLayout->addWidget(infoPitchLabel);

        infoDirLabel = new QLabel(infoFrame);
        infoDirLabel->setObjectName(QString::fromUtf8("infoDirLabel"));
        sizePolicy3.setHeightForWidth(infoDirLabel->sizePolicy().hasHeightForWidth());
        infoDirLabel->setSizePolicy(sizePolicy3);
        infoDirLabel->setMinimumSize(QSize(0, 0));
        infoDirLabel->setMaximumSize(QSize(16777215, 15));
        infoDirLabel->setFont(font);

        horizontalLayout->addWidget(infoDirLabel);

        infoSpeedLabel = new QLabel(infoFrame);
        infoSpeedLabel->setObjectName(QString::fromUtf8("infoSpeedLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(90);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(infoSpeedLabel->sizePolicy().hasHeightForWidth());
        infoSpeedLabel->setSizePolicy(sizePolicy4);
        infoSpeedLabel->setMaximumSize(QSize(16777215, 15));
        infoSpeedLabel->setFont(font);

        horizontalLayout->addWidget(infoSpeedLabel);

        infoNormalLabel = new QLabel(infoFrame);
        infoNormalLabel->setObjectName(QString::fromUtf8("infoNormalLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(80);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(infoNormalLabel->sizePolicy().hasHeightForWidth());
        infoNormalLabel->setSizePolicy(sizePolicy5);
        infoNormalLabel->setMaximumSize(QSize(16777215, 15));
        infoNormalLabel->setFont(font);

        horizontalLayout->addWidget(infoNormalLabel);

        infoLateralLabel = new QLabel(infoFrame);
        infoLateralLabel->setObjectName(QString::fromUtf8("infoLateralLabel"));
        sizePolicy5.setHeightForWidth(infoLateralLabel->sizePolicy().hasHeightForWidth());
        infoLateralLabel->setSizePolicy(sizePolicy5);
        infoLateralLabel->setMaximumSize(QSize(16777215, 15));
        infoLateralLabel->setFont(font);

        horizontalLayout->addWidget(infoLateralLabel);


        verticalLayout_2->addWidget(infoFrame);

        vertSplitter->addWidget(mainFrame);
        customPlot = new graphWidget(vertSplitter);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy6);
        customPlot->setMinimumSize(QSize(0, 310));
        customPlot->setMaximumSize(QSize(16777215, 325));
        customPlot->setBaseSize(QSize(0, 0));
        customPlot->setCursor(QCursor(Qt::ArrowCursor));
        customPlot->setMouseTracking(true);
        customPlot->setAutoFillBackground(false);
        vertSplitter->addWidget(customPlot);

        verticalLayout->addWidget(vertSplitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExport);
        menuFile->addAction(actionExportAs);
        menuFile->addSeparator();
        menuFile->addAction(actionExport_Model_As);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuView->addAction(actionUseShader0);
        menuView->addAction(actionUseShader1);
        menuView->addAction(actionUseShader2);
        menuView->addAction(actionUseShader3);
        menuView->addAction(actionUseShader4);
        menuView->addAction(actionUseShader5);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionOptions);
        menuHelp->addAction(actionConversion_Panel);

        retranslateUi(MainWindow);

        tabChooser->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hard to find a Name", nullptr));
        actionExportAs->setText(QCoreApplication::translate("MainWindow", "Export As", nullptr));
#if QT_CONFIG(tooltip)
        actionExportAs->setToolTip(QCoreApplication::translate("MainWindow", "Export", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExportAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
#if QT_CONFIG(shortcut)
        actionLoad->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUseShader0->setText(QCoreApplication::translate("MainWindow", "Nothing", nullptr));
#if QT_CONFIG(shortcut)
        actionUseShader0->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUseShader1->setText(QCoreApplication::translate("MainWindow", "Velocity", nullptr));
#if QT_CONFIG(shortcut)
        actionUseShader1->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUseShader2->setText(QCoreApplication::translate("MainWindow", "RollSpeed", nullptr));
#if QT_CONFIG(shortcut)
        actionUseShader2->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUseShader3->setText(QCoreApplication::translate("MainWindow", "Normal Force", nullptr));
#if QT_CONFIG(shortcut)
        actionUseShader3->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUseShader4->setText(QCoreApplication::translate("MainWindow", "Lateral Force", nullptr));
#if QT_CONFIG(shortcut)
        actionUseShader4->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUseShader5->setText(QCoreApplication::translate("MainWindow", "Track Flexion", nullptr));
#if QT_CONFIG(shortcut)
        actionUseShader5->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExport->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
#if QT_CONFIG(shortcut)
        actionExport->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOptions->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        actionConversion_Panel->setText(QCoreApplication::translate("MainWindow", "Conversions", nullptr));
        actionExport_Model->setText(QCoreApplication::translate("MainWindow", "Export Model", nullptr));
        actionExport_Model_As->setText(QCoreApplication::translate("MainWindow", "Export Model As", nullptr));
        tabChooser->setTabText(tabChooser->indexOf(projectTab), QCoreApplication::translate("MainWindow", "Project", nullptr));
        infoPosLabel->setText(QCoreApplication::translate("MainWindow", "Position:", nullptr));
        infoRollLabel->setText(QCoreApplication::translate("MainWindow", "Roll:", nullptr));
        infoPitchLabel->setText(QCoreApplication::translate("MainWindow", "Pitch:", nullptr));
        infoDirLabel->setText(QCoreApplication::translate("MainWindow", "Yaw:", nullptr));
        infoSpeedLabel->setText(QCoreApplication::translate("MainWindow", "Speed:", nullptr));
        infoNormalLabel->setText(QCoreApplication::translate("MainWindow", "y-Accel:", nullptr));
        infoLateralLabel->setText(QCoreApplication::translate("MainWindow", "x-Accel:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "Visualize", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
