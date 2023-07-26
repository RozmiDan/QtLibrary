#ifndef TABLEVIEWMODEL_H
#define TABLEVIEWMODEL_H

#include <QAbstractTableModel>
#include <QObject>
#include "library.h"
#include "book.h"


class TableViewModel : public QAbstractTableModel
{
    Q_OBJECT
public:

    TableViewModel(QObject *parent=nullptr);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    void setLibrary(std::vector<BookCase *> _arrCase);
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);


    QString nameOfDelBook() const;

    int numberOfCaseDelBook() const;

public slots:
    //void fillVector();

signals:
    void dataIsChanged(QString &name, int &number);

private:
    //int _rowCount = 0;
    //int _columCount = 0;
    //QList <QString> list;
    //QList<QList<QString>> lst;

    QString _nameOfDelBook;
    int _numberOfCaseDelBook;

    QList <QString> arrBooksName;
    QList <QString> arrBooksAuth;
    QList <QString> arrCaseNumber;

};

#endif // TABLEVIEWMODEL_H
