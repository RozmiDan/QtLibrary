/********************************************************************************
** Form generated from reading UI file 'bookcase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKCASE_H
#define UI_BOOKCASE_H

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

class Ui_BookCase
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_5;
    QLabel *addTitle;
    QLabel *label;
    QLineEdit *addGenreCaseEdit;
    QLabel *label_2;
    QSpinBox *addNumberCaseBox;
    QLabel *label_3;
    QSpinBox *addCapacityCaseBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addCaseButton;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QLabel *delTitle;
    QLabel *label_4;
    QSpinBox *delNumberCaseBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *delCaseButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QFrame *BookCase)
    {
        if (BookCase->objectName().isEmpty())
            BookCase->setObjectName(QString::fromUtf8("BookCase"));
        BookCase->resize(495, 148);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BookCase->sizePolicy().hasHeightForWidth());
        BookCase->setSizePolicy(sizePolicy);
        BookCase->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(BookCase);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 475, 129));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        addTitle = new QLabel(layoutWidget);
        addTitle->setObjectName(QString::fromUtf8("addTitle"));
        addTitle->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(0, QFormLayout::SpanningRole, addTitle);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label);

        addGenreCaseEdit = new QLineEdit(layoutWidget);
        addGenreCaseEdit->setObjectName(QString::fromUtf8("addGenreCaseEdit"));
        sizePolicy.setHeightForWidth(addGenreCaseEdit->sizePolicy().hasHeightForWidth());
        addGenreCaseEdit->setSizePolicy(sizePolicy);
        addGenreCaseEdit->setMinimumSize(QSize(131, 20));
        addGenreCaseEdit->setMaximumSize(QSize(131, 20));
        addGenreCaseEdit->setStyleSheet(QString::fromUtf8(""));
        addGenreCaseEdit->setMaxLength(25);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, addGenreCaseEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_2);

        addNumberCaseBox = new QSpinBox(layoutWidget);
        addNumberCaseBox->setObjectName(QString::fromUtf8("addNumberCaseBox"));
        sizePolicy.setHeightForWidth(addNumberCaseBox->sizePolicy().hasHeightForWidth());
        addNumberCaseBox->setSizePolicy(sizePolicy);
        addNumberCaseBox->setMinimumSize(QSize(131, 20));
        addNumberCaseBox->setMaximumSize(QSize(131, 20));
        addNumberCaseBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        addNumberCaseBox->setMinimum(1);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, addNumberCaseBox);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_3);

        addCapacityCaseBox = new QSpinBox(layoutWidget);
        addCapacityCaseBox->setObjectName(QString::fromUtf8("addCapacityCaseBox"));
        sizePolicy.setHeightForWidth(addCapacityCaseBox->sizePolicy().hasHeightForWidth());
        addCapacityCaseBox->setSizePolicy(sizePolicy);
        addCapacityCaseBox->setMinimumSize(QSize(131, 20));
        addCapacityCaseBox->setMaximumSize(QSize(131, 20));
        addCapacityCaseBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        addCapacityCaseBox->setMinimum(1);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, addCapacityCaseBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 6, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addCaseButton = new QPushButton(layoutWidget);
        addCaseButton->setObjectName(QString::fromUtf8("addCaseButton"));
        sizePolicy.setHeightForWidth(addCaseButton->sizePolicy().hasHeightForWidth());
        addCaseButton->setSizePolicy(sizePolicy);
        addCaseButton->setMinimumSize(QSize(140, 21));
        addCaseButton->setMaximumSize(QSize(160, 21));

        horizontalLayout->addWidget(addCaseButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        formLayout_5->setLayout(4, QFormLayout::SpanningRole, horizontalLayout);


        horizontalLayout_3->addLayout(formLayout_5);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalSpacer = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);

        delTitle = new QLabel(layoutWidget);
        delTitle->setObjectName(QString::fromUtf8("delTitle"));
        delTitle->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::SpanningRole, delTitle);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        delNumberCaseBox = new QSpinBox(layoutWidget);
        delNumberCaseBox->setObjectName(QString::fromUtf8("delNumberCaseBox"));
        sizePolicy.setHeightForWidth(delNumberCaseBox->sizePolicy().hasHeightForWidth());
        delNumberCaseBox->setSizePolicy(sizePolicy);
        delNumberCaseBox->setMinimumSize(QSize(131, 20));
        delNumberCaseBox->setMaximumSize(QSize(131, 20));
        delNumberCaseBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        delNumberCaseBox->setMinimum(1);

        formLayout->setWidget(2, QFormLayout::FieldRole, delNumberCaseBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 6, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        delCaseButton = new QPushButton(layoutWidget);
        delCaseButton->setObjectName(QString::fromUtf8("delCaseButton"));
        sizePolicy.setHeightForWidth(delCaseButton->sizePolicy().hasHeightForWidth());
        delCaseButton->setSizePolicy(sizePolicy);
        delCaseButton->setMinimumSize(QSize(140, 21));
        delCaseButton->setMaximumSize(QSize(160, 21));

        horizontalLayout_2->addWidget(delCaseButton);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_2);


        horizontalLayout_3->addLayout(formLayout);


        retranslateUi(BookCase);

        QMetaObject::connectSlotsByName(BookCase);
    } // setupUi

    void retranslateUi(QFrame *BookCase)
    {
        BookCase->setWindowTitle(QApplication::translate("BookCase", "Frame", nullptr));
        addTitle->setText(QApplication::translate("BookCase", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\210\320\272\320\260\321\204", nullptr));
        label->setText(QApplication::translate("BookCase", "\320\226\320\260\320\275\321\200 \321\210\320\272\320\260\321\204\320\260:", nullptr));
        addGenreCaseEdit->setPlaceholderText(QApplication::translate("BookCase", "\320\232\320\273\320\260\321\201\321\201\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\273\320\270\321\202\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        label_2->setText(QApplication::translate("BookCase", "\320\235\320\276\320\274\320\265\321\200 \321\210\320\272\320\260\321\204\320\260:", nullptr));
        label_3->setText(QApplication::translate("BookCase", "\320\222\320\274\320\265\321\201\321\202\320\270\320\274\320\276\321\201\321\202\321\214 \321\210\320\272\320\260\321\204\320\260:", nullptr));
        addCaseButton->setText(QApplication::translate("BookCase", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\210\320\272\320\260\321\204", nullptr));
        delTitle->setText(QApplication::translate("BookCase", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\210\320\272\320\260\321\204:", nullptr));
        label_4->setText(QApplication::translate("BookCase", "\320\235\320\276\320\274\320\265\321\200 \321\210\320\272\320\260\321\204\320\260:", nullptr));
        delCaseButton->setText(QApplication::translate("BookCase", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\210\320\272\320\260\321\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookCase: public Ui_BookCase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKCASE_H
