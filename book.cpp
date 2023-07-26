#include "book.h"
#include "ui_book.h"

Book::Book(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Book)
{
    ui->setupUi(this);

    connect(ui->addBookButton,SIGNAL(clicked(bool)),this,SLOT(addBookButtonClicked()));
    connect(ui->delBookButton,SIGNAL(clicked(bool)),this,SLOT(delBookButtonClicked()));
}

Book::~Book()
{
    delete ui;
}

Book::Book(QString bookname, QString author, int pages)
{
    bookname != ""? _bookName = bookname : _bookName = "Не указано";
    author != ""? _bookAuthor = author : _bookAuthor = "Не указан";
    ((pages > 0) && (pages < 10000)) ? _bookPages = pages : _bookPages = 1;
}

void Book::addBookButtonClicked()
{
    emit addButtonClicked(ui->addNameBookEdit->text(), ui->addAuthorBookEdit->text(), ui->addQuanBookBox->value(), ui->addNumberBookBox->value());
}

void Book::delBookButtonClicked()
{
    emit delButtonClicked(ui->delNumberBookBox->value(), ui->delNameBookEdit->text());
}

QString Book::getBookName() const
{
    return _bookName;
}

QString Book::getBookAuthor() const
{
    return _bookAuthor;
}

int Book::getBookPages() const
{
    return _bookPages;
}
