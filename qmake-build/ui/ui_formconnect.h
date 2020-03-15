/********************************************************************************
** Form generated from reading UI file 'formconnect.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCONNECT_H
#define UI_FORMCONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "AnimatedButton.h"

QT_BEGIN_NAMESPACE

class Ui_FormConnect
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *offLabel;
    QCheckBox *paranoic;
    QLabel *onLabel;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QLabel *lblIP;
    QSpacerItem *verticalSpacer;
    AnimatedButton *tbConnect;
    QFrame *headerFrame;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbServer;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QSpacerItem *horizontalSpacer;
    QToolButton *tbSettings;

    void setupUi(QWidget *FormConnect)
    {
        if (FormConnect->objectName().isEmpty())
            FormConnect->setObjectName(QString::fromUtf8("FormConnect"));
        FormConnect->resize(412, 271);
        gridLayout_2 = new QGridLayout(FormConnect);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 30);
        frame = new QFrame(FormConnect);
        frame->setObjectName(QString::fromUtf8("frame"));
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(30, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 20);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        offLabel = new QLabel(frame);
        offLabel->setObjectName(QString::fromUtf8("offLabel"));
        offLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(offLabel);

        paranoic = new QCheckBox(frame);
        paranoic->setObjectName(QString::fromUtf8("paranoic"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(paranoic->sizePolicy().hasHeightForWidth());
        paranoic->setSizePolicy(sizePolicy);
        paranoic->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(paranoic);

        onLabel = new QLabel(frame);
        onLabel->setObjectName(QString::fromUtf8("onLabel"));
        onLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(onLabel);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 20, -1, -1);
        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lblIP = new QLabel(frame);
        lblIP->setObjectName(QString::fromUtf8("lblIP"));
        lblIP->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(lblIP);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        tbConnect = new AnimatedButton(frame);
        tbConnect->setObjectName(QString::fromUtf8("tbConnect"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tbConnect->sizePolicy().hasHeightForWidth());
        tbConnect->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(tbConnect, 0, 1, 2, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        headerFrame = new QFrame(FormConnect);
        headerFrame->setObjectName(QString::fromUtf8("headerFrame"));
        headerFrame->setFrameShape(QFrame::NoFrame);
        headerFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(headerFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 30, -1);
        cbServer = new QComboBox(headerFrame);
        cbServer->setObjectName(QString::fromUtf8("cbServer"));
        cbServer->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(cbServer);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        line = new QFrame(headerFrame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tbSettings = new QToolButton(headerFrame);
        tbSettings->setObjectName(QString::fromUtf8("tbSettings"));
        sizePolicy1.setHeightForWidth(tbSettings->sizePolicy().hasHeightForWidth());
        tbSettings->setSizePolicy(sizePolicy1);
        tbSettings->setStyleSheet(QString::fromUtf8(""));
        tbSettings->setPopupMode(QToolButton::DelayedPopup);
        tbSettings->setToolButtonStyle(Qt::ToolButtonFollowStyle);

        horizontalLayout->addWidget(tbSettings);


        gridLayout_2->addWidget(headerFrame, 0, 0, 1, 1);


        retranslateUi(FormConnect);

        QMetaObject::connectSlotsByName(FormConnect);
    } // setupUi

    void retranslateUi(QWidget *FormConnect)
    {
        FormConnect->setWindowTitle(QApplication::translate("FormConnect", "Form", nullptr));
        label->setText(QApplication::translate("FormConnect", "Paranoic mode", nullptr));
        label->setProperty("styleHint", QVariant(QApplication::translate("FormConnect", "hint", nullptr)));
        offLabel->setText(QApplication::translate("FormConnect", "OFF", nullptr));
        paranoic->setText(QString());
        onLabel->setText(QApplication::translate("FormConnect", "ON", nullptr));
        label_2->setText(QApplication::translate("FormConnect", "External IP", nullptr));
        label_2->setProperty("styleHint", QVariant(QApplication::translate("FormConnect", "hint", nullptr)));
        lblIP->setText(QApplication::translate("FormConnect", "00.00.00.00", nullptr));
        tbConnect->setText(QString());
        headerFrame->setProperty("styleHint", QVariant(QApplication::translate("FormConnect", "header", nullptr)));
        line->setProperty("styleHint", QVariant(QApplication::translate("FormConnect", "line", nullptr)));
        tbSettings->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormConnect: public Ui_FormConnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCONNECT_H
