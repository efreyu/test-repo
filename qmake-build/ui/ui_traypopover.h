/********************************************************************************
** Form generated from reading UI file 'traypopover.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAYPOPOVER_H
#define UI_TRAYPOPOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TrayPopover
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *gotoFullModeButton;
    QPushButton *exitButton;
    QVBoxLayout *slotLayout;

    void setupUi(QDialog *TrayPopover)
    {
        if (TrayPopover->objectName().isEmpty())
            TrayPopover->setObjectName(QString::fromUtf8("TrayPopover"));
        TrayPopover->resize(339, 220);
        TrayPopover->setFocusPolicy(Qt::TabFocus);
        verticalLayout_2 = new QVBoxLayout(TrayPopover);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gotoFullModeButton = new QPushButton(TrayPopover);
        gotoFullModeButton->setObjectName(QString::fromUtf8("gotoFullModeButton"));
        gotoFullModeButton->setAutoDefault(false);

        horizontalLayout->addWidget(gotoFullModeButton);

        exitButton = new QPushButton(TrayPopover);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setAutoDefault(false);

        horizontalLayout->addWidget(exitButton);


        verticalLayout_2->addLayout(horizontalLayout);

        slotLayout = new QVBoxLayout();
        slotLayout->setObjectName(QString::fromUtf8("slotLayout"));

        verticalLayout_2->addLayout(slotLayout);


        retranslateUi(TrayPopover);

        QMetaObject::connectSlotsByName(TrayPopover);
    } // setupUi

    void retranslateUi(QDialog *TrayPopover)
    {
        TrayPopover->setWindowTitle(QApplication::translate("TrayPopover", "Dialog", nullptr));
        gotoFullModeButton->setText(QApplication::translate("TrayPopover", "Go to full mode", nullptr));
        exitButton->setText(QApplication::translate("TrayPopover", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrayPopover: public Ui_TrayPopover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAYPOPOVER_H
