/********************************************************************************
** Form generated from reading UI file 'formhaveaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMHAVEACCOUNT_H
#define UI_FORMHAVEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_FormHaveAccount
{
public:
    QGridLayout *gridLayout;
    QLabel *invitation;
    QLabel *already;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *tbYes;
    QFrame *line;
    QToolButton *tbNo;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QFrame *FormHaveAccount)
    {
        if (FormHaveAccount->objectName().isEmpty())
            FormHaveAccount->setObjectName(QString::fromUtf8("FormHaveAccount"));
        FormHaveAccount->resize(343, 190);
        FormHaveAccount->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(FormHaveAccount);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 60);
        invitation = new QLabel(FormHaveAccount);
        invitation->setObjectName(QString::fromUtf8("invitation"));
        invitation->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(invitation, 0, 0, 1, 2);

        already = new QLabel(FormHaveAccount);
        already->setObjectName(QString::fromUtf8("already"));
        already->setStyleSheet(QString::fromUtf8(""));
        already->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(already, 1, 0, 2, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tbYes = new QToolButton(FormHaveAccount);
        tbYes->setObjectName(QString::fromUtf8("tbYes"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tbYes->sizePolicy().hasHeightForWidth());
        tbYes->setSizePolicy(sizePolicy);
        tbYes->setMinimumSize(QSize(0, 0));
        tbYes->setMaximumSize(QSize(16777215, 16777215));
        tbYes->setStyleSheet(QString::fromUtf8(""));
        tbYes->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(tbYes);

        line = new QFrame(FormHaveAccount);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        tbNo = new QToolButton(FormHaveAccount);
        tbNo->setObjectName(QString::fromUtf8("tbNo"));
        sizePolicy.setHeightForWidth(tbNo->sizePolicy().hasHeightForWidth());
        tbNo->setSizePolicy(sizePolicy);
        tbNo->setMinimumSize(QSize(0, 0));
        tbNo->setMaximumSize(QSize(16777215, 16777215));
        tbNo->setStyleSheet(QString::fromUtf8(""));
        tbNo->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(tbNo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 2);


        retranslateUi(FormHaveAccount);

        QMetaObject::connectSlotsByName(FormHaveAccount);
    } // setupUi

    void retranslateUi(QFrame *FormHaveAccount)
    {
        FormHaveAccount->setWindowTitle(QString());
        invitation->setText(QApplication::translate("FormHaveAccount", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214!", nullptr));
        invitation->setProperty("styleHint", QVariant(QApplication::translate("FormHaveAccount", "header", nullptr)));
        already->setText(QApplication::translate("FormHaveAccount", "\320\243 \320\262\320\260\321\201 \321\203\320\266\320\265 \320\265\321\201\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202?", nullptr));
        tbYes->setText(QApplication::translate("FormHaveAccount", "\320\224\320\220", nullptr));
        tbNo->setText(QApplication::translate("FormHaveAccount", "\320\235\320\225\320\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormHaveAccount: public Ui_FormHaveAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMHAVEACCOUNT_H
