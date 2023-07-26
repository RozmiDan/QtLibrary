/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Book
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_4;
    QLabel *addTitle;
    QLabel *label;
    QLineEdit *addNameBookEdit;
    QLabel *label_2;
    QLineEdit *addAuthorBookEdit;
    QLabel *label_3;
    QSpinBox *addQuanBookBox;
    QLabel *label_4;
    QSpinBox *addNumberBookBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addBookButton;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QLabel *delTitle;
    QLabel *label_8;
    QSpinBox *delNumberBookBox;
    QLabel *label_7;
    QLineEdit *delNameBookEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *delBookButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QFrame *Book)
    {
        if (Book->objectName().isEmpty())
            Book->setObjectName(QString::fromUtf8("Book"));
        Book->resize(497, 172);
        Book->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(Book);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 478, 159));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        addTitle = new QLabel(layoutWidget);
        addTitle->setObjectName(QString::fromUtf8("addTitle"));
        addTitle->setAlignment(Qt::AlignCenter);

        formLayout_4->setWidget(0, QFormLayout::SpanningRole, addTitle);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label);

        addNameBookEdit = new QLineEdit(layoutWidget);
        addNameBookEdit->setObjectName(QString::fromUtf8("addNameBookEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addNameBookEdit->sizePolicy().hasHeightForWidth());
        addNameBookEdit->setSizePolicy(sizePolicy);
        addNameBookEdit->setMinimumSize(QSize(131, 20));
        addNameBookEdit->setMaximumSize(QSize(131, 20));
        addNameBookEdit->setMaxLength(25);
        addNameBookEdit->setFrame(true);
        addNameBookEdit->setCursorPosition(0);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, addNameBookEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_2);

        addAuthorBookEdit = new QLineEdit(layoutWidget);
        addAuthorBookEdit->setObjectName(QString::fromUtf8("addAuthorBookEdit"));
        sizePolicy.setHeightForWidth(addAuthorBookEdit->sizePolicy().hasHeightForWidth());
        addAuthorBookEdit->setSizePolicy(sizePolicy);
        addAuthorBookEdit->setMinimumSize(QSize(131, 20));
        addAuthorBookEdit->setMaximumSize(QSize(131, 20));
        addAuthorBookEdit->setMaxLength(25);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, addAuthorBookEdit);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_3);

        addQuanBookBox = new QSpinBox(layoutWidget);
        addQuanBookBox->setObjectName(QString::fromUtf8("addQuanBookBox"));
        sizePolicy.setHeightForWidth(addQuanBookBox->sizePolicy().hasHeightForWidth());
        addQuanBookBox->setSizePolicy(sizePolicy);
        addQuanBookBox->setMinimumSize(QSize(131, 20));
        addQuanBookBox->setMaximumSize(QSize(131, 20));
        addQuanBookBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        addQuanBookBox->setMinimum(1);
        addQuanBookBox->setMaximum(1000);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, addQuanBookBox);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_4);

        addNumberBookBox = new QSpinBox(layoutWidget);
        addNumberBookBox->setObjectName(QString::fromUtf8("addNumberBookBox"));
        sizePolicy.setHeightForWidth(addNumberBookBox->sizePolicy().hasHeightForWidth());
        addNumberBookBox->setSizePolicy(sizePolicy);
        addNumberBookBox->setMinimumSize(QSize(131, 20));
        addNumberBookBox->setMaximumSize(QSize(131, 20));
        addNumberBookBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        addNumberBookBox->setMinimum(1);

        formLayout_4->setWidget(4, QFormLayout::FieldRole, addNumberBookBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 6, -1, -1);
        horizontalSpacer = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addBookButton = new QPushButton(layoutWidget);
        addBookButton->setObjectName(QString::fromUtf8("addBookButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(140);
        sizePolicy1.setVerticalStretch(21);
        sizePolicy1.setHeightForWidth(addBookButton->sizePolicy().hasHeightForWidth());
        addBookButton->setSizePolicy(sizePolicy1);
        addBookButton->setMinimumSize(QSize(140, 21));
        addBookButton->setMaximumSize(QSize(140, 21));

        horizontalLayout->addWidget(addBookButton);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        formLayout_4->setLayout(5, QFormLayout::SpanningRole, horizontalLayout);


        horizontalLayout_3->addLayout(formLayout_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalSpacer = new QSpacerItem(17, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);

        delTitle = new QLabel(layoutWidget);
        delTitle->setObjectName(QString::fromUtf8("delTitle"));
        delTitle->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::SpanningRole, delTitle);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        delNumberBookBox = new QSpinBox(layoutWidget);
        delNumberBookBox->setObjectName(QString::fromUtf8("delNumberBookBox"));
        sizePolicy.setHeightForWidth(delNumberBookBox->sizePolicy().hasHeightForWidth());
        delNumberBookBox->setSizePolicy(sizePolicy);
        delNumberBookBox->setMinimumSize(QSize(131, 20));
        delNumberBookBox->setMaximumSize(QSize(131, 20));
        delNumberBookBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        delNumberBookBox->setMinimum(1);
        delNumberBookBox->setStepType(QAbstractSpinBox::DefaultStepType);

        formLayout->setWidget(2, QFormLayout::FieldRole, delNumberBookBox);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        delNameBookEdit = new QLineEdit(layoutWidget);
        delNameBookEdit->setObjectName(QString::fromUtf8("delNameBookEdit"));
        sizePolicy.setHeightForWidth(delNameBookEdit->sizePolicy().hasHeightForWidth());
        delNameBookEdit->setSizePolicy(sizePolicy);
        delNameBookEdit->setMinimumSize(QSize(131, 20));
        delNameBookEdit->setMaximumSize(QSize(131, 20));
        delNameBookEdit->setMaxLength(25);

        formLayout->setWidget(3, QFormLayout::FieldRole, delNameBookEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 6, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        delBookButton = new QPushButton(layoutWidget);
        delBookButton->setObjectName(QString::fromUtf8("delBookButton"));
        sizePolicy1.setHeightForWidth(delBookButton->sizePolicy().hasHeightForWidth());
        delBookButton->setSizePolicy(sizePolicy1);
        delBookButton->setMinimumSize(QSize(140, 21));
        delBookButton->setMaximumSize(QSize(140, 21));

        horizontalLayout_2->addWidget(delBookButton);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        formLayout->setLayout(4, QFormLayout::SpanningRole, horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_2);


        horizontalLayout_3->addLayout(formLayout);


        retranslateUi(Book);

        QMetaObject::connectSlotsByName(Book);
    } // setupUi

    void retranslateUi(QFrame *Book)
    {
        Book->setWindowTitle(QApplication::translate("Book", "Frame", nullptr));
        addTitle->setText(QApplication::translate("Book", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203 \320\262 \321\210\320\272\320\260\321\204", nullptr));
        label->setText(QApplication::translate("Book", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\275\320\270\320\263\320\270:", nullptr));
        addNameBookEdit->setInputMask(QString());
        addNameBookEdit->setPlaceholderText(QApplication::translate("Book", " \320\240\321\203\321\201\320\273\320\260\320\275 \320\270 \320\233\321\216\320\264\320\274\320\270\320\273\320\260", nullptr));
        label_2->setText(QApplication::translate("Book", "\320\220\320\262\321\202\320\276\321\200 \320\272\320\275\320\270\320\263\320\270:", nullptr));
        addAuthorBookEdit->setPlaceholderText(QApplication::translate("Book", " \320\220.\320\241.\320\237\321\203\321\210\320\272\320\270\320\275", nullptr));
        label_3->setText(QApplication::translate("Book", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206:", nullptr));
        label_4->setText(QApplication::translate("Book", "\320\235\320\276\320\274\320\265\321\200 \321\210\320\272\320\260\321\204\320\260:", nullptr));
        addBookButton->setText(QApplication::translate("Book", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", nullptr));
        delTitle->setText(QApplication::translate("Book", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203:", nullptr));
        label_8->setText(QApplication::translate("Book", "\320\235\320\276\320\274\320\265\321\200 \321\210\320\272\320\260\321\204\320\260:", nullptr));
        label_7->setText(QApplication::translate("Book", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\275\320\270\320\263\320\270:", nullptr));
        delBookButton->setText(QApplication::translate("Book", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Book: public Ui_Book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
