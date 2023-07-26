#ifndef BOOK_H
#define BOOK_H

#include <QFrame>

namespace Ui {
class Book;
}

class Book : public QFrame
{
    Q_OBJECT

public:
    explicit Book(QWidget *parent = nullptr);
    ~Book();

    Book(QString bookname, QString author, int pages);

    QString getBookName() const;
    QString getBookAuthor() const;
    int getBookPages() const;

private slots:
    void addBookButtonClicked();
    void delBookButtonClicked();

signals:
    void addButtonClicked(QString _name,QString _auth,int _quan,int number);
    void delButtonClicked(int _delNumber, QString _delName);

private:
    Ui::Book *ui;

    QString _bookName;
    QString _bookAuthor;
    int _bookPages;
};

#endif // BOOK_H
