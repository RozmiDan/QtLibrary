#include "library.h"
#include <QDebug>

Library::Library()
{

}

void Library::addCaseBook(BookCase *bookcase)
{
    arrCase.push_back(bookcase);
}

bool Library::addBook(uint index, Book *book)
{
    if (arrCase[index]->getCaseBookAccommodation() - arrCase[index]->getSizeOfCaseArr() != 0)
    {
        arrCase[index]->addBook(book);
        return true;
    }
    return false;
}

QString Library::displayBooksOfCase(int index)
{
    foreach (const auto &var, arrCase)
    {
        if (var->getCaseBookNumber() == index)
        {
            return var->displayBooks();
        }
    }
    return "Данного шкафа не существует";
}

QString Library::deleteBook(QString nameOfBook, uint index)
{
    QString result;
    return result = arrCase[index]->deleteBook(nameOfBook);
}

void Library::delBookFromTable(QString &bookName, int &caseNumber/* QString &bookAuthor*/)
{

    //qDebug() << arrCase.size();
    for(auto &var: arrCase)
    {

        if(var->getCaseBookNumber()==caseNumber)
        {
            var->deleteBook(bookName);

        }
    }
}

QString Library::deleteCasebook(uint index)
{
    if((index <= sizeof(arrCase)) && (arrCase.size()!=0))
    {
        auto iter = arrCase.cbegin();
        arrCase.erase(iter + (int)index);
        return "Шкаф удален";
    }
    else
    {
        return "Шкаф не найден";
    }
}

vectCase Library::getArrCase() const
{
    return arrCase;
}


//-----------------------------------
/*
void Library::writeBooksMethod(QVector<QString> &kj)
{
    kj.push_back("   v");
        qDebug() << "tttttttttttttttttt";
        for (auto& ht : arrCase)
        {
            qDebug() << "fffffffffffffffff";
            qDebug() << ht;
            kj.push_back("   b");
        }
    kj.push_back("   h");

}
*/
