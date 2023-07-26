/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "book.h"
#include "bookcase.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_4;
    Book *shelfBookWidget;
    QFrame *line;
    BookCase *shelfCaseWidget;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *numberCaseBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetDisplayButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_4;
    QLabel *displayLabel;
    QFrame *line_5;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_2;
    QTableView *tableView;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1022, 552);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/resources/pngegg (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1001, 521));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: none;"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(4, 5));
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 996, 493));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        shelfBookWidget = new Book(layoutWidget);
        shelfBookWidget->setObjectName(QString::fromUtf8("shelfBookWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shelfBookWidget->sizePolicy().hasHeightForWidth());
        shelfBookWidget->setSizePolicy(sizePolicy);
        shelfBookWidget->setMinimumSize(QSize(498, 170));
        shelfBookWidget->setMaximumSize(QSize(498, 170));

        horizontalLayout_4->addWidget(shelfBookWidget);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Raised);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout_4->addWidget(line);

        shelfCaseWidget = new BookCase(layoutWidget);
        shelfCaseWidget->setObjectName(QString::fromUtf8("shelfCaseWidget"));
        sizePolicy.setHeightForWidth(shelfCaseWidget->sizePolicy().hasHeightForWidth());
        shelfCaseWidget->setSizePolicy(sizePolicy);
        shelfCaseWidget->setMinimumSize(QSize(491, 162));
        shelfCaseWidget->setMaximumSize(QSize(491, 162));

        horizontalLayout_4->addWidget(shelfCaseWidget);


        verticalLayout_3->addLayout(horizontalLayout_4);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setStyleSheet(QString::fromUtf8(""));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 4, -1);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(300, 20));

        horizontalLayout->addWidget(label_3);

        numberCaseBox = new QSpinBox(layoutWidget);
        numberCaseBox->setObjectName(QString::fromUtf8("numberCaseBox"));
        numberCaseBox->setEnabled(true);
        sizePolicy.setHeightForWidth(numberCaseBox->sizePolicy().hasHeightForWidth());
        numberCaseBox->setSizePolicy(sizePolicy);
        numberCaseBox->setMinimumSize(QSize(40, 15));
        numberCaseBox->setMaximumSize(QSize(50, 20));
        numberCaseBox->setToolTipDuration(-1);
        numberCaseBox->setLayoutDirection(Qt::LeftToRight);
        numberCaseBox->setWrapping(false);
        numberCaseBox->setAlignment(Qt::AlignCenter);
        numberCaseBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        numberCaseBox->setMinimum(1);

        horizontalLayout->addWidget(numberCaseBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        resetDisplayButton = new QPushButton(layoutWidget);
        resetDisplayButton->setObjectName(QString::fromUtf8("resetDisplayButton"));
        sizePolicy.setHeightForWidth(resetDisplayButton->sizePolicy().hasHeightForWidth());
        resetDisplayButton->setSizePolicy(sizePolicy);
        resetDisplayButton->setMinimumSize(QSize(100, 30));
        resetDisplayButton->setMaximumSize(QSize(100, 30));

        horizontalLayout_2->addWidget(resetDisplayButton);

        horizontalSpacer_2 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_3->addLayout(verticalLayout_2);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        sizePolicy.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy);
        line_4->setMinimumSize(QSize(0, 124));
        line_4->setFrameShadow(QFrame::Raised);
        line_4->setFrameShape(QFrame::VLine);

        horizontalLayout_3->addWidget(line_4);

        displayLabel = new QLabel(layoutWidget);
        displayLabel->setObjectName(QString::fromUtf8("displayLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(250);
        sizePolicy1.setVerticalStretch(250);
        sizePolicy1.setHeightForWidth(displayLabel->sizePolicy().hasHeightForWidth());
        displayLabel->setSizePolicy(sizePolicy1);
        displayLabel->setMinimumSize(QSize(300, 300));
        displayLabel->setMaximumSize(QSize(300, 300));
        displayLabel->setStyleSheet(QString::fromUtf8(""));
        displayLabel->setMidLineWidth(11);
        displayLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(displayLabel);

        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        sizePolicy.setHeightForWidth(line_5->sizePolicy().hasHeightForWidth());
        line_5->setSizePolicy(sizePolicy);
        line_5->setMinimumSize(QSize(0, 124));
        line_5->setFrameShadow(QFrame::Raised);
        line_5->setFrameShape(QFrame::VLine);

        horizontalLayout_3->addWidget(line_5);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(230, 50, 521, 391));
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableView->horizontalHeader()->setDefaultSectionSize(170);
        tableView->horizontalHeader()->setMinimumSectionSize(165);
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1022, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\224\320\273\321\217 \320\262\321\213\320\262\320\276\320\264\320\260 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\263\320\276 \321\210\320\272\320\260\321\204\320\260 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \321\210\320\272\320\260\321\204\320\260:", nullptr));
#ifndef QT_NO_STATUSTIP
        numberCaseBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        resetDisplayButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        displayLabel->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\263\320\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\265 \320\276\320\272\320\275\320\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
