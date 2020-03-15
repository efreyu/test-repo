/********************************************************************************
** Form generated from reading UI file 'dialogrestoreinternet.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRESTOREINTERNET_H
#define UI_DIALOGRESTOREINTERNET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogRestoreInternet
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRestore;
    QPushButton *btnClose;

    void setupUi(QDialog *DialogRestoreInternet)
    {
        if (DialogRestoreInternet->objectName().isEmpty())
            DialogRestoreInternet->setObjectName(QString::fromUtf8("DialogRestoreInternet"));
        DialogRestoreInternet->resize(375, 130);
        verticalLayout = new QVBoxLayout(DialogRestoreInternet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(DialogRestoreInternet);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRestore = new QPushButton(DialogRestoreInternet);
        btnRestore->setObjectName(QString::fromUtf8("btnRestore"));
        btnRestore->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(btnRestore);

        btnClose = new QPushButton(DialogRestoreInternet);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(DialogRestoreInternet);

        QMetaObject::connectSlotsByName(DialogRestoreInternet);
    } // setupUi

    void retranslateUi(QDialog *DialogRestoreInternet)
    {
        DialogRestoreInternet->setWindowTitle(QApplication::translate("DialogRestoreInternet", "OneVPN", nullptr));
        label->setText(QApplication::translate("DialogRestoreInternet", "VPN connection drops and internet was killed, because Kill Switch feature is activated. What action do you want?", nullptr));
        btnRestore->setText(QApplication::translate("DialogRestoreInternet", " Restore internet ", nullptr));
        btnClose->setText(QApplication::translate("DialogRestoreInternet", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRestoreInternet: public Ui_DialogRestoreInternet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRESTOREINTERNET_H
