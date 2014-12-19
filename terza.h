#ifndef TERZA_H
#define TERZA_H
/********************************************************************************
** Form generated from reading UI file 'terzaBC5741.ui'
**
** Created: Thu Mar 20 21:46:14 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TERZABC5741_H
#define TERZABC5741_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class ShowOutcome
{
public:
    QToolButton *outPreviousButton;
    QFrame *frame;
    QLabel *label_23;
    QTextEdit *outCapacity;
    QLabel *label_24;
    QTextEdit *outName;
    QLabel *label_14;
    QLabel *label_17;
    QLabel *outLabelName;
    QLabel *label_15;
    QToolButton *outNextButton;
    QTextEdit *outVendor;
    QTextEdit *outPrice;
    QTextEdit *outType;
    QFrame *softFrame;
    QLabel *label_16;
    QFrame *propFrame;
    QLabel *label_18;
    QLabel *label_19;
    QTextEdit *outAvailable;
    QFrame *frame_3;
    QLabel *label_20;
    QLabel *label_21;
    QTextEdit *outMonths;
    QLabel *label_22;
    QTextEdit *outSupportedOS;
    QPushButton *closeButton;
    QLabel *attention;

    virtual void setupUi(QDialog *Dialog);
    void retranslateUi(QDialog *Dialog);

};

namespace UiT {
    class OutForm: public ShowOutcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TERZABC5741_H

#endif // TERZA_H
