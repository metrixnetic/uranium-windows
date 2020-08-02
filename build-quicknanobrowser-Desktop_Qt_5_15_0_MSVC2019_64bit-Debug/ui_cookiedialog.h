/********************************************************************************
** Form generated from reading UI file 'cookiedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COOKIEDIALOG_H
#define UI_COOKIEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CookieDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *m_nameLineEdit;
    QLabel *label_2;
    QLineEdit *m_domainLineEdit;
    QLabel *label_4;
    QLineEdit *m_pathLineEdit;
    QLabel *label_5;
    QComboBox *m_isHttpOnlyComboBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_addButton;
    QPushButton *m_cancelButton;
    QComboBox *m_isSecureComboBox;
    QLabel *label_6;
    QLineEdit *m_valueLineEdit;
    QDateEdit *m_dateEdit;
    QLabel *label_7;

    void setupUi(QDialog *CookieDialog)
    {
        if (CookieDialog->objectName().isEmpty())
            CookieDialog->setObjectName(QString::fromUtf8("CookieDialog"));
        CookieDialog->resize(400, 245);
        formLayout = new QFormLayout(CookieDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(CookieDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        m_nameLineEdit = new QLineEdit(CookieDialog);
        m_nameLineEdit->setObjectName(QString::fromUtf8("m_nameLineEdit"));
        m_nameLineEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, m_nameLineEdit);

        label_2 = new QLabel(CookieDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        m_domainLineEdit = new QLineEdit(CookieDialog);
        m_domainLineEdit->setObjectName(QString::fromUtf8("m_domainLineEdit"));
        m_domainLineEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, m_domainLineEdit);

        label_4 = new QLabel(CookieDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        m_pathLineEdit = new QLineEdit(CookieDialog);
        m_pathLineEdit->setObjectName(QString::fromUtf8("m_pathLineEdit"));
        m_pathLineEdit->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, m_pathLineEdit);

        label_5 = new QLabel(CookieDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        m_isHttpOnlyComboBox = new QComboBox(CookieDialog);
        m_isHttpOnlyComboBox->setObjectName(QString::fromUtf8("m_isHttpOnlyComboBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, m_isHttpOnlyComboBox);

        label_3 = new QLabel(CookieDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_addButton = new QPushButton(CookieDialog);
        m_addButton->setObjectName(QString::fromUtf8("m_addButton"));
        m_addButton->setEnabled(true);

        horizontalLayout->addWidget(m_addButton);

        m_cancelButton = new QPushButton(CookieDialog);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));

        horizontalLayout->addWidget(m_cancelButton);


        formLayout->setLayout(8, QFormLayout::FieldRole, horizontalLayout);

        m_isSecureComboBox = new QComboBox(CookieDialog);
        m_isSecureComboBox->setObjectName(QString::fromUtf8("m_isSecureComboBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, m_isSecureComboBox);

        label_6 = new QLabel(CookieDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        m_valueLineEdit = new QLineEdit(CookieDialog);
        m_valueLineEdit->setObjectName(QString::fromUtf8("m_valueLineEdit"));
        m_valueLineEdit->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, m_valueLineEdit);

        m_dateEdit = new QDateEdit(CookieDialog);
        m_dateEdit->setObjectName(QString::fromUtf8("m_dateEdit"));
        m_dateEdit->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, m_dateEdit);

        label_7 = new QLabel(CookieDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        QWidget::setTabOrder(m_nameLineEdit, m_domainLineEdit);
        QWidget::setTabOrder(m_domainLineEdit, m_valueLineEdit);
        QWidget::setTabOrder(m_valueLineEdit, m_dateEdit);
        QWidget::setTabOrder(m_dateEdit, m_pathLineEdit);
        QWidget::setTabOrder(m_pathLineEdit, m_isHttpOnlyComboBox);
        QWidget::setTabOrder(m_isHttpOnlyComboBox, m_isSecureComboBox);
        QWidget::setTabOrder(m_isSecureComboBox, m_addButton);
        QWidget::setTabOrder(m_addButton, m_cancelButton);

        retranslateUi(CookieDialog);
        QObject::connect(m_cancelButton, SIGNAL(clicked()), CookieDialog, SLOT(reject()));
        QObject::connect(m_addButton, SIGNAL(clicked()), CookieDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(CookieDialog);
    } // setupUi

    void retranslateUi(QDialog *CookieDialog)
    {
        CookieDialog->setWindowTitle(QCoreApplication::translate("CookieDialog", "Cookie", nullptr));
        label->setText(QCoreApplication::translate("CookieDialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("CookieDialog", "Domain", nullptr));
        label_4->setText(QCoreApplication::translate("CookieDialog", "Path", nullptr));
        label_5->setText(QCoreApplication::translate("CookieDialog", "isHttpOnly", nullptr));
        label_3->setText(QCoreApplication::translate("CookieDialog", "isSecure", nullptr));
        m_addButton->setText(QCoreApplication::translate("CookieDialog", "Add", nullptr));
        m_cancelButton->setText(QCoreApplication::translate("CookieDialog", "Cancel", nullptr));
        label_6->setText(QCoreApplication::translate("CookieDialog", "Value", nullptr));
        label_7->setText(QCoreApplication::translate("CookieDialog", "Expires", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CookieDialog: public Ui_CookieDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COOKIEDIALOG_H
