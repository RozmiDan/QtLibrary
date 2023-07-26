#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "library.h"
#include "tableviewmodel.h"
#include "styleassist.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void resetButtonClicked();

private slots:
    bool shelfCaseAddBtnWidget(int _num, QString _gen, uint _cap);
    bool shelfCaseDelBtnWidget(int num);
    bool shelfBookAddBtnWidget(QString name, QString auth,int quan, int number);
    bool shelfBookDelBtnWidget(int number, QString name);
    void resetButtonHandler();

    void delTableValue(QString &name, int &num);
    void InsertValue();

    /*void shelfCaseDelBtnWidget();
    void shelfBookDelBtnWidget();*/

private:
    Ui::MainWindow *ui;
    Library lib;
    TableViewModel *mod;
    void setWindowStyle();
};

#endif // MAINWINDOW_H
