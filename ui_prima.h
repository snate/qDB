/********************************************************************************
** Form generated from reading UI file 'prima.ui'
**
** Created: Thu Mar 20 19:42:21 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMA_H
#define UI_PRIMA_H

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
    QFrame *frame;
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

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(600, 484);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 581, 401));
        ware = new QWidget();
        ware->setObjectName(QString::fromUtf8("ware"));
        label_13 = new QLabel(ware);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 32, 66, 17));
        label_14 = new QLabel(ware);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 121, 66, 17));
        wareVendor = new QTextEdit(ware);
        wareVendor->setObjectName(QString::fromUtf8("wareVendor"));
        wareVendor->setGeometry(QRect(140, 68, 101, 31));
        label_15 = new QLabel(ware);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 78, 81, 17));
        wareName = new QTextEdit(ware);
        wareName->setObjectName(QString::fromUtf8("wareName"));
        wareName->setGeometry(QRect(140, 28, 101, 31));
        label_17 = new QLabel(ware);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 167, 66, 17));
        softFrame = new QFrame(ware);
        softFrame->setObjectName(QString::fromUtf8("softFrame"));
        softFrame->setGeometry(QRect(30, 201, 251, 156));
        softFrame->setFrameShape(QFrame::StyledPanel);
        softFrame->setFrameShadow(QFrame::Raised);
        label_16 = new QLabel(softFrame);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 24, 101, 17));
        propFrame = new QFrame(softFrame);
        propFrame->setObjectName(QString::fromUtf8("propFrame"));
        propFrame->setGeometry(QRect(0, 76, 120, 80));
        propFrame->setFrameShape(QFrame::StyledPanel);
        propFrame->setFrameShadow(QFrame::Raised);
        label_18 = new QLabel(propFrame);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 24, 81, 17));
        label_19 = new QLabel(propFrame);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 0, 81, 17));
        wareAvailable = new QTextEdit(propFrame);
        wareAvailable->setObjectName(QString::fromUtf8("wareAvailable"));
        wareAvailable->setGeometry(QRect(10, 43, 101, 31));
        frame_3 = new QFrame(softFrame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(120, 75, 131, 81));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_20 = new QLabel(frame_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 3, 81, 17));
        label_21 = new QLabel(frame_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 25, 66, 17));
        wareMonths = new QTextEdit(frame_3);
        wareMonths->setObjectName(QString::fromUtf8("wareMonths"));
        wareMonths->setGeometry(QRect(10, 43, 101, 31));
        label_22 = new QLabel(softFrame);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 4, 81, 17));
        wareSupportedOS = new QTextEdit(softFrame);
        wareSupportedOS->setObjectName(QString::fromUtf8("wareSupportedOS"));
        wareSupportedOS->setGeometry(QRect(10, 41, 231, 31));
        wareType = new QTextEdit(ware);
        wareType->setObjectName(QString::fromUtf8("wareType"));
        wareType->setGeometry(QRect(140, 117, 101, 31));
        frame = new QFrame(ware);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(290, 201, 261, 159));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_23 = new QLabel(frame);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 12, 81, 17));
        wareCapacity = new QTextEdit(frame);
        wareCapacity->setObjectName(QString::fromUtf8("wareCapacity"));
        wareCapacity->setGeometry(QRect(10, 80, 231, 31));
        label_24 = new QLabel(frame);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(70, 51, 81, 17));
        warePrice = new QTextEdit(ware);
        warePrice->setObjectName(QString::fromUtf8("warePrice"));
        warePrice->setGeometry(QRect(140, 160, 101, 31));
        nextButton = new QToolButton(ware);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(410, 32, 41, 29));
        previousButton = new QToolButton(ware);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setGeometry(QRect(350, 31, 41, 29));
        editButton = new QPushButton(ware);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(350, 75, 98, 27));
        removeButton = new QPushButton(ware);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(350, 119, 98, 27));
        tabWidget->addTab(ware, QString());
        software = new QWidget();
        software->setObjectName(QString::fromUtf8("software"));
        propType = new QComboBox(software);
        propType->setObjectName(QString::fromUtf8("propType"));
        propType->setGeometry(QRect(130, 110, 91, 27));
        label = new QLabel(software);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 29, 66, 17));
        label_2 = new QLabel(software);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 74, 81, 17));
        label_3 = new QLabel(software);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 117, 66, 17));
        propName = new QTextEdit(software);
        propName->setObjectName(QString::fromUtf8("propName"));
        propName->setGeometry(QRect(130, 24, 101, 31));
        propVendor = new QTextEdit(software);
        propVendor->setObjectName(QString::fromUtf8("propVendor"));
        propVendor->setGeometry(QRect(130, 64, 101, 31));
        label_4 = new QLabel(software);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 171, 101, 17));
        propUbuntu = new QCheckBox(software);
        propUbuntu->setObjectName(QString::fromUtf8("propUbuntu"));
        propUbuntu->setGeometry(QRect(140, 170, 97, 22));
        propLion = new QCheckBox(software);
        propLion->setObjectName(QString::fromUtf8("propLion"));
        propLion->setGeometry(QRect(250, 170, 97, 22));
        label_5 = new QLabel(software);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 226, 66, 17));
        label_6 = new QLabel(software);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 269, 81, 17));
        propPriceSelector = new QSlider(software);
        propPriceSelector->setObjectName(QString::fromUtf8("propPriceSelector"));
        propPriceSelector->setGeometry(QRect(130, 225, 160, 29));
        propPriceSelector->setMaximum(100);
        propPriceSelector->setSingleStep(5);
        propPriceSelector->setValue(40);
        propPriceSelector->setOrientation(Qt::Horizontal);
        propShowPrice = new QLCDNumber(software);
        propShowPrice->setObjectName(QString::fromUtf8("propShowPrice"));
        propShowPrice->setGeometry(QRect(310, 226, 64, 23));
        propShowPrice->setFrameShape(QFrame::StyledPanel);
        propShowPrice->setFrameShadow(QFrame::Sunken);
        propAvailable = new QCheckBox(software);
        propAvailable->setObjectName(QString::fromUtf8("propAvailable"));
        propAvailable->setGeometry(QRect(140, 269, 97, 22));
        propInsert = new QPushButton(software);
        propInsert->setObjectName(QString::fromUtf8("propInsert"));
        propInsert->setGeometry(QRect(360, 34, 98, 27));
        tabWidget->addTab(software, QString());
        shareware = new QWidget();
        shareware->setObjectName(QString::fromUtf8("shareware"));
        label_7 = new QLabel(shareware);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 233, 66, 17));
        shareShowPrice = new QLCDNumber(shareware);
        shareShowPrice->setObjectName(QString::fromUtf8("shareShowPrice"));
        shareShowPrice->setGeometry(QRect(320, 233, 64, 23));
        shareShowPrice->setFrameShape(QFrame::StyledPanel);
        shareShowPrice->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(shareware);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 81, 81, 17));
        shareUbuntu = new QCheckBox(shareware);
        shareUbuntu->setObjectName(QString::fromUtf8("shareUbuntu"));
        shareUbuntu->setGeometry(QRect(150, 177, 97, 22));
        shareName = new QTextEdit(shareware);
        shareName->setObjectName(QString::fromUtf8("shareName"));
        shareName->setGeometry(QRect(140, 31, 101, 31));
        shareType = new QComboBox(shareware);
        shareType->setObjectName(QString::fromUtf8("shareType"));
        shareType->setGeometry(QRect(140, 117, 91, 27));
        label_9 = new QLabel(shareware);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 178, 101, 17));
        shareLion = new QCheckBox(shareware);
        shareLion->setObjectName(QString::fromUtf8("shareLion"));
        shareLion->setGeometry(QRect(260, 177, 97, 22));
        shareVendor = new QTextEdit(shareware);
        shareVendor->setObjectName(QString::fromUtf8("shareVendor"));
        shareVendor->setGeometry(QRect(140, 71, 101, 31));
        label_10 = new QLabel(shareware);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 276, 81, 17));
        label_11 = new QLabel(shareware);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 36, 66, 17));
        sharePriceSelector = new QSlider(shareware);
        sharePriceSelector->setObjectName(QString::fromUtf8("sharePriceSelector"));
        sharePriceSelector->setGeometry(QRect(140, 232, 160, 29));
        sharePriceSelector->setMaximum(100);
        sharePriceSelector->setSingleStep(5);
        sharePriceSelector->setValue(40);
        sharePriceSelector->setOrientation(Qt::Horizontal);
        label_12 = new QLabel(shareware);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 124, 66, 17));
        shareShowMonths = new QLCDNumber(shareware);
        shareShowMonths->setObjectName(QString::fromUtf8("shareShowMonths"));
        shareShowMonths->setGeometry(QRect(320, 271, 64, 23));
        shareShowMonths->setFrameShape(QFrame::StyledPanel);
        shareShowMonths->setFrameShadow(QFrame::Sunken);
        shareMonthsSelector = new QSlider(shareware);
        shareMonthsSelector->setObjectName(QString::fromUtf8("shareMonthsSelector"));
        shareMonthsSelector->setGeometry(QRect(140, 270, 160, 29));
        shareMonthsSelector->setMaximum(36);
        shareMonthsSelector->setSingleStep(3);
        shareMonthsSelector->setValue(12);
        shareMonthsSelector->setOrientation(Qt::Horizontal);
        shareInsert = new QPushButton(shareware);
        shareInsert->setObjectName(QString::fromUtf8("shareInsert"));
        shareInsert->setGeometry(QRect(360, 42, 98, 27));
        tabWidget->addTab(shareware, QString());
        hardware = new QWidget();
        hardware->setObjectName(QString::fromUtf8("hardware"));
        label_25 = new QLabel(hardware);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(50, 32, 66, 17));
        hardShowCap = new QLCDNumber(hardware);
        hardShowCap->setObjectName(QString::fromUtf8("hardShowCap"));
        hardShowCap->setGeometry(QRect(340, 200, 64, 23));
        hardShowCap->setFrameShape(QFrame::StyledPanel);
        hardShowCap->setFrameShadow(QFrame::Sunken);
        hardCapSelector = new QSlider(hardware);
        hardCapSelector->setObjectName(QString::fromUtf8("hardCapSelector"));
        hardCapSelector->setGeometry(QRect(160, 199, 160, 29));
        hardCapSelector->setMaximum(100);
        hardCapSelector->setSingleStep(5);
        hardCapSelector->setValue(40);
        hardCapSelector->setOrientation(Qt::Horizontal);
        hardVendor = new QTextEdit(hardware);
        hardVendor->setObjectName(QString::fromUtf8("hardVendor"));
        hardVendor->setGeometry(QRect(160, 67, 101, 31));
        label_26 = new QLabel(hardware);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(50, 120, 66, 17));
        hardName = new QTextEdit(hardware);
        hardName->setObjectName(QString::fromUtf8("hardName"));
        hardName->setGeometry(QRect(160, 27, 101, 31));
        label_27 = new QLabel(hardware);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(50, 77, 81, 17));
        label_28 = new QLabel(hardware);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(50, 162, 66, 17));
        hardShowPrice = new QLCDNumber(hardware);
        hardShowPrice->setObjectName(QString::fromUtf8("hardShowPrice"));
        hardShowPrice->setGeometry(QRect(340, 162, 64, 23));
        hardShowPrice->setFrameShape(QFrame::StyledPanel);
        hardShowPrice->setFrameShadow(QFrame::Sunken);
        label_29 = new QLabel(hardware);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(50, 205, 81, 17));
        hardPriceSelector = new QSlider(hardware);
        hardPriceSelector->setObjectName(QString::fromUtf8("hardPriceSelector"));
        hardPriceSelector->setGeometry(QRect(160, 161, 160, 29));
        hardPriceSelector->setMaximum(100);
        hardPriceSelector->setSingleStep(5);
        hardPriceSelector->setValue(40);
        hardPriceSelector->setOrientation(Qt::Horizontal);
        hardType = new QComboBox(hardware);
        hardType->setObjectName(QString::fromUtf8("hardType"));
        hardType->setGeometry(QRect(160, 113, 91, 27));
        hardInsert = new QPushButton(hardware);
        hardInsert->setObjectName(QString::fromUtf8("hardInsert"));
        hardInsert->setGeometry(QRect(380, 42, 98, 27));
        tabWidget->addTab(hardware, QString());
        findButton = new QPushButton(Dialog);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setGeometry(QRect(20, 450, 98, 27));
        sortButton = new QPushButton(Dialog);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));
        sortButton->setGeometry(QRect(130, 450, 98, 27));
        closeButton = new QPushButton(Dialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(460, 450, 98, 27));

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Dialog", "Nome", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Dialog", "Categoria", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Dialog", "Produttore", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Dialog", "Prezzo", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Dialog", "OS supportati", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Dialog", "Disponibile", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Dialog", "Proprietario", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Dialog", "Shareware", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Dialog", "Mesi", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Dialog", "Software", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Dialog", "Hardware", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Dialog", "Capacit\303\240", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("Dialog", ">", 0, QApplication::UnicodeUTF8));
        previousButton->setText(QApplication::translate("Dialog", "<", 0, QApplication::UnicodeUTF8));
        editButton->setText(QApplication::translate("Dialog", "Modifica", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("Dialog", "Rimuovi", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(ware), QApplication::translate("Dialog", "Tutti gli articoli", 0, QApplication::UnicodeUTF8));
        propType->clear();
        propType->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Antivirus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Browser", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Editor di testo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Gioco", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Grafico", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("Dialog", "Nome", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "Produttore", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "Categoria", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "OS supportati", 0, QApplication::UnicodeUTF8));
        propUbuntu->setText(QApplication::translate("Dialog", "Ubuntu 12", 0, QApplication::UnicodeUTF8));
        propLion->setText(QApplication::translate("Dialog", "Lion X", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog", "Prezzo", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "Disponibile", 0, QApplication::UnicodeUTF8));
        propAvailable->setText(QString());
        propInsert->setText(QApplication::translate("Dialog", "Inserisci", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(software), QApplication::translate("Dialog", "Software proprietario", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "Prezzo", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog", "Produttore", 0, QApplication::UnicodeUTF8));
        shareUbuntu->setText(QApplication::translate("Dialog", "Ubuntu 12", 0, QApplication::UnicodeUTF8));
        shareType->clear();
        shareType->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Antivirus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Browser", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Editor di testo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Gioco", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Grafico", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("Dialog", "OS supportati", 0, QApplication::UnicodeUTF8));
        shareLion->setText(QApplication::translate("Dialog", "Lion X", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Dialog", "Mesi", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Dialog", "Nome", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Dialog", "Categoria", 0, QApplication::UnicodeUTF8));
        shareInsert->setText(QApplication::translate("Dialog", "Inserisci", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(shareware), QApplication::translate("Dialog", "Shareware", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Dialog", "Nome", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("Dialog", "Categoria", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("Dialog", "Produttore", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("Dialog", "Prezzo", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("Dialog", "Capacit\303\240", 0, QApplication::UnicodeUTF8));
        hardType->clear();
        hardType->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Antivirus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Browser", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Editor di testo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Gioco", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Grafico", 0, QApplication::UnicodeUTF8)
        );
        hardInsert->setText(QApplication::translate("Dialog", "Inserisci", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(hardware), QApplication::translate("Dialog", "Hardware", 0, QApplication::UnicodeUTF8));
        findButton->setText(QApplication::translate("Dialog", "Cerca...", 0, QApplication::UnicodeUTF8));
        sortButton->setText(QApplication::translate("Dialog", "Ordina", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("Dialog", "Chiudi", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMA_H
