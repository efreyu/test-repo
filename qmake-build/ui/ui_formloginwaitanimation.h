/********************************************************************************
** Form generated from reading UI file 'formloginwaitanimation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLOGINWAITANIMATION_H
#define UI_FORMLOGINWAITANIMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormLoginWaitAnimation
{
public:
    QWidget *widget;
    QLabel *label_2;
    QLabel *lblWait;

    void setupUi(QWidget *FormLoginWaitAnimation)
    {
        if (FormLoginWaitAnimation->objectName().isEmpty())
            FormLoginWaitAnimation->setObjectName(QString::fromUtf8("FormLoginWaitAnimation"));
        FormLoginWaitAnimation->resize(477, 504);
        widget = new QWidget(FormLoginWaitAnimation);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 465, 490));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	background-image: url(:/MainWindow/Images/background.png);\n"
"}"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(72, 95, 311, 91));
        label_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-family: Glober Regular;font-size: 30px;"));
        label_2->setAlignment(Qt::AlignCenter);
        lblWait = new QLabel(widget);
        lblWait->setObjectName(QString::fromUtf8("lblWait"));
        lblWait->setGeometry(QRect(180, 270, 101, 101));
        lblWait->setAlignment(Qt::AlignCenter);

        retranslateUi(FormLoginWaitAnimation);

        QMetaObject::connectSlotsByName(FormLoginWaitAnimation);
    } // setupUi

    void retranslateUi(QWidget *FormLoginWaitAnimation)
    {
        FormLoginWaitAnimation->setWindowTitle(QApplication::translate("FormLoginWaitAnimation", "Form", nullptr));
        label_2->setText(QApplication::translate("FormLoginWaitAnimation", "Wait a second please", nullptr));
        lblWait->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormLoginWaitAnimation: public Ui_FormLoginWaitAnimation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLOGINWAITANIMATION_H
