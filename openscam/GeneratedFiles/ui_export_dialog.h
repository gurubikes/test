/********************************************************************************
** Form generated from reading UI file 'export_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORT_DIALOG_H
#define UI_EXPORT_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *line;
    QRadioButton *surfaceRadioButton;
    QFrame *surfaceFrame;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QRadioButton *binarySTLRadioButton;
    QRadioButton *asciiSTLRadioButton;
    QRadioButton *toolPathRadioButton;
    QFrame *toolPathFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QRadioButton *compactJSONRadioButton;
    QRadioButton *prettyJSONRadioButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName(QString::fromUtf8("ExportDialog"));
        ExportDialog->setWindowModality(Qt::ApplicationModal);
        ExportDialog->resize(225, 325);
        ExportDialog->setMinimumSize(QSize(225, 325));
        ExportDialog->setMaximumSize(QSize(225, 325));
        ExportDialog->setModal(true);
        verticalLayout_3 = new QVBoxLayout(ExportDialog);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(ExportDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        line = new QFrame(ExportDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        surfaceRadioButton = new QRadioButton(ExportDialog);
        buttonGroup = new QButtonGroup(ExportDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(surfaceRadioButton);
        surfaceRadioButton->setObjectName(QString::fromUtf8("surfaceRadioButton"));
        surfaceRadioButton->setChecked(true);

        verticalLayout_3->addWidget(surfaceRadioButton);

        surfaceFrame = new QFrame(ExportDialog);
        surfaceFrame->setObjectName(QString::fromUtf8("surfaceFrame"));
        surfaceFrame->setFrameShape(QFrame::Box);
        surfaceFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(surfaceFrame);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, -1, -1, -1);
        label_3 = new QLabel(surfaceFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setUnderline(false);
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        binarySTLRadioButton = new QRadioButton(surfaceFrame);
        binarySTLRadioButton->setObjectName(QString::fromUtf8("binarySTLRadioButton"));
        binarySTLRadioButton->setChecked(true);

        verticalLayout->addWidget(binarySTLRadioButton);

        asciiSTLRadioButton = new QRadioButton(surfaceFrame);
        asciiSTLRadioButton->setObjectName(QString::fromUtf8("asciiSTLRadioButton"));

        verticalLayout->addWidget(asciiSTLRadioButton);


        verticalLayout_3->addWidget(surfaceFrame);

        toolPathRadioButton = new QRadioButton(ExportDialog);
        buttonGroup->addButton(toolPathRadioButton);
        toolPathRadioButton->setObjectName(QString::fromUtf8("toolPathRadioButton"));

        verticalLayout_3->addWidget(toolPathRadioButton);

        toolPathFrame = new QFrame(ExportDialog);
        toolPathFrame->setObjectName(QString::fromUtf8("toolPathFrame"));
        toolPathFrame->setFrameShape(QFrame::Box);
        toolPathFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(toolPathFrame);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, -1, -1, -1);
        label_2 = new QLabel(toolPathFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        compactJSONRadioButton = new QRadioButton(toolPathFrame);
        compactJSONRadioButton->setObjectName(QString::fromUtf8("compactJSONRadioButton"));
        compactJSONRadioButton->setChecked(true);

        verticalLayout_2->addWidget(compactJSONRadioButton);

        prettyJSONRadioButton = new QRadioButton(toolPathFrame);
        prettyJSONRadioButton->setObjectName(QString::fromUtf8("prettyJSONRadioButton"));

        verticalLayout_2->addWidget(prettyJSONRadioButton);


        verticalLayout_3->addWidget(toolPathFrame);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ExportDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(ExportDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QApplication::translate("ExportDialog", "Export", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExportDialog", "Export", 0, QApplication::UnicodeUTF8));
        surfaceRadioButton->setText(QApplication::translate("ExportDialog", "Surface", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ExportDialog", "STL Format", 0, QApplication::UnicodeUTF8));
        binarySTLRadioButton->setText(QApplication::translate("ExportDialog", "Binary", 0, QApplication::UnicodeUTF8));
        asciiSTLRadioButton->setText(QApplication::translate("ExportDialog", "ASCII (Text)", 0, QApplication::UnicodeUTF8));
        toolPathRadioButton->setText(QApplication::translate("ExportDialog", "Tool Path", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ExportDialog", "JSON Format", 0, QApplication::UnicodeUTF8));
        compactJSONRadioButton->setText(QApplication::translate("ExportDialog", "Compact", 0, QApplication::UnicodeUTF8));
        prettyJSONRadioButton->setText(QApplication::translate("ExportDialog", "Pretty", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORT_DIALOG_H
