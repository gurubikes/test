/********************************************************************************
** Form generated from reading UI file 'new_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DIALOG_H
#define UI_NEW_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *newTPLRadioButton;
    QRadioButton *newGCodeRadioButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewDialog)
    {
        if (NewDialog->objectName().isEmpty())
            NewDialog->setObjectName(QString::fromUtf8("NewDialog"));
        NewDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(NewDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(NewDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        newTPLRadioButton = new QRadioButton(groupBox);
        newTPLRadioButton->setObjectName(QString::fromUtf8("newTPLRadioButton"));
        newTPLRadioButton->setChecked(true);

        verticalLayout_2->addWidget(newTPLRadioButton);

        newGCodeRadioButton = new QRadioButton(groupBox);
        newGCodeRadioButton->setObjectName(QString::fromUtf8("newGCodeRadioButton"));

        verticalLayout_2->addWidget(newGCodeRadioButton);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(NewDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewDialog);
    } // setupUi

    void retranslateUi(QDialog *NewDialog)
    {
        NewDialog->setWindowTitle(QApplication::translate("NewDialog", "Create new project or add NC files.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("NewDialog", "Creates a new empty project and closes the current one.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("NewDialog", "Create new or add existing:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        newTPLRadioButton->setToolTip(QApplication::translate("NewDialog", "Create a new TPL file by selecting a non-existing filename or select an exsiting TPL file and add it to the current project.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        newTPLRadioButton->setText(QApplication::translate("NewDialog", "TPL File (Tool Path Lanague)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        newGCodeRadioButton->setToolTip(QApplication::translate("NewDialog", "Create a new GCode file by selecting a non-existing filename or select an exsiting GCode file and add it to the current project.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        newGCodeRadioButton->setText(QApplication::translate("NewDialog", "G-Code File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewDialog: public Ui_NewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DIALOG_H
