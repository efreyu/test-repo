/********************************************************************************
** Form generated from reading UI file 'mmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MMAINWINDOW_H
#define UI_MMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "formconnect.h"
#include "formhaveaccount.h"
#include "formlogin.h"
#include "preferences.h"

QT_BEGIN_NAMESPACE

class Ui_MMainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *invitation;
    QGridLayout *gridLayout;
    FormHaveAccount *accountWidget;
    QWidget *login;
    QGridLayout *gridLayout_2;
    FormLogin *loginWidget;
    QWidget *account;
    QGridLayout *gridLayout_3;
    FormConnect *connectWidget;
    QWidget *preferences;
    QGridLayout *gridLayout_4;
    Preferences *preferencesWidget;

    void setupUi(QDialog *MMainWindow)
    {
        if (MMainWindow->objectName().isEmpty())
            MMainWindow->setObjectName(QString::fromUtf8("MMainWindow"));
        MMainWindow->resize(652, 416);
        MMainWindow->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MMainWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(MMainWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        invitation = new QWidget();
        invitation->setObjectName(QString::fromUtf8("invitation"));
        gridLayout = new QGridLayout(invitation);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        accountWidget = new FormHaveAccount(invitation);
        accountWidget->setObjectName(QString::fromUtf8("accountWidget"));

        gridLayout->addWidget(accountWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(invitation);
        login = new QWidget();
        login->setObjectName(QString::fromUtf8("login"));
        gridLayout_2 = new QGridLayout(login);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        loginWidget = new FormLogin(login);
        loginWidget->setObjectName(QString::fromUtf8("loginWidget"));
        loginWidget->setFrameShape(QFrame::NoFrame);
        loginWidget->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(loginWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(login);
        account = new QWidget();
        account->setObjectName(QString::fromUtf8("account"));
        gridLayout_3 = new QGridLayout(account);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        connectWidget = new FormConnect(account);
        connectWidget->setObjectName(QString::fromUtf8("connectWidget"));

        gridLayout_3->addWidget(connectWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(account);
        preferences = new QWidget();
        preferences->setObjectName(QString::fromUtf8("preferences"));
        gridLayout_4 = new QGridLayout(preferences);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        preferencesWidget = new Preferences(preferences);
        preferencesWidget->setObjectName(QString::fromUtf8("preferencesWidget"));

        gridLayout_4->addWidget(preferencesWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(preferences);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(MMainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MMainWindow);
    } // setupUi

    void retranslateUi(QDialog *MMainWindow)
    {
        MMainWindow->setWindowTitle(QApplication::translate("MMainWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MMainWindow: public Ui_MMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MMAINWINDOW_H
