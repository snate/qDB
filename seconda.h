#ifndef SECONDA_H
#define SECONDA_H
/********************************************************************************
** Form generated from reading UI file 'secondaBC2700.ui'
**
** Created: Thu Mar 20 20:17:55 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SECONDABC2700_H
#define SECONDABC2700_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include<QDialog>
#include"app.h"

QT_BEGIN_NAMESPACE

class InputSearchForm
{
public:
    QTabWidget *tabWidget;
    QWidget *propTab;
    QLabel *propLabelAvailable;
    QTextEdit *propName;
    QCheckBox *propAvailable;
    QLabel *propLabelVendor;
    QLabel *propLabelOS;
    QSlider *propPriceSelector;
    QComboBox *propType;
    QPushButton *propGo;
    QCheckBox *propLion;
    QCheckBox *propUbuntu;
    QLCDNumber *propShowPrice;
    QTextEdit *propVendor;
    QLabel *propLabelName;
    QLabel *propLabelType;
    QLabel *propLabelPrice;
    QWidget *shareTab;
    QLabel *shareLabelOS;
    QTextEdit *shareVendor;
    QTextEdit *shareName;
    QLabel *shareLabelPrice;
    QLabel *shareLabelMonths;
    QPushButton *shareGo;
    QCheckBox *shareLion;
    QSlider *shareMonthsSelector;
    QComboBox *shareType;
    QLCDNumber *shareShowPrice;
    QLabel *shareLabelType;
    QLabel *shareLabelName;
    QLabel *shareLabelVendor;
    QCheckBox *shareUbuntu;
    QSlider *sharePriceSelector;
    QLCDNumber *shareShowMonths;
    QWidget *hardwareTab;
    QLabel *hardLabelType;
    QLCDNumber *hardShowPrice;
    QLCDNumber *hardShowCap;
    QPushButton *hardGo;
    QSlider *hardCapSelector;
    QSlider *hardPriceSelector;
    QTextEdit *hardName;
    QTextEdit *hardVendor;
    QComboBox *hardType;
    QLabel *hardLabelCapacity;
    QLabel *hardLabelName;
    QLabel *hardLabelVendor;
    QLabel *hardLabelPrice;
    QPushButton *closeButton;

    virtual void setupUi(QDialog *Dialog);
    void retranslateUi(QDialog *Dialog);
};

namespace UiS {
    class SearchForm: public QDialog {
        Q_OBJECT
    private:
        Cont<product>* shop;
        Cont<product>::iterator it;
        InputSearchForm* f;
    public:
        SearchForm(Cont<product>*);
        void setupUi(QDialog *Dialog);
    public slots:
        void searchP();
        void searchS();
        void searchH();
        void chiudi();
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // SECONDABC2700_H

#endif // SECONDA_H
