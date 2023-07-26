#ifndef LIBRARY_H
#define LIBRARY_H

#include"bookcase.h"

typedef std::vector<BookCase *> vectCase;

class Library
{
public:
    Library();

    void addCaseBook(BookCase *bookcase);
    bool addBook(uint index, Book *book);
    QString displayBooksOfCase(int index);
    vectCase getArrCase() const;
    QString deleteBook(QString nameOfBook, uint index);
    void delBookFromTable(QString &bookName, int &caseNumber /*QString &bookAuthor*/);
    QString deleteCasebook(uint index);

    void writeBooksMethod(QVector<QString> &kj);

private:
    std::vector <BookCase*> arrCase;
    BookCase obj;
};

#endif // LIBRARY_H
