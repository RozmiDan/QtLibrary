#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFontDatabase>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mod = new TableViewModel();
    ui->tableView->setModel(mod);

    connect(ui->resetDisplayButton, SIGNAL(clicked(bool)), this, SLOT(resetButtonHandler()));

    connect(ui->shelfCaseWidget, &BookCase::addButtonClicked,this, &MainWindow::shelfCaseAddBtnWidget);
    connect(ui->shelfBookWidget, &Book::addButtonClicked,this ,&MainWindow::shelfBookAddBtnWidget);
    connect(ui->shelfCaseWidget, &BookCase::delButtonClicked,this ,&MainWindow::shelfCaseDelBtnWidget);
    connect(ui->shelfBookWidget, &Book::delButtonClicked,this ,&MainWindow::shelfBookDelBtnWidget);

    connect(mod,&TableViewModel::dataIsChanged,this,&MainWindow::delTableValue);

    connect(ui->shelfBookWidget, &Book::addButtonClicked,this ,&MainWindow::InsertValue);
    connect(ui->shelfCaseWidget, &BookCase::delButtonClicked,this ,&MainWindow::InsertValue);
    connect(ui->shelfBookWidget, &Book::delButtonClicked,this ,&MainWindow::InsertValue);
    setWindowStyle();

    QFontDatabase::addApplicationFont(":/Fonts/ofont.ru_Raydis.ttf");
    QFontDatabase::addApplicationFont(":/Fonts/ofont.ru_Plovdiv.ttf");
    /*
     * int id =
       QString family = QFontDatabase::applicationFontFamilies(id).at(0); //имя шрифта
       qDebug() << family;
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::shelfCaseAddBtnWidget(int _num, QString _gen, uint _cap)
{
    foreach(const auto &bookcase, lib.getArrCase())
    {
        if(bookcase->getCaseBookNumber()==_num)
        {
            QMessageBox::critical(this,"Ошибка","Шкаф с данным номером существует");
            return 0;
        }
    }
    lib.addCaseBook(new BookCase(_gen, _num, _cap));
    return 0;
}

bool MainWindow::shelfCaseDelBtnWidget(int num)
{
    uint counter = 0;
    QString result;
    foreach (const auto& bookcase, lib.getArrCase())
    {
        if(bookcase->getCaseBookNumber() == num)
        {
           result = lib.deleteCasebook(counter);
           QMessageBox::warning(this,"Сообщение", result);
           return 0;
        }
        counter++;
    }
    QMessageBox::critical(this,"Сообщение", "Данного шкафа не существует");
    return 0;
}

bool MainWindow::shelfBookAddBtnWidget(QString name, QString auth, int quan, int number)
{
    uint counter = 0;
    foreach (const auto& bookcase, lib.getArrCase())
    {
        if(bookcase->getCaseBookNumber() == number)
        {
            if(lib.addBook(counter,new Book(name, auth , quan)))
            {
                QMessageBox::about(this,"Сообщение", "Книга добавлена в шкаф");
                return 0;
            }
            else if (!(lib.addBook(counter,new Book(name, auth , quan))))
            {
                QMessageBox::critical(this,"Сообщение", "В данном шкафу недостаточно места");
                return 0;
            }

        }
        counter++;
    }
    QMessageBox::critical(this,"Сообщение", "Данного шкафа не существует");
    return 0;
}

bool MainWindow::shelfBookDelBtnWidget(int number, QString name)
{
    uint counter = 0;
    QString res;
    foreach (const auto& bookcase, lib.getArrCase())
    {
        if(bookcase->getCaseBookNumber() == number)
        {
            res = lib.deleteBook(name, counter);
            QMessageBox::warning(this,"Сообщение", res);
            return 0;
        }
        counter++;
    }
    QMessageBox::critical(this,"Сообщение", "Данного шкафа не существует");
    return 0;
}

void MainWindow::resetButtonHandler()
{
    int readCaseNumber = ui->numberCaseBox->value();
    ui->displayLabel->setText(lib.displayBooksOfCase(readCaseNumber));
}

void MainWindow::delTableValue(QString &name, int &num)
{
    lib.delBookFromTable(name,num);
    InsertValue();
}

//________________________________________________

void MainWindow::InsertValue()
{
    mod->setLibrary(lib.getArrCase());
}

//----------------------------
void MainWindow::setWindowStyle()
{
    //ui->shelfBookWidget->setStyleSheet(StyleAssist::getCaseBookStyle());
    ui->tabWidget->setStyleSheet(StyleAssist::getButtonStyle());
    this->setStyleSheet(StyleAssist::getLineEditStyle());
    ui->tabWidget->setStyleSheet("font-family: 'RAYDIS'; font-size:8px;");
    //ui->tabWidget->setStyleSheet(StyleAssist::getMainWindowStyle());
}

