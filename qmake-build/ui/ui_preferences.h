/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *generalPage;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *launchOnStart;
    QCheckBox *guiLogging;
    QCheckBox *autoUpdate;
    QCheckBox *notification;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *daysTrial;
    QLabel *freeTrial;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *upgradeLabel;
    QWidget *connectionPage;
    QGridLayout *gridLayout_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *selectServerLocation;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QComboBox *connectionMode;
    QSpacerItem *verticalSpacer;
    QCheckBox *unprotectedWifi;
    QLabel *unprotectedLabel;
    QFrame *headerFrame;
    QHBoxLayout *horizontalLayout;
    QToolButton *general;
    QToolButton *connection;
    QToolButton *blackList;
    QToolButton *wifi;
    QToolButton *account;
    QSpacerItem *horizontalSpacer;
    QToolButton *close;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *versionLabel;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *save;

    void setupUi(QWidget *Preferences)
    {
        if (Preferences->objectName().isEmpty())
            Preferences->setObjectName(QString::fromUtf8("Preferences"));
        Preferences->resize(425, 249);
        gridLayout_2 = new QGridLayout(Preferences);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 5);
        frame = new QFrame(Preferences);
        frame->setObjectName(QString::fromUtf8("frame"));
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(30, 0, 0, 0);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        generalPage = new QWidget();
        generalPage->setObjectName(QString::fromUtf8("generalPage"));
        gridLayout_3 = new QGridLayout(generalPage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(generalPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        launchOnStart = new QCheckBox(widget);
        launchOnStart->setObjectName(QString::fromUtf8("launchOnStart"));
        launchOnStart->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(launchOnStart);

        guiLogging = new QCheckBox(widget);
        guiLogging->setObjectName(QString::fromUtf8("guiLogging"));

        verticalLayout->addWidget(guiLogging);

        autoUpdate = new QCheckBox(widget);
        autoUpdate->setObjectName(QString::fromUtf8("autoUpdate"));
        autoUpdate->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(autoUpdate);

        notification = new QCheckBox(widget);
        notification->setObjectName(QString::fromUtf8("notification"));
        notification->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(notification);


        horizontalLayout_3->addLayout(verticalLayout);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 100));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        daysTrial = new QLabel(groupBox);
        daysTrial->setObjectName(QString::fromUtf8("daysTrial"));

        gridLayout_4->addWidget(daysTrial, 1, 1, 1, 1);

        freeTrial = new QLabel(groupBox);
        freeTrial->setObjectName(QString::fromUtf8("freeTrial"));
        freeTrial->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(freeTrial, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 3, 0, 1, 1);

        upgradeLabel = new QLabel(groupBox);
        upgradeLabel->setObjectName(QString::fromUtf8("upgradeLabel"));

        gridLayout_4->addWidget(upgradeLabel, 2, 0, 1, 2);


        horizontalLayout_3->addWidget(groupBox);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        stackedWidget->addWidget(generalPage);
        connectionPage = new QWidget();
        connectionPage->setObjectName(QString::fromUtf8("connectionPage"));
        gridLayout_5 = new QGridLayout(connectionPage);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(connectionPage);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_6 = new QGridLayout(widget_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_6->addWidget(label_5, 0, 0, 1, 2);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 1, 1, 1, 1);

        selectServerLocation = new QCheckBox(widget_2);
        selectServerLocation->setObjectName(QString::fromUtf8("selectServerLocation"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectServerLocation->sizePolicy().hasHeightForWidth());
        selectServerLocation->setSizePolicy(sizePolicy);
        selectServerLocation->setMaximumSize(QSize(20, 16777215));
        selectServerLocation->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(selectServerLocation, 1, 0, 2, 1);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 2, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        connectionMode = new QComboBox(widget_2);
        connectionMode->setObjectName(QString::fromUtf8("connectionMode"));

        verticalLayout_2->addWidget(connectionMode);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout_6->addLayout(verticalLayout_2, 0, 2, 5, 1);

        unprotectedWifi = new QCheckBox(widget_2);
        unprotectedWifi->setObjectName(QString::fromUtf8("unprotectedWifi"));
        unprotectedWifi->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(unprotectedWifi, 3, 0, 1, 1);

        unprotectedLabel = new QLabel(widget_2);
        unprotectedLabel->setObjectName(QString::fromUtf8("unprotectedLabel"));

        gridLayout_6->addWidget(unprotectedLabel, 3, 1, 1, 1);


        gridLayout_5->addWidget(widget_2, 0, 0, 1, 1);

        stackedWidget->addWidget(connectionPage);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        headerFrame = new QFrame(Preferences);
        headerFrame->setObjectName(QString::fromUtf8("headerFrame"));
        headerFrame->setFrameShape(QFrame::NoFrame);
        headerFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(headerFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 30, -1);
        general = new QToolButton(headerFrame);
        general->setObjectName(QString::fromUtf8("general"));
        general->setCheckable(true);
        general->setChecked(true);

        horizontalLayout->addWidget(general);

        connection = new QToolButton(headerFrame);
        connection->setObjectName(QString::fromUtf8("connection"));
        connection->setCheckable(true);

        horizontalLayout->addWidget(connection);

        blackList = new QToolButton(headerFrame);
        blackList->setObjectName(QString::fromUtf8("blackList"));
        blackList->setCheckable(true);

        horizontalLayout->addWidget(blackList);

        wifi = new QToolButton(headerFrame);
        wifi->setObjectName(QString::fromUtf8("wifi"));
        wifi->setCheckable(true);

        horizontalLayout->addWidget(wifi);

        account = new QToolButton(headerFrame);
        account->setObjectName(QString::fromUtf8("account"));
        account->setCheckable(true);

        horizontalLayout->addWidget(account);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close = new QToolButton(headerFrame);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMinimumSize(QSize(20, 20));
        close->setMaximumSize(QSize(20, 20));

        horizontalLayout->addWidget(close);


        gridLayout_2->addWidget(headerFrame, 0, 0, 1, 1);

        horizontalWidget = new QWidget(Preferences);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalWidget->setMinimumSize(QSize(0, 30));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        versionLabel = new QLabel(horizontalWidget);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));

        horizontalLayout_4->addWidget(versionLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        save = new QToolButton(horizontalWidget);
        save->setObjectName(QString::fromUtf8("save"));

        horizontalLayout_4->addWidget(save);


        gridLayout_2->addWidget(horizontalWidget, 2, 0, 1, 1);


        retranslateUi(Preferences);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QWidget *Preferences)
    {
        Preferences->setWindowTitle(QApplication::translate("Preferences", "Form", nullptr));
        launchOnStart->setText(QApplication::translate("Preferences", "Launch on startup", nullptr));
        guiLogging->setText(QApplication::translate("Preferences", "Enable gui logging", nullptr));
        autoUpdate->setText(QApplication::translate("Preferences", "Auto-connection with unprotected wi-fi", nullptr));
        notification->setText(QApplication::translate("Preferences", "Automatically update", nullptr));
        groupBox->setTitle(QString());
        daysTrial->setText(QApplication::translate("Preferences", "4 days", nullptr));
        freeTrial->setText(QApplication::translate("Preferences", "Free trial:", nullptr));
        upgradeLabel->setText(QApplication::translate("Preferences", "UPGRADE", nullptr));
        label_5->setText(QApplication::translate("Preferences", "Auto - Connect to", nullptr));
        label_6->setText(QApplication::translate("Preferences", "most recent location", nullptr));
        selectServerLocation->setText(QString());
        label_7->setText(QApplication::translate("Preferences", "a server near you", nullptr));
        label_8->setText(QApplication::translate("Preferences", "Connection mode:", nullptr));
        unprotectedWifi->setText(QString());
        unprotectedLabel->setText(QApplication::translate("Preferences", "With unprotected wi-fi", nullptr));
        headerFrame->setProperty("styleHint", QVariant(QApplication::translate("Preferences", "header", nullptr)));
        general->setText(QString());
        general->setProperty("styleHint", QVariant(QApplication::translate("Preferences", "tab", nullptr)));
        connection->setText(QString());
        connection->setProperty("styleHint", QVariant(QApplication::translate("Preferences", "tab", nullptr)));
        blackList->setText(QString());
        blackList->setProperty("styleHint", QVariant(QApplication::translate("Preferences", "tab", nullptr)));
        wifi->setText(QString());
        wifi->setProperty("styleHint", QVariant(QApplication::translate("Preferences", "tab", nullptr)));
        account->setText(QString());
        account->setProperty("styleHint", QVariant(QApplication::translate("Preferences", "tab", nullptr)));
        close->setText(QString());
        versionLabel->setText(QApplication::translate("Preferences", "Version: %1", nullptr));
        save->setText(QApplication::translate("Preferences", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
