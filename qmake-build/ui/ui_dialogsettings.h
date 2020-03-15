/********************************************************************************
** Form generated from reading UI file 'dialogsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSETTINGS_H
#define UI_DIALOGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbDnsLeaks;
    QCheckBox *cbKillSwitch;
    QSpacerItem *verticalSpacer;
    QLabel *lblTitle;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *DialogSettings)
    {
        if (DialogSettings->objectName().isEmpty())
            DialogSettings->setObjectName(QString::fromUtf8("DialogSettings"));
        DialogSettings->resize(335, 179);
        verticalLayout_2 = new QVBoxLayout(DialogSettings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbDnsLeaks = new QCheckBox(DialogSettings);
        cbDnsLeaks->setObjectName(QString::fromUtf8("cbDnsLeaks"));

        verticalLayout->addWidget(cbDnsLeaks);

        cbKillSwitch = new QCheckBox(DialogSettings);
        cbKillSwitch->setObjectName(QString::fromUtf8("cbKillSwitch"));

        verticalLayout->addWidget(cbKillSwitch);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        lblTitle = new QLabel(DialogSettings);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));

        verticalLayout_2->addWidget(lblTitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOk = new QPushButton(DialogSettings);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(DialogSettings);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(DialogSettings);
        QObject::connect(btnCancel, SIGNAL(clicked()), DialogSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogSettings);
    } // setupUi

    void retranslateUi(QDialog *DialogSettings)
    {
        DialogSettings->setWindowTitle(QApplication::translate("DialogSettings", "Settings", nullptr));
        cbDnsLeaks->setText(QApplication::translate("DialogSettings", "DNS Leaks Protection", nullptr));
        cbKillSwitch->setText(QApplication::translate("DialogSettings", "Kill Switch", nullptr));
        lblTitle->setText(QApplication::translate("DialogSettings", "TextLabel", nullptr));
        btnOk->setText(QApplication::translate("DialogSettings", "OK", nullptr));
        btnCancel->setText(QApplication::translate("DialogSettings", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSettings: public Ui_DialogSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSETTINGS_H
