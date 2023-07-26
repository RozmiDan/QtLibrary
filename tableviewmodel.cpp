#include "tableviewmodel.h"
#include <QDebug>

TableViewModel::TableViewModel(QObject *parent)
{
    Q_UNUSED(parent);

}

int TableViewModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return arrBooksName.size();
}

int TableViewModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 3;
}

QVariant TableViewModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid())
       return QVariant();

    QVariant value;
    if (role == Qt::DisplayRole /*|| role == Qt::EditRole*/)
    {
        switch (index.column())
        {
            case 0:
            {
                value = arrBooksName.at(index.row());
                return value;
            }

            case 1:
            {
                 value = arrBooksAuth.at(index.row());
                 return value;
            }

            case 2:
            {
                 value = arrCaseNumber.at(index.row());
                 return value;
            }
        }
    }
    return QVariant();
}

Qt::ItemFlags TableViewModel::flags(const QModelIndex &index) const
{
    if(!index.isValid())
        return Qt::NoItemFlags;
    else if (index.column() != 0)
    {
        return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
    }
    return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
}

QVariant TableViewModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role != Qt::DisplayRole)
    {
        return QVariant();
    }


    else if (orientation == Qt::Horizontal)
    {
        if(section==0)
        {
            return QString("Название кгини");
        }

        else if(section==1)
        {
            return QString("Автор кгини");
        }

        else if(section==2)
        {
            return QString("Номер шкафа");
        }
    }

    else if (orientation == Qt::Vertical)
    {
        return section + 1;
    }

    else
    {
        return QVariant();
    }
}


bool TableViewModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if(!index.isValid())
        return false;
    if (role == Qt::EditRole && index.column() == 0)
    {
        if (value == "")
        {
            _nameOfDelBook = arrBooksName.at(index.row());
            _numberOfCaseDelBook = arrCaseNumber.at(index.row()).toInt();
            emit dataIsChanged(_nameOfDelBook, _numberOfCaseDelBook);

            //emit dataChanged(index,index);
            emit layoutChanged();
            return true;
        }

    }
    return false;
}

QString TableViewModel::nameOfDelBook() const
{
    return _nameOfDelBook;
}

int TableViewModel::numberOfCaseDelBook() const
{
    return _numberOfCaseDelBook;
}

void TableViewModel::setLibrary(std::vector<BookCase *> _arrCase)
{
    arrBooksName.clear();
    arrBooksAuth.clear();
    arrCaseNumber.clear();
    for(auto &var : _arrCase)
    {
        for(auto &a : var->getArrBook()) {
            arrCaseNumber.append(QString::number(var->getCaseBookNumber()));
            arrBooksName.append(a->getBookName());
            arrBooksAuth.append(a->getBookAuthor());
        }
    }
    emit layoutChanged();
}

/*
void TableViewModel::fillVector()
{
    libr.writeBooksMethod(_dataArr);
    qDebug() << _dataArr;
    emit layoutChanged();
}
*/
