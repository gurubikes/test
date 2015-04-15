/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *versionLabel;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *creditsPushButton;
    QPushButton *licensePushButton;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->setWindowModality(Qt::ApplicationModal);
        AboutDialog->resize(500, 493);
        AboutDialog->setMinimumSize(QSize(500, 480));
        AboutDialog->setMaximumSize(QSize(500, 700));
        AboutDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(AboutDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        versionLabel = new QLabel(AboutDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        QFont font1;
        font1.setPointSize(14);
        versionLabel->setFont(font1);
        versionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(versionLabel);

        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(label_4);

        groupBox = new QGroupBox(AboutDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        creditsPushButton = new QPushButton(AboutDialog);
        creditsPushButton->setObjectName(QString::fromUtf8("creditsPushButton"));

        horizontalLayout->addWidget(creditsPushButton);

        licensePushButton = new QPushButton(AboutDialog);
        licensePushButton->setObjectName(QString::fromUtf8("licensePushButton"));

        horizontalLayout->addWidget(licensePushButton);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About OpenSCAM", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AboutDialog", "OpenSCAM", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AboutDialog", "Open-Source Simulation & Computer Aided Machining", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QString());
        label_3->setText(QApplication::translate("AboutDialog", "Copyright (c) 2011-2014 Joseph Coffland", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AboutDialog", "<a href=\"http://openscam.org/\">http://openscam.org/</a>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AboutDialog", "Disclaimer:", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("AboutDialog", "Always use caution when operating any dangerous machinery.  Simulation is no substitute for carefully checking the accuracy and safety of your CNC programs.  This or any other software could very well make mistakes.  Programs which appear correct in simulations might be very dangerous to run on real machines.  The results of running any CNC program on a real machine are the sole responsibility of the CNC operator.\n"
"\n"
"See software license for more information.", 0, QApplication::UnicodeUTF8));
        creditsPushButton->setText(QApplication::translate("AboutDialog", "C&redits", 0, QApplication::UnicodeUTF8));
        licensePushButton->setText(QApplication::translate("AboutDialog", "&License", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
