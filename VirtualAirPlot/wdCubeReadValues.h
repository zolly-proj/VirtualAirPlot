/********************************************************************************
** Form generated from reading UI file 'wdCubeReadValues.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WDCUBEREADVALUES_H
#define WDCUBEREADVALUES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wdCubeReadValues
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *tvwObjects;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *ledSensor_02_name;
    QLabel *label_3;
    QTextEdit *txtMessage;
    QLabel *label_7;
    QLabel *Beacons;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_8;
    QLineEdit *ledSensor_01_coord;
    QLineEdit *ledSensor_01_name;
    QCheckBox *chkBeacon_03;
    QLineEdit *ledSensor_02_coord;
    QLabel *label_2;
    QLabel *label_10;
    QCheckBox *chkBeacon_01;
    QCheckBox *chkBeacon_02;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnRefresh;

    void setupUi(QWidget *wdCubeReadValues)
    {
        if (wdCubeReadValues->objectName().isEmpty())
            wdCubeReadValues->setObjectName(QString::fromUtf8("wdCubeReadValues"));
        wdCubeReadValues->resize(882, 628);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(wdCubeReadValues->sizePolicy().hasHeightForWidth());
        wdCubeReadValues->setSizePolicy(sizePolicy);
        wdCubeReadValues->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(wdCubeReadValues);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        tvwObjects = new QTreeWidget(wdCubeReadValues);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        tvwObjects->setHeaderItem(__qtreewidgetitem);
        tvwObjects->setObjectName(QString::fromUtf8("tvwObjects"));

        horizontalLayout->addWidget(tvwObjects);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(wdCubeReadValues);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_4 = new QLabel(wdCubeReadValues);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        ledSensor_02_name = new QLineEdit(wdCubeReadValues);
        ledSensor_02_name->setObjectName(QString::fromUtf8("ledSensor_02_name"));

        gridLayout->addWidget(ledSensor_02_name, 2, 2, 1, 1);

        label_3 = new QLabel(wdCubeReadValues);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 1, 1, 1);

        txtMessage = new QTextEdit(wdCubeReadValues);
        txtMessage->setObjectName(QString::fromUtf8("txtMessage"));

        gridLayout->addWidget(txtMessage, 7, 2, 1, 1);

        label_7 = new QLabel(wdCubeReadValues);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 1, 1, 1);

        Beacons = new QLabel(wdCubeReadValues);
        Beacons->setObjectName(QString::fromUtf8("Beacons"));

        gridLayout->addWidget(Beacons, 4, 0, 1, 1);

        label_9 = new QLabel(wdCubeReadValues);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 1, 1, 1);

        label = new QLabel(wdCubeReadValues);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 7, 0, 1, 1);

        label_11 = new QLabel(wdCubeReadValues);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 3, 1, 1, 1);

        label_8 = new QLabel(wdCubeReadValues);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        ledSensor_01_coord = new QLineEdit(wdCubeReadValues);
        ledSensor_01_coord->setObjectName(QString::fromUtf8("ledSensor_01_coord"));

        gridLayout->addWidget(ledSensor_01_coord, 1, 2, 1, 1);

        ledSensor_01_name = new QLineEdit(wdCubeReadValues);
        ledSensor_01_name->setObjectName(QString::fromUtf8("ledSensor_01_name"));

        gridLayout->addWidget(ledSensor_01_name, 0, 2, 1, 1);

        chkBeacon_03 = new QCheckBox(wdCubeReadValues);
        chkBeacon_03->setObjectName(QString::fromUtf8("chkBeacon_03"));

        gridLayout->addWidget(chkBeacon_03, 6, 2, 1, 1);

        ledSensor_02_coord = new QLineEdit(wdCubeReadValues);
        ledSensor_02_coord->setObjectName(QString::fromUtf8("ledSensor_02_coord"));

        gridLayout->addWidget(ledSensor_02_coord, 3, 2, 1, 1);

        label_2 = new QLabel(wdCubeReadValues);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 1, 1, 1);

        label_10 = new QLabel(wdCubeReadValues);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 2, 1, 1, 1);

        chkBeacon_01 = new QCheckBox(wdCubeReadValues);
        chkBeacon_01->setObjectName(QString::fromUtf8("chkBeacon_01"));

        gridLayout->addWidget(chkBeacon_01, 4, 2, 1, 1);

        chkBeacon_02 = new QCheckBox(wdCubeReadValues);
        chkBeacon_02->setObjectName(QString::fromUtf8("chkBeacon_02"));

        gridLayout->addWidget(chkBeacon_02, 5, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        btnRefresh = new QPushButton(wdCubeReadValues);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));

        horizontalLayout_3->addWidget(btnRefresh);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(wdCubeReadValues);

        QMetaObject::connectSlotsByName(wdCubeReadValues);
    } // setupUi

    void retranslateUi(QWidget *wdCubeReadValues)
    {
        wdCubeReadValues->setWindowTitle(QCoreApplication::translate("wdCubeReadValues", "wdParameterView", nullptr));
        label_5->setText(QCoreApplication::translate("wdCubeReadValues", "Sensor_01", nullptr));
        label_4->setText(QCoreApplication::translate("wdCubeReadValues", "Sensor_02", nullptr));
        label_3->setText(QCoreApplication::translate("wdCubeReadValues", "Connect to 01", nullptr));
        label_7->setText(QCoreApplication::translate("wdCubeReadValues", "Connect to 03", nullptr));
        Beacons->setText(QCoreApplication::translate("wdCubeReadValues", "Beacons", nullptr));
        label_9->setText(QCoreApplication::translate("wdCubeReadValues", "Coord:", nullptr));
        label->setText(QCoreApplication::translate("wdCubeReadValues", "Message", nullptr));
        label_11->setText(QCoreApplication::translate("wdCubeReadValues", "Coord:", nullptr));
        label_8->setText(QCoreApplication::translate("wdCubeReadValues", "Name:", nullptr));
        chkBeacon_03->setText(QCoreApplication::translate("wdCubeReadValues", "CheckBox", nullptr));
        label_2->setText(QCoreApplication::translate("wdCubeReadValues", "Connect to 02", nullptr));
        label_10->setText(QCoreApplication::translate("wdCubeReadValues", "Name:", nullptr));
        chkBeacon_01->setText(QCoreApplication::translate("wdCubeReadValues", "CheckBox", nullptr));
        chkBeacon_02->setText(QCoreApplication::translate("wdCubeReadValues", "CheckBox", nullptr));
        btnRefresh->setText(QCoreApplication::translate("wdCubeReadValues", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wdCubeReadValues: public Ui_wdCubeReadValues {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WDCUBEREADVALUES_H
