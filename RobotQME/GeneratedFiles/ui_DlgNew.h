/********************************************************************************
** Form generated from reading UI file 'DlgNew.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGNEW_H
#define UI_DLGNEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DlgNew
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *text_width;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *text_height;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_accept;
    QPushButton *btn_cancel;

    void setupUi(QDialog *DlgNew)
    {
        if (DlgNew->objectName().isEmpty())
            DlgNew->setObjectName(QString::fromUtf8("DlgNew"));
        DlgNew->resize(179, 99);
        verticalLayout = new QVBoxLayout(DlgNew);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DlgNew);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(label);

        text_width = new QLineEdit(DlgNew);
        text_width->setObjectName(QString::fromUtf8("text_width"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text_width->sizePolicy().hasHeightForWidth());
        text_width->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(text_width);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(DlgNew);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(20, 0));

        horizontalLayout_2->addWidget(label_2);

        text_height = new QLineEdit(DlgNew);
        text_height->setObjectName(QString::fromUtf8("text_height"));

        horizontalLayout_2->addWidget(text_height);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_accept = new QPushButton(DlgNew);
        btn_accept->setObjectName(QString::fromUtf8("btn_accept"));

        horizontalLayout_3->addWidget(btn_accept);

        btn_cancel = new QPushButton(DlgNew);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));

        horizontalLayout_3->addWidget(btn_cancel);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(DlgNew);

        QMetaObject::connectSlotsByName(DlgNew);
    } // setupUi

    void retranslateUi(QDialog *DlgNew)
    {
        DlgNew->setWindowTitle(QApplication::translate("DlgNew", "\346\226\260\345\273\272\345\234\260\345\233\276", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DlgNew", "\345\256\275", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DlgNew", "\351\253\230", 0, QApplication::UnicodeUTF8));
        btn_accept->setText(QApplication::translate("DlgNew", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btn_cancel->setText(QApplication::translate("DlgNew", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DlgNew: public Ui_DlgNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGNEW_H
