/********************************************************************************
** Form generated from reading UI file 'formlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLOGIN_H
#define UI_FORMLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormLogin
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *headerLabel;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *tbSignUp;
    QFrame *failLine;
    QLabel *failLabel;
    QStackedWidget *stackedWidget;
    QWidget *invitation;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *email;
    QLabel *password;
    QFrame *line;
    QCheckBox *saveUsername;
    QHBoxLayout *horizontalLayout;
    QLineEdit *edPassword;
    QToolButton *tbForgotPassword;
    QLineEdit *edUsername;
    QCheckBox *savePassword;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *tbAccept;
    QWidget *waiting;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *waitLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QFrame *FormLogin)
    {
        if (FormLogin->objectName().isEmpty())
            FormLogin->setObjectName(QString::fromUtf8("FormLogin"));
        FormLogin->resize(412, 306);
        verticalLayout = new QVBoxLayout(FormLogin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        frame = new QFrame(FormLogin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 0, 30, 0);
        headerLabel = new QLabel(frame);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));
        headerLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(headerLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        tbSignUp = new QToolButton(frame);
        tbSignUp->setObjectName(QString::fromUtf8("tbSignUp"));
        tbSignUp->setStyleSheet(QString::fromUtf8(""));
        tbSignUp->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_2->addWidget(tbSignUp);

        horizontalLayout_2->setStretch(0, 1000);

        verticalLayout->addWidget(frame);

        failLine = new QFrame(FormLogin);
        failLine->setObjectName(QString::fromUtf8("failLine"));
        failLine->setFrameShape(QFrame::HLine);
        failLine->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(failLine);

        failLabel = new QLabel(FormLogin);
        failLabel->setObjectName(QString::fromUtf8("failLabel"));
        failLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(failLabel);

        stackedWidget = new QStackedWidget(FormLogin);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        invitation = new QWidget();
        invitation->setObjectName(QString::fromUtf8("invitation"));
        gridLayout_2 = new QGridLayout(invitation);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(30, 0, 30, 12);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        email = new QLabel(invitation);
        email->setObjectName(QString::fromUtf8("email"));

        gridLayout->addWidget(email, 0, 0, 1, 1);

        password = new QLabel(invitation);
        password->setObjectName(QString::fromUtf8("password"));

        gridLayout->addWidget(password, 3, 0, 1, 1);

        line = new QFrame(invitation);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 2);

        saveUsername = new QCheckBox(invitation);
        saveUsername->setObjectName(QString::fromUtf8("saveUsername"));

        gridLayout->addWidget(saveUsername, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        edPassword = new QLineEdit(invitation);
        edPassword->setObjectName(QString::fromUtf8("edPassword"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(edPassword->sizePolicy().hasHeightForWidth());
        edPassword->setSizePolicy(sizePolicy);
        edPassword->setStyleSheet(QString::fromUtf8(""));
        edPassword->setFrame(false);

        horizontalLayout->addWidget(edPassword);

        tbForgotPassword = new QToolButton(invitation);
        tbForgotPassword->setObjectName(QString::fromUtf8("tbForgotPassword"));
        tbForgotPassword->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(tbForgotPassword);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        edUsername = new QLineEdit(invitation);
        edUsername->setObjectName(QString::fromUtf8("edUsername"));
        sizePolicy.setHeightForWidth(edUsername->sizePolicy().hasHeightForWidth());
        edUsername->setSizePolicy(sizePolicy);
        edUsername->setStyleSheet(QString::fromUtf8(""));
        edUsername->setFrame(false);

        gridLayout->addWidget(edUsername, 0, 1, 1, 1);

        savePassword = new QCheckBox(invitation);
        savePassword->setObjectName(QString::fromUtf8("savePassword"));

        gridLayout->addWidget(savePassword, 4, 0, 1, 2);

        line_2 = new QFrame(invitation);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 5, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        tbAccept = new QPushButton(invitation);
        tbAccept->setObjectName(QString::fromUtf8("tbAccept"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tbAccept->sizePolicy().hasHeightForWidth());
        tbAccept->setSizePolicy(sizePolicy1);
        tbAccept->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(tbAccept);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        stackedWidget->addWidget(invitation);
        waiting = new QWidget();
        waiting->setObjectName(QString::fromUtf8("waiting"));
        verticalLayout_2 = new QVBoxLayout(waiting);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 30, -1, 40);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label = new QLabel(waiting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        waitLabel = new QLabel(waiting);
        waitLabel->setObjectName(QString::fromUtf8("waitLabel"));
        waitLabel->setMinimumSize(QSize(63, 59));
        waitLabel->setMaximumSize(QSize(63, 59));

        horizontalLayout_4->addWidget(waitLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        stackedWidget->addWidget(waiting);

        verticalLayout->addWidget(stackedWidget);

        QWidget::setTabOrder(edUsername, saveUsername);
        QWidget::setTabOrder(saveUsername, edPassword);
        QWidget::setTabOrder(edPassword, savePassword);
        QWidget::setTabOrder(savePassword, tbSignUp);
        QWidget::setTabOrder(tbSignUp, tbForgotPassword);
        QWidget::setTabOrder(tbForgotPassword, tbAccept);

        retranslateUi(FormLogin);

        stackedWidget->setCurrentIndex(0);
        tbAccept->setDefault(true);


        QMetaObject::connectSlotsByName(FormLogin);
    } // setupUi

    void retranslateUi(QFrame *FormLogin)
    {
        FormLogin->setWindowTitle(QApplication::translate("FormLogin", "Form", nullptr));
        frame->setProperty("styleHint", QVariant(QApplication::translate("FormLogin", "header", nullptr)));
        headerLabel->setText(QApplication::translate("FormLogin", "\320\222\321\205\320\276\320\264", nullptr));
        tbSignUp->setText(QApplication::translate("FormLogin", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        failLabel->setText(QString());
        email->setText(QApplication::translate("FormLogin", "Email:", nullptr));
        password->setText(QApplication::translate("FormLogin", "Password:", nullptr));
        line->setProperty("styleHint", QVariant(QApplication::translate("FormLogin", "line", nullptr)));
        saveUsername->setText(QApplication::translate("FormLogin", "Save username", nullptr));
        edPassword->setText(QString());
        edPassword->setPlaceholderText(QApplication::translate("FormLogin", "Password", nullptr));
        tbForgotPassword->setText(QApplication::translate("FormLogin", "Forgot password?", nullptr));
        edUsername->setText(QString());
        edUsername->setPlaceholderText(QApplication::translate("FormLogin", "Username", nullptr));
        savePassword->setText(QApplication::translate("FormLogin", "Save password", nullptr));
        line_2->setProperty("styleHint", QVariant(QApplication::translate("FormLogin", "line", nullptr)));
        tbAccept->setText(QApplication::translate("FormLogin", "JOIN", nullptr));
        label->setText(QApplication::translate("FormLogin", "\320\237\320\276\320\266\320\260\320\273\321\203\320\271\321\201\321\202\320\260 \320\277\320\276\320\264\320\276\320\266\320\264\320\270\321\202\320\265", nullptr));
        waitLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormLogin: public Ui_FormLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLOGIN_H
