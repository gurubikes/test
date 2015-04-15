/********************************************************************************
** Form generated from reading UI file 'donate_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONATE_DIALOG_H
#define UI_DONATE_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "openscam/qt/ClickWidget.h"

QT_BEGIN_NAMESPACE

class Ui_DonateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    OpenSCAM::ClickWidget *paypalWidget1;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    OpenSCAM::ClickWidget *paypalWidget2;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    OpenSCAM::ClickWidget *bitCoinWidget;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DonateDialog)
    {
        if (DonateDialog->objectName().isEmpty())
            DonateDialog->setObjectName(QString::fromUtf8("DonateDialog"));
        DonateDialog->resize(600, 610);
        DonateDialog->setMinimumSize(QSize(600, 610));
        DonateDialog->setMaximumSize(QSize(600, 610));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/openscam.png"), QSize(), QIcon::Normal, QIcon::Off);
        DonateDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DonateDialog);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DonateDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(DonateDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        paypalWidget1 = new OpenSCAM::ClickWidget(DonateDialog);
        paypalWidget1->setObjectName(QString::fromUtf8("paypalWidget1"));
        paypalWidget1->setMinimumSize(QSize(215, 39));
        paypalWidget1->setMaximumSize(QSize(215, 39));
        paypalWidget1->setStyleSheet(QString::fromUtf8("QWidget {\n"
"  background: url(:/images/paypal.png) no-repeat;\n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QWidget:hover {\n"
"  border: 1px solid black;\n"
"}"));

        horizontalLayout_4->addWidget(paypalWidget1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        paypalWidget2 = new OpenSCAM::ClickWidget(DonateDialog);
        paypalWidget2->setObjectName(QString::fromUtf8("paypalWidget2"));
        paypalWidget2->setMinimumSize(QSize(151, 51));
        paypalWidget2->setMaximumSize(QSize(151, 51));
        paypalWidget2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background: url(:/images/paypal_donate.png) no-repeat;\n"
"    border: 1px solid transparent;\n"
"}\n"
"\n"
"QWidget:hover {\n"
"    border: 1px solid black;\n"
"}"));

        horizontalLayout_3->addWidget(paypalWidget2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_4 = new QLabel(DonateDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        bitCoinWidget = new OpenSCAM::ClickWidget(DonateDialog);
        bitCoinWidget->setObjectName(QString::fromUtf8("bitCoinWidget"));
        bitCoinWidget->setMinimumSize(QSize(192, 42));
        bitCoinWidget->setMaximumSize(QSize(192, 42));
        bitCoinWidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"  background: url(:/images/bitcoin.png) no-repeat;\n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QWidget:hover {\n"
"  border: 1px solid black;\n"
"}"));

        horizontalLayout_2->addWidget(bitCoinWidget);

        label_5 = new QLabel(DonateDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(DonateDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_6 = new QLabel(DonateDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget = new QWidget(DonateDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(200, 200));
        widget->setMaximumSize(QSize(200, 200));
        widget->setStyleSheet(QString::fromUtf8("background: url(:/images/openscam-bitcoin-donations.png) no-repeat;\n"
""));

        horizontalLayout->addWidget(widget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DonateDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DonateDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DonateDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DonateDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DonateDialog);
    } // setupUi

    void retranslateUi(QDialog *DonateDialog)
    {
        DonateDialog->setWindowTitle(QApplication::translate("DonateDialog", "Donate", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DonateDialog", "OpenSCAM took a lot of time and hard work to create.  If you find it useful please consider donating.  Your donations will go towards fixing bugs and adding new features.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DonateDialog", "Click the image below to donate with PayPal:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        paypalWidget1->setToolTip(QApplication::translate("DonateDialog", "Click to open Paypal in your browser.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        paypalWidget1->setStatusTip(QApplication::translate("DonateDialog", "https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=FDP4SVEVT68NG", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        paypalWidget2->setToolTip(QApplication::translate("DonateDialog", "Click to open Paypal in your browser.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        paypalWidget2->setStatusTip(QApplication::translate("DonateDialog", "https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=FDP4SVEVT68NG", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_4->setText(QApplication::translate("DonateDialog", "Send", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bitCoinWidget->setToolTip(QApplication::translate("DonateDialog", "Click to open a Web page about BitCoin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        bitCoinWidget->setStatusTip(QApplication::translate("DonateDialog", "http://bitcoin.org/", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_5->setText(QApplication::translate("DonateDialog", "to", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DonateDialog", "182aJsBrnmcWxqZ9VCACJyFYNWSH7eKS9R", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DonateDialog", "Or by QRCode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        widget->setToolTip(QApplication::translate("DonateDialog", "Learn about BitCoin QRCodes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class DonateDialog: public Ui_DonateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONATE_DIALOG_H
