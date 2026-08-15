/********************************************************************************
** Form generated from reading UI file 'wdCubeInitialise.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WDCUBEINITIALISE_H
#define WDCUBEINITIALISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wdCubeInitialise
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *tvwObjects;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label;
    QSpinBox *spbY_2;
    QLabel *lblDimensions;
    QLabel *label_6;
    QPushButton *btnGenerate;
    QTextEdit *txtMessage;
    QSpinBox *spbX_3;
    QSpinBox *spbSteps;
    QSpinBox *spbX_1;
    QSpinBox *spbY_3;
    QSpinBox *spbY_1;
    QLabel *label_4;
    QSpinBox *spbX_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QProgressBar *pgbProcess;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnRefresh;

    void setupUi(QWidget *wdCubeInitialise)
    {
        if (wdCubeInitialise->objectName().isEmpty())
            wdCubeInitialise->setObjectName(QString::fromUtf8("wdCubeInitialise"));
        wdCubeInitialise->resize(882, 628);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(wdCubeInitialise->sizePolicy().hasHeightForWidth());
        wdCubeInitialise->setSizePolicy(sizePolicy);
        wdCubeInitialise->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(wdCubeInitialise);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        tvwObjects = new QTreeWidget(wdCubeInitialise);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        tvwObjects->setHeaderItem(__qtreewidgetitem);
        tvwObjects->setObjectName(QString::fromUtf8("tvwObjects"));

        horizontalLayout->addWidget(tvwObjects);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(wdCubeInitialise);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        label_3 = new QLabel(wdCubeInitialise);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_5 = new QLabel(wdCubeInitialise);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label = new QLabel(wdCubeInitialise);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 9, 0, 1, 1);

        spbY_2 = new QSpinBox(wdCubeInitialise);
        spbY_2->setObjectName(QString::fromUtf8("spbY_2"));

        gridLayout->addWidget(spbY_2, 4, 2, 1, 1);

        lblDimensions = new QLabel(wdCubeInitialise);
        lblDimensions->setObjectName(QString::fromUtf8("lblDimensions"));

        gridLayout->addWidget(lblDimensions, 7, 2, 1, 1);

        label_6 = new QLabel(wdCubeInitialise);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        btnGenerate = new QPushButton(wdCubeInitialise);
        btnGenerate->setObjectName(QString::fromUtf8("btnGenerate"));

        gridLayout->addWidget(btnGenerate, 8, 2, 1, 1);

        txtMessage = new QTextEdit(wdCubeInitialise);
        txtMessage->setObjectName(QString::fromUtf8("txtMessage"));

        gridLayout->addWidget(txtMessage, 9, 2, 1, 1);

        spbX_3 = new QSpinBox(wdCubeInitialise);
        spbX_3->setObjectName(QString::fromUtf8("spbX_3"));

        gridLayout->addWidget(spbX_3, 5, 2, 1, 1);

        spbSteps = new QSpinBox(wdCubeInitialise);
        spbSteps->setObjectName(QString::fromUtf8("spbSteps"));

        gridLayout->addWidget(spbSteps, 0, 2, 1, 1);

        spbX_1 = new QSpinBox(wdCubeInitialise);
        spbX_1->setObjectName(QString::fromUtf8("spbX_1"));

        gridLayout->addWidget(spbX_1, 1, 2, 1, 1);

        spbY_3 = new QSpinBox(wdCubeInitialise);
        spbY_3->setObjectName(QString::fromUtf8("spbY_3"));

        gridLayout->addWidget(spbY_3, 6, 2, 1, 1);

        spbY_1 = new QSpinBox(wdCubeInitialise);
        spbY_1->setObjectName(QString::fromUtf8("spbY_1"));

        gridLayout->addWidget(spbY_1, 2, 2, 1, 1);

        label_4 = new QLabel(wdCubeInitialise);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spbX_2 = new QSpinBox(wdCubeInitialise);
        spbX_2->setObjectName(QString::fromUtf8("spbX_2"));

        gridLayout->addWidget(spbX_2, 3, 2, 1, 1);

        label_8 = new QLabel(wdCubeInitialise);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 1, 1, 1);

        label_9 = new QLabel(wdCubeInitialise);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 1, 1, 1);

        label_10 = new QLabel(wdCubeInitialise);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 3, 1, 1, 1);

        label_11 = new QLabel(wdCubeInitialise);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 4, 1, 1, 1);

        label_12 = new QLabel(wdCubeInitialise);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 5, 1, 1, 1);

        label_13 = new QLabel(wdCubeInitialise);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 6, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout);

        pgbProcess = new QProgressBar(wdCubeInitialise);
        pgbProcess->setObjectName(QString::fromUtf8("pgbProcess"));
        pgbProcess->setValue(24);

        verticalLayout->addWidget(pgbProcess);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        btnRefresh = new QPushButton(wdCubeInitialise);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));

        horizontalLayout_3->addWidget(btnRefresh);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(wdCubeInitialise);

        QMetaObject::connectSlotsByName(wdCubeInitialise);
    } // setupUi

    void retranslateUi(QWidget *wdCubeInitialise)
    {
        wdCubeInitialise->setWindowTitle(QCoreApplication::translate("wdCubeInitialise", "wdParameterView", nullptr));
        label_2->setText(QCoreApplication::translate("wdCubeInitialise", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("wdCubeInitialise", "Beacon_03", nullptr));
        label_5->setText(QCoreApplication::translate("wdCubeInitialise", "Beacon_01", nullptr));
        label->setText(QCoreApplication::translate("wdCubeInitialise", "Message", nullptr));
        lblDimensions->setText(QString());
        label_6->setText(QCoreApplication::translate("wdCubeInitialise", "Steps", nullptr));
        btnGenerate->setText(QCoreApplication::translate("wdCubeInitialise", "Generate", nullptr));
        label_4->setText(QCoreApplication::translate("wdCubeInitialise", "Beacon_02", nullptr));
        label_8->setText(QCoreApplication::translate("wdCubeInitialise", "X1", nullptr));
        label_9->setText(QCoreApplication::translate("wdCubeInitialise", "Y1", nullptr));
        label_10->setText(QCoreApplication::translate("wdCubeInitialise", "X2", nullptr));
        label_11->setText(QCoreApplication::translate("wdCubeInitialise", "Y2", nullptr));
        label_12->setText(QCoreApplication::translate("wdCubeInitialise", "X3", nullptr));
        label_13->setText(QCoreApplication::translate("wdCubeInitialise", "Y3", nullptr));
        btnRefresh->setText(QCoreApplication::translate("wdCubeInitialise", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wdCubeInitialise: public Ui_wdCubeInitialise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WDCUBEINITIALISE_H
