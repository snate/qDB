#ifndef PRIMAPE2882_H
#define PRIMAPE2882_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *ware;
    QLabel *label_13;
    QLabel *label_14;
    QTextEdit *wareVendor;
    QLabel *label_15;
    QTextEdit *wareName;
    QLabel *label_17;
    QFrame *softFrame;
    QLabel *label_16;
    QFrame *propFrame;
    QLabel *label_18;
    QLabel *label_19;
    QTextEdit *wareAvailable;
    QFrame *frame_3;
    QLabel *label_20;
    QLabel *label_21;
    QTextEdit *wareMonths;
    QLabel *label_22;
    QTextEdit *wareSupportedOS;
    QTextEdit *wareType;
    QFrame *hardFrame;
    QLabel *label_23;
    QTextEdit *wareCapacity;
    QLabel *label_24;
    QTextEdit *warePrice;
    QToolButton *nextButton;
    QToolButton *previousButton;
    QPushButton *editButton;
    QPushButton *removeButton;
    QWidget *software;
    QComboBox *propType;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *propName;
    QTextEdit *propVendor;
    QLabel *label_4;
    QCheckBox *propUbuntu;
    QCheckBox *propLion;
    QLabel *label_5;
    QLabel *label_6;
    QSlider *propPriceSelector;
    QLCDNumber *propShowPrice;
    QCheckBox *propAvailable;
    QPushButton *propInsert;
    QWidget *shareware;
    QLabel *label_7;
    QLCDNumber *shareShowPrice;
    QLabel *label_8;
    QCheckBox *shareUbuntu;
    QTextEdit *shareName;
    QComboBox *shareType;
    QLabel *label_9;
    QCheckBox *shareLion;
    QTextEdit *shareVendor;
    QLabel *label_10;
    QLabel *label_11;
    QSlider *sharePriceSelector;
    QLabel *label_12;
    QLCDNumber *shareShowMonths;
    QSlider *shareMonthsSelector;
    QPushButton *shareInsert;
    QWidget *hardware;
    QLabel *label_25;
    QLCDNumber *hardShowCap;
    QSlider *hardCapSelector;
    QTextEdit *hardVendor;
    QLabel *label_26;
    QTextEdit *hardName;
    QLabel *label_27;
    QLabel *label_28;
    QLCDNumber *hardShowPrice;
    QLabel *label_29;
    QSlider *hardPriceSelector;
    QComboBox *hardType;
    QPushButton *hardInsert;
    QPushButton *findButton;
    QPushButton *sortButton;
    QPushButton *closeButton;

    virtual void setupUi(QDialog* Dialog); // setupUi

    void retranslateUi(QDialog* Dialog);   //retranslate Ui

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PRIMAPE2882_H
