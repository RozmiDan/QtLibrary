#include "styleassist.h"


QString StyleAssist::getButtonStyle()
{
    return "QPushButton{"
           "color: white;"
           "border-radius: 4px;"
           "background-color: qlineargradient(spread:pad, x1:0.636, y1:0.5345, x2:0, y2:1, stop:0 rgba(30, 47, 174, 255), stop:1 "
           "rgba(153, 177, 255, 255));"
           "font-family: 'RAYDIS';"
           "font-size:10px;"
           "}"
           "QPushButton::hover{"
           "background-color: qlineargradient(spread:pad, x1:0.585, y1:0.347, x2:1, y2:0, stop:0 rgba(0, 134, 201, 255), stop:1 rgba(255, 255, 255, 255))"
           "}"
           "QPushButton::pressed{"
           "background-color: qlineargradient(spread:pad, x1:0.636, y1:0.5345, x2:0, y2:1, stop:0 rgba(30, 47, 174, 255), stop:1 "
           "rgba(153, 177, 255, 255))"
           "}";
}

QString StyleAssist::getMainWindowStyle()
{
    return  /*"QWidget{"
            "background-color: rgb(34, 34, 34);"
            "}";*/
            "QToolButton:first {"
            "color:red;"
            "}";

}

QString StyleAssist::getLineEditStyle()
{
    return "QLineEdit{"
           "background-color: none;"
           "background-color: rgb(127,199,255);"
           "border-radius: 6px;"
           "font-family: 'Plovdiv Display';"
           "font-size:12px;"
           "}"

           "QSpinBox{"
           "background-color: rgb(175,238,238);"
           "border-radius: 6px;"
           "font-family: 'Plovdiv Display';"
           "font-size:12px;"
           "}"

               "QLabel{"
               "font-family: 'Plovdiv Display';"
               "font-size:11px;"
               "}";
}

QString StyleAssist::getCaseBookStyle()
{
    return "background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(70, 82, 120, 255), stop:1 rgba(255, 255, 255, 255))";
}
