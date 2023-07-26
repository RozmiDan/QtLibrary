#include "bookcase.h"
#include "ui_bookcase.h"
#include <QMessageBox>
#include <QDebug>

BookCase::BookCase(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::BookCase)
{
    ui->setupUi(this);

    connect(ui->addCaseButton,SIGNAL(clicked(bool)),SLOT(addCaseButtonClicked()));
    connect(ui->delCaseButton,SIGNAL(clicked(bool)),SLOT(delCaseButtonClicked()));

}

BookCase::BookCase(QString genrecasebook,int casenumber, uint caseaccomod)
{
    genrecasebook == ""? genrecasebook = "Not Stated" : _caseBookGenre = genrecasebook;
    _caseBookNumber = casenumber;
    _caseBookAccommodation = caseaccomod;
}

BookCase::~BookCase()
{
    delete ui;
}

void BookCase::addCaseButtonClicked()
{
    int cap = ui->addCapacityCaseBox->value();

    if(   (cap > 0) && (cap<5)   )
    {
        emit addButtonClicked(ui->addNumberCaseBox->value(), ui->addGenreCaseEdit->text(), ui->addCapacityCaseBox->value());
    }

    else
    {
        QMessageBox::critical(this,"Ошибка","Неправильное значение вместимости шкафа");
    }
}

void BookCase::delCaseButtonClicked()
{
    emit delButtonClicked(ui->delNumberCaseBox->value());
}

std::vector<Book *> BookCase::getArrBook() const
{
    return arrBook;
}

void BookCase::addBook(Book *book)
{
    arrBook.push_back(book);
}

QString BookCase::displayBooks()
{
    QString result;
    int counter = 1;
    if (arrBook.size() == 0)
    {
        return result = "Шкаф пустой";
    }

    foreach(const auto book, arrBook)
    {
        result += "\t Название книги: " + QString(book->getBookName()) + "\n";
        result += "\t Автор книги: " + QString(book->getBookAuthor()) + "\n";
        result += "\t Количество страниц: " + QString::number(book->getBookPages()) + "\n\n";
        counter++;
    }
    return result;
}

QString BookCase::deleteBook(QString nameOfBook)
{
    int index = 0;

    foreach (auto  const var, arrBook) {
        if (var->getBookName() == nameOfBook)
        {
            auto iter = arrBook.cbegin();
            arrBook.erase(iter + index);
            return "Книга удалена";
        }
        index++;
    }
    return "Книга не найдена";
}
//----------------------------------------------
/*
void BookCase::fillDataArr(QVector<QString> arr)
{
    qDebug() << "tttttttttttttttt";
    foreach (auto  const var, arrBook)
    {
       // arr[0]=("oioioio");
       // arr[0]=(var->getBookName());
        //arr->push_back(var->getBookAuthor());
       // arr->push_back(QString(var->getBookPages()));
    }

    arr.push_back("rtytryututyu");
}
*/
//----------------------------------------------
uint BookCase::getCaseBookAccommodation() const
{
    return _caseBookAccommodation;
}

int BookCase::getCaseBookNumber() const
{
    return _caseBookNumber;
}

QString BookCase::getCaseBookGenre() const
{
    return _caseBookGenre;
}

uint BookCase::getSizeOfCaseArr()
{
    return arrBook.size();
}
