/********************************************************************************
** Form generated from reading UI file 'projectwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTWIDGET_H
#define UI_PROJECTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projectWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QFrame *frame2;
    QGridLayout *gridLayout;
    QLineEdit *texEdit;
    QPushButton *texChooser;
    QLabel *texLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteButton;
    QTreeWidget *trackListWidget;
    QPushButton *propertyButton;
    QPushButton *editButton;

    void setupUi(QWidget *projectWidget)
    {
        if (projectWidget->objectName().isEmpty())
            projectWidget->setObjectName(QString::fromUtf8("projectWidget"));
        projectWidget->resize(302, 432);
        projectWidget->setFocusPolicy(Qt::StrongFocus);
        verticalLayout = new QVBoxLayout(projectWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(projectWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame2 = new QFrame(frame);
        frame2->setObjectName(QString::fromUtf8("frame2"));
        frame2->setMaximumSize(QSize(16777215, 100));
        frame2->setFrameShape(QFrame::Panel);
        frame2->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frame2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        texEdit = new QLineEdit(frame2);
        texEdit->setObjectName(QString::fromUtf8("texEdit"));

        gridLayout->addWidget(texEdit, 1, 0, 1, 2);

        texChooser = new QPushButton(frame2);
        texChooser->setObjectName(QString::fromUtf8("texChooser"));
        texChooser->setMaximumSize(QSize(16777215, 21));

        gridLayout->addWidget(texChooser, 1, 2, 1, 1);

        texLabel = new QLabel(frame2);
        texLabel->setObjectName(QString::fromUtf8("texLabel"));

        gridLayout->addWidget(texLabel, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame2, 0, 0, 1, 4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(80, 0));
        addButton->setMaximumSize(QSize(16777215, 21));
        addButton->setAutoDefault(false);
        addButton->setFlat(false);

        gridLayout_2->addWidget(addButton, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 3, 1, 1);

        deleteButton = new QPushButton(frame);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(80, 0));
        deleteButton->setMaximumSize(QSize(16777215, 21));
        QFont font;
        font.setPointSize(9);
        deleteButton->setFont(font);
        deleteButton->setAutoDefault(false);
        deleteButton->setFlat(false);

        gridLayout_2->addWidget(deleteButton, 2, 2, 1, 1);

        trackListWidget = new QTreeWidget(frame);
        trackListWidget->setObjectName(QString::fromUtf8("trackListWidget"));
        trackListWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        trackListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        trackListWidget->setRootIsDecorated(false);
        trackListWidget->setColumnCount(3);
        trackListWidget->header()->setMinimumSectionSize(30);
        trackListWidget->header()->setDefaultSectionSize(80);

        gridLayout_2->addWidget(trackListWidget, 1, 0, 1, 4);

        propertyButton = new QPushButton(frame);
        propertyButton->setObjectName(QString::fromUtf8("propertyButton"));
        propertyButton->setMinimumSize(QSize(80, 0));
        propertyButton->setMaximumSize(QSize(16777215, 21));
        propertyButton->setAutoDefault(false);
        propertyButton->setFlat(false);

        gridLayout_2->addWidget(propertyButton, 3, 2, 1, 1);

        editButton = new QPushButton(frame);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setMinimumSize(QSize(80, 0));
        editButton->setMaximumSize(QSize(16777215, 21));
        editButton->setAutoDefault(false);
        editButton->setFlat(false);

        gridLayout_2->addWidget(editButton, 3, 1, 1, 1);


        verticalLayout->addWidget(frame);


        retranslateUi(projectWidget);

        addButton->setDefault(false);
        deleteButton->setDefault(false);
        propertyButton->setDefault(false);
        editButton->setDefault(false);


        QMetaObject::connectSlotsByName(projectWidget);
    } // setupUi

    void retranslateUi(QWidget *projectWidget)
    {
        projectWidget->setWindowTitle(QCoreApplication::translate("projectWidget", "Form", nullptr));
        texChooser->setText(QCoreApplication::translate("projectWidget", "Browse", nullptr));
        texLabel->setText(QCoreApplication::translate("projectWidget", "Ground Texture", nullptr));
        addButton->setText(QCoreApplication::translate("projectWidget", "Add...", nullptr));
        deleteButton->setText(QCoreApplication::translate("projectWidget", "Delete", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = trackListWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("projectWidget", "Show", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("projectWidget", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("projectWidget", "No", nullptr));
        propertyButton->setText(QCoreApplication::translate("projectWidget", "Properties", nullptr));
        editButton->setText(QCoreApplication::translate("projectWidget", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class projectWidget: public Ui_projectWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTWIDGET_H
