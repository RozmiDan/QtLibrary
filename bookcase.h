#ifndef BOOKCASE_H
#define BOOKCASE_H

#include "book.h"
#include <QFrame>

namespace Ui {
class BookCase;
}

class BookCase : public QFrame
{
    Q_OBJECT

public:
    explicit BookCase(QWidget *parent = nullptr);
    ~BookCase();

    BookCase(QString genrecasebook, int casenumber, uint caseaccomod);

    QString getCaseBookGenre() const;
    int getCaseBookNumber() const;
    uint getCaseBookAccommodation() const;
    uint getSizeOfCaseArr();
    void addBook(Book *book);
    QString displayBooks();
    QString deleteBook(QString nameOfBook);


    void fillDataArr(QVector<QString> arr);

    std::vector<Book *> getArrBook() const;

private slots:
    void addCaseButtonClicked();
    void delCaseButtonClicked();

signals:
    void addButtonClicked(int _num, QString _gen, uint _cap);
    void delButtonClicked(int _delNum);

private:
    Ui::BookCase *ui;

    QString _caseBookGenre;
    int _caseBookNumber;
    std::vector <Book*> arrBook;
    uint _caseBookAccommodation;

};

#endif // BOOKCASE_H
