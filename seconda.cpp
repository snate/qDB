#include"seconda.h"
#include"showSearch.h"

using UiS::SearchForm;

void InputSearchForm::setupUi(QDialog *Dialog)
{
    if (Dialog->objectName().isEmpty())
        Dialog->setObjectName(QString::fromUtf8("Dialog"));
    Dialog->setFixedSize(613, 524);
    tabWidget = new QTabWidget(Dialog);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setGeometry(QRect(10, 22, 591, 453));
    propTab = new QWidget();
    propTab->setObjectName(QString::fromUtf8("propTab"));
    propLabelAvailable = new QLabel(propTab);
    propLabelAvailable->setObjectName(QString::fromUtf8("propLabelAvailable"));
    propLabelAvailable->setGeometry(QRect(40, 282, 81, 17));
    propName = new QTextEdit(propTab);
    propName->setObjectName(QString::fromUtf8("propName"));
    propName->setGeometry(QRect(140, 37, 101, 31));
    propAvailable = new QCheckBox(propTab);
    propAvailable->setObjectName(QString::fromUtf8("propAvailable"));
    propAvailable->setGeometry(QRect(150, 282, 97, 22));
    propLabelVendor = new QLabel(propTab);
    propLabelVendor->setObjectName(QString::fromUtf8("propLabelVendor"));
    propLabelVendor->setGeometry(QRect(30, 87, 81, 17));
    propLabelOS = new QLabel(propTab);
    propLabelOS->setObjectName(QString::fromUtf8("propLabelOS"));
    propLabelOS->setGeometry(QRect(30, 184, 101, 17));
    propPriceSelector = new QSlider(propTab);
    propPriceSelector->setObjectName(QString::fromUtf8("propPriceSelector"));
    propPriceSelector->setGeometry(QRect(140, 238, 160, 29));
    propPriceSelector->setMaximum(100);
    propPriceSelector->setSingleStep(5);
    propPriceSelector->setValue(100);
    propPriceSelector->setOrientation(Qt::Horizontal);
    propType = new QComboBox(propTab);
    propType->setObjectName(QString::fromUtf8("propType"));
    propType->setGeometry(QRect(140, 123, 91, 27));
    propGo = new QPushButton(propTab);
    propGo->setObjectName(QString::fromUtf8("propGo"));
    propGo->setGeometry(QRect(370, 47, 98, 27));
    propLion = new QCheckBox(propTab);
    propLion->setObjectName(QString::fromUtf8("propLion"));
    propLion->setGeometry(QRect(260, 183, 97, 22));
    propUbuntu = new QCheckBox(propTab);
    propUbuntu->setObjectName(QString::fromUtf8("propUbuntu"));
    propUbuntu->setGeometry(QRect(150, 183, 97, 22));
    propShowPrice = new QLCDNumber(propTab);
    propShowPrice->setObjectName(QString::fromUtf8("propShowPrice"));
    propShowPrice->setGeometry(QRect(320, 239, 64, 23));
    propShowPrice->setFrameShape(QFrame::StyledPanel);
    propShowPrice->setFrameShadow(QFrame::Sunken);
    propVendor = new QTextEdit(propTab);
    propVendor->setObjectName(QString::fromUtf8("propVendor"));
    propVendor->setGeometry(QRect(140, 77, 101, 31));
    propLabelName = new QLabel(propTab);
    propLabelName->setObjectName(QString::fromUtf8("propLabelName"));
    propLabelName->setGeometry(QRect(30, 42, 66, 17));
    propLabelType = new QLabel(propTab);
    propLabelType->setObjectName(QString::fromUtf8("propLabelType"));
    propLabelType->setGeometry(QRect(30, 130, 66, 17));
    propLabelPrice = new QLabel(propTab);
    propLabelPrice->setObjectName(QString::fromUtf8("propLabelPrice"));
    propLabelPrice->setGeometry(QRect(40, 239, 66, 17));
    tabWidget->addTab(propTab, QString());
    shareTab = new QWidget();
    shareTab->setObjectName(QString::fromUtf8("shareTab"));
    shareLabelOS = new QLabel(shareTab);
    shareLabelOS->setObjectName(QString::fromUtf8("shareLabelOS"));
    shareLabelOS->setGeometry(QRect(30, 184, 101, 17));
    shareVendor = new QTextEdit(shareTab);
    shareVendor->setObjectName(QString::fromUtf8("shareVendor"));
    shareVendor->setGeometry(QRect(140, 77, 101, 31));
    shareName = new QTextEdit(shareTab);
    shareName->setObjectName(QString::fromUtf8("shareName"));
    shareName->setGeometry(QRect(140, 37, 101, 31));
    shareLabelPrice = new QLabel(shareTab);
    shareLabelPrice->setObjectName(QString::fromUtf8("shareLabelPrice"));
    shareLabelPrice->setGeometry(QRect(40, 239, 66, 17));
    shareLabelMonths = new QLabel(shareTab);
    shareLabelMonths->setObjectName(QString::fromUtf8("shareLabelMonths"));
    shareLabelMonths->setGeometry(QRect(40, 282, 81, 17));
    shareGo = new QPushButton(shareTab);
    shareGo->setObjectName(QString::fromUtf8("shareGo"));
    shareGo->setGeometry(QRect(360, 48, 98, 27));
    shareLion = new QCheckBox(shareTab);
    shareLion->setObjectName(QString::fromUtf8("shareLion"));
    shareLion->setGeometry(QRect(260, 183, 97, 22));
    shareMonthsSelector = new QSlider(shareTab);
    shareMonthsSelector->setObjectName(QString::fromUtf8("shareMonthsSelector"));
    shareMonthsSelector->setGeometry(QRect(140, 276, 160, 29));
    shareMonthsSelector->setMinimum(1);
    shareMonthsSelector->setMaximum(36);
    shareMonthsSelector->setSingleStep(5);
    shareMonthsSelector->setValue(36);
    shareMonthsSelector->setOrientation(Qt::Horizontal);
    shareType = new QComboBox(shareTab);
    shareType->setObjectName(QString::fromUtf8("shareType"));
    shareType->setGeometry(QRect(140, 123, 91, 27));
    shareShowPrice = new QLCDNumber(shareTab);
    shareShowPrice->setObjectName(QString::fromUtf8("shareShowPrice"));
    shareShowPrice->setGeometry(QRect(320, 239, 64, 23));
    shareShowPrice->setFrameShape(QFrame::StyledPanel);
    shareShowPrice->setFrameShadow(QFrame::Sunken);
    shareLabelType = new QLabel(shareTab);
    shareLabelType->setObjectName(QString::fromUtf8("shareLabelType"));
    shareLabelType->setGeometry(QRect(30, 130, 66, 17));
    shareLabelName = new QLabel(shareTab);
    shareLabelName->setObjectName(QString::fromUtf8("shareLabelName"));
    shareLabelName->setGeometry(QRect(30, 42, 66, 17));
    shareLabelVendor = new QLabel(shareTab);
    shareLabelVendor->setObjectName(QString::fromUtf8("shareLabelVendor"));
    shareLabelVendor->setGeometry(QRect(30, 87, 81, 17));
    shareUbuntu = new QCheckBox(shareTab);
    shareUbuntu->setObjectName(QString::fromUtf8("shareUbuntu"));
    shareUbuntu->setGeometry(QRect(150, 183, 97, 22));
    sharePriceSelector = new QSlider(shareTab);
    sharePriceSelector->setObjectName(QString::fromUtf8("sharePriceSelector"));
    sharePriceSelector->setGeometry(QRect(140, 238, 160, 29));
    sharePriceSelector->setMaximum(100);
    sharePriceSelector->setSingleStep(5);
    sharePriceSelector->setValue(100);
    sharePriceSelector->setOrientation(Qt::Horizontal);
    shareShowMonths = new QLCDNumber(shareTab);
    shareShowMonths->setObjectName(QString::fromUtf8("shareShowMonths"));
    shareShowMonths->setGeometry(QRect(320, 277, 64, 23));
    shareShowMonths->setFrameShape(QFrame::StyledPanel);
    shareShowMonths->setFrameShadow(QFrame::Sunken);
    tabWidget->addTab(shareTab, QString());
    hardwareTab = new QWidget();
    hardwareTab->setObjectName(QString::fromUtf8("hardwareTab"));
    hardLabelType = new QLabel(hardwareTab);
    hardLabelType->setObjectName(QString::fromUtf8("hardLabelType"));
    hardLabelType->setGeometry(QRect(30, 126, 66, 17));
    hardShowPrice = new QLCDNumber(hardwareTab);
    hardShowPrice->setObjectName(QString::fromUtf8("hardShowPrice"));
    hardShowPrice->setGeometry(QRect(320, 168, 64, 23));
    hardShowPrice->setFrameShape(QFrame::StyledPanel);
    hardShowPrice->setFrameShadow(QFrame::Sunken);
    hardShowCap = new QLCDNumber(hardwareTab);
    hardShowCap->setObjectName(QString::fromUtf8("hardShowCap"));
    hardShowCap->setGeometry(QRect(320, 206, 64, 23));
    hardShowCap->setFrameShape(QFrame::StyledPanel);
    hardShowCap->setFrameShadow(QFrame::Sunken);
    hardGo = new QPushButton(hardwareTab);
    hardGo->setObjectName(QString::fromUtf8("hardGo"));
    hardGo->setGeometry(QRect(360, 48, 98, 27));
    hardCapSelector = new QSlider(hardwareTab);
    hardCapSelector->setObjectName(QString::fromUtf8("hardCapSelector"));
    hardCapSelector->setGeometry(QRect(140, 205, 160, 29));
    hardCapSelector->setMinimum(2);
    hardCapSelector->setMaximum(256);
    hardCapSelector->setSingleStep(2);
    hardCapSelector->setValue(256);
    hardCapSelector->setOrientation(Qt::Horizontal);
    hardPriceSelector = new QSlider(hardwareTab);
    hardPriceSelector->setObjectName(QString::fromUtf8("hardPriceSelector"));
    hardPriceSelector->setGeometry(QRect(140, 167, 160, 29));
    hardPriceSelector->setMaximum(100);
    hardPriceSelector->setSingleStep(5);
    hardPriceSelector->setValue(100);
    hardPriceSelector->setOrientation(Qt::Horizontal);
    hardName = new QTextEdit(hardwareTab);
    hardName->setObjectName(QString::fromUtf8("hardName"));
    hardName->setGeometry(QRect(140, 33, 101, 31));
    hardVendor = new QTextEdit(hardwareTab);
    hardVendor->setObjectName(QString::fromUtf8("hardVendor"));
    hardVendor->setGeometry(QRect(140, 73, 101, 31));
    hardType = new QComboBox(hardwareTab);
    hardType->setObjectName(QString::fromUtf8("hardType"));
    hardType->setGeometry(QRect(140, 119, 91, 27));
    hardLabelCapacity = new QLabel(hardwareTab);
    hardLabelCapacity->setObjectName(QString::fromUtf8("hardLabelCapacity"));
    hardLabelCapacity->setGeometry(QRect(30, 211, 81, 17));
    hardLabelName = new QLabel(hardwareTab);
    hardLabelName->setObjectName(QString::fromUtf8("hardLabelName"));
    hardLabelName->setGeometry(QRect(30, 38, 66, 17));
    hardLabelVendor = new QLabel(hardwareTab);
    hardLabelVendor->setObjectName(QString::fromUtf8("hardLabelVendor"));
    hardLabelVendor->setGeometry(QRect(30, 83, 81, 17));
    hardLabelPrice = new QLabel(hardwareTab);
    hardLabelPrice->setObjectName(QString::fromUtf8("hardLabelPrice"));
    hardLabelPrice->setGeometry(QRect(30, 168, 66, 17));
    tabWidget->addTab(hardwareTab, QString());
    closeButton = new QPushButton(Dialog);
    closeButton->setObjectName(QString::fromUtf8("closeButton"));
    closeButton->setGeometry(QRect(500, 487, 98, 27));
    //creazione oggetti
    retranslateUi(Dialog);
    tabWidget->setCurrentIndex(0);
    QMetaObject::connectSlotsByName(Dialog);
    propShowPrice->display(propPriceSelector->value());
    shareShowPrice->display(sharePriceSelector->value());
    hardShowPrice->display(hardPriceSelector->value());
    shareShowMonths->display(shareMonthsSelector->value());
    hardShowCap->display(hardCapSelector->value());

} // setupUi


void InputSearchForm::retranslateUi(QDialog *Dialog)
{
    Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
    propLabelAvailable->setText(QApplication::translate("Dialog", "Disponibile", 0, QApplication::UnicodeUTF8));
    propAvailable->setText(QString());
    propLabelVendor->setText(QApplication::translate("Dialog", "Produttore", 0, QApplication::UnicodeUTF8));
    propLabelOS->setText(QApplication::translate("Dialog", "OS supportati", 0, QApplication::UnicodeUTF8));
    propType->clear();
    propType->insertItems(0, QStringList()
     << QApplication::translate("Dialog", "Antivirus", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Dialog", "Browser", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Dialog", "Editor di testo", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Dialog", "Gioco", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Dialog", "Grafico", 0, QApplication::UnicodeUTF8)
    );
    propGo->setText(QApplication::translate("Dialog", "Vai", 0, QApplication::UnicodeUTF8));
    propLion->setText(QApplication::translate("Dialog", "Lion X", 0, QApplication::UnicodeUTF8));
    propUbuntu->setText(QApplication::translate("Dialog", "Ubuntu 12", 0, QApplication::UnicodeUTF8));
    propLabelName->setText(QApplication::translate("Dialog", "Nome", 0, QApplication::UnicodeUTF8));
    propLabelType->setText(QApplication::translate("Dialog", "Categoria", 0, QApplication::UnicodeUTF8));
    propLabelPrice->setText(QApplication::translate("Dialog", "Prezzo", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(propTab), QApplication::translate("Dialog", "Cerca software proprietario", 0, QApplication::UnicodeUTF8));
    shareLabelOS->setText(QApplication::translate("Dialog", "OS supportati", 0, QApplication::UnicodeUTF8));
    shareLabelPrice->setText(QApplication::translate("Dialog", "Prezzo", 0, QApplication::UnicodeUTF8));
    shareLabelMonths->setText(QApplication::translate("Dialog", "Mesi", 0, QApplication::UnicodeUTF8));
    shareGo->setText(QApplication::translate("Dialog", "Vai", 0, QApplication::UnicodeUTF8));
    shareLion->setText(QApplication::translate("Dialog", "Lion X", 0, QApplication::UnicodeUTF8));
    shareType->clear();
    shareType->insertItems(0, QStringList()
     << QApplication::translate("Dialog", "Antivirus", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Dialog", "Browser", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Dialog", "Editor di testo", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Dialog", "Gioco", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Dialog", "Grafico", 0, QApplication::UnicodeUTF8)
    );
    shareLabelType->setText(QApplication::translate("Dialog", "Categoria", 0, QApplication::UnicodeUTF8));
    shareLabelName->setText(QApplication::translate("Dialog", "Nome", 0, QApplication::UnicodeUTF8));
    shareLabelVendor->setText(QApplication::translate("Dialog", "Produttore", 0, QApplication::UnicodeUTF8));
    shareUbuntu->setText(QApplication::translate("Dialog", "Ubuntu 12", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(shareTab), QApplication::translate("Dialog", "Cerca shareware", 0, QApplication::UnicodeUTF8));
    hardLabelType->setText(QApplication::translate("Dialog", "Categoria", 0, QApplication::UnicodeUTF8));
    hardGo->setText(QApplication::translate("Dialog", "Vai", 0, QApplication::UnicodeUTF8));
    hardType->clear();
    hardType->insertItems(0, QStringList()
                          << QApplication::translate("Dialog", "Penna USB", 0, QApplication::UnicodeUTF8)
                          << QApplication::translate("Dialog", "DVD", 0, QApplication::UnicodeUTF8)
                          << QApplication::translate("Dialog", "HDD", 0, QApplication::UnicodeUTF8)
                          << QApplication::translate("Dialog", "SSD", 0, QApplication::UnicodeUTF8)
                          );
    hardLabelCapacity->setText(QApplication::translate("Dialog", "Capacit\303\240", 0, QApplication::UnicodeUTF8));
    hardLabelName->setText(QApplication::translate("Dialog", "Nome", 0, QApplication::UnicodeUTF8));
    hardLabelVendor->setText(QApplication::translate("Dialog", "Produttore", 0, QApplication::UnicodeUTF8));
    hardLabelPrice->setText(QApplication::translate("Dialog", "Prezzo", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(hardwareTab), QApplication::translate("Dialog", "Cerca hardware", 0, QApplication::UnicodeUTF8));
    closeButton->setText(QApplication::translate("Dialog", "Chiudi", 0, QApplication::UnicodeUTF8));
} // retranslateUi

SearchForm::SearchForm(Cont<product>* s):shop(s) {
    it=s->begin();
    QDialog* nuovo=this;
    nuovo=new QDialog();
}

void UiS::SearchForm::setupUi(QDialog* d) {
    f=new InputSearchForm;
    QDialog* q=new QDialog(this);
    f->InputSearchForm::setupUi(d);
    connect(f->propPriceSelector,SIGNAL(valueChanged(int)),f->propShowPrice,SLOT(display(int)));
    connect(f->sharePriceSelector,SIGNAL(valueChanged(int)),f->shareShowPrice,SLOT(display(int)));
    connect(f->hardPriceSelector,SIGNAL(valueChanged(int)),f->hardShowPrice,SLOT(display(int)));
    connect(f->shareMonthsSelector,SIGNAL(valueChanged(int)),f->shareShowMonths,SLOT(display(int)));
    connect(f->hardCapSelector,SIGNAL(valueChanged(int)),f->hardShowCap,SLOT(display(int)));
    connect(f->propGo,SIGNAL(clicked()),this,SLOT(searchP()));
    connect(f->shareGo,SIGNAL(clicked()),this,SLOT(searchS()));
    connect(f->hardGo,SIGNAL(clicked()),this,SLOT(searchH()));
    connect(f->closeButton,SIGNAL(clicked()),this,SLOT(chiudi()));
}

void UiS::SearchForm::searchP() {
    Cont<product>* aux=new Cont<product>;
    Cont<product>::iterator copia=shop->begin();
    for(;copia!=shop->end();copia++)
        if(dynamic_cast<PropSW*>(&(**copia)))
            aux->push_back(*copia);
    if(!aux->empty()) {
        string nome=f->propName->toPlainText().toStdString();
        string produttore=f->propVendor->toPlainText().toStdString();
        string tipo=f->propType->currentText().toStdString();
        double prezzo=f->propShowPrice->value();
        bool u,l,d;
        if(f->propUbuntu->checkState()==Qt::Checked)    u=true;
        else                                            u=false;
        if(f->propLion->checkState()==Qt::Checked)      l=true;
        else                                            l=false;
        if(f->propAvailable->checkState()==Qt::Checked) d=true;
        else                                            d=false;
        int os;
        if(u && l) os=3;
        if(u && !l) os=1;
        if(!u && l) os=2;
        if(!u && !l) os=-1;
        PropSW* elem = new PropSW(nome,produttore,prezzo,tipo,d);
        elem->setOS(os);
        Function fNome(1);
        Function fProduttore(2);
        Function fTipo(4);
        Function fPrezzo(8);
        Function fOS(3);
        Function fDisponibile(5);
        if(nome!="")        aux=aux->find(elem,fNome);
        if(produttore!="")  aux=aux->find(elem,fProduttore);
        if(tipo!="")        aux=aux->find(elem,fTipo);
        if(prezzo!=100.0)   aux=aux->find(elem,fPrezzo);
        if(u || l)          aux=aux->find(elem,fOS);
        if(d)               aux=aux->find(elem,fDisponibile);
    }
    showSearch* mostra=new showSearch(aux);
    mostra->setupUi();
    mostra->show();
}

void UiS::SearchForm::searchS() {
    Cont<product>* aux=new Cont<product>;
    Cont<product>::iterator copia=shop->begin();
    for(;copia!=shop->end();copia++)
        if(dynamic_cast<ShareSW*>(&(**copia)))
            aux->push_back(*copia);
    if(aux->empty()) {

    }
    else {
        string nome=f->shareName->toPlainText().toStdString();
        string produttore=f->shareVendor->toPlainText().toStdString();
        string tipo=f->shareType->currentText().toStdString();
        double prezzo=f->shareShowPrice->value();
        bool u,l,d;
        if(f->shareUbuntu->checkState()==Qt::Checked)    u=true;
        else                                            u=false;
        if(f->shareLion->checkState()==Qt::Checked)      l=true;
        else                                            l=false;
        int mesi=f->shareShowMonths->value();
        int os;
        if(u && l) os=3;
        if(u && !l) os=1;
        if(!u && l) os=2;
        if(!u && !l) os=-1;
        ShareSW* elem = new ShareSW(nome,produttore,prezzo,mesi,tipo);
        elem->setOS(os);
        Function fNome(1);
        Function fProduttore(2);
        Function fTipo(4);
        Function fPrezzo(8);
        Function fOS(3);
        Function fMesi(6);
        if(nome!="")        aux=aux->find(elem,fNome);
        if(produttore!="")  aux=aux->find(elem,fProduttore);
        if(tipo!="")        aux=aux->find(elem,fTipo);
        if(prezzo!=100.0)   aux=aux->find(elem,fPrezzo);
        if(u || l)          aux=aux->find(elem,fOS);
        if(mesi!=36)        aux=aux->find(elem,fMesi);
    }
    showSearch* mostra=new showSearch(aux);
    mostra->setupUi();
    mostra->show();
}

void UiS::SearchForm::searchH() {
    Cont<product>* aux=new Cont<product>;
    Cont<product>::iterator copia=shop->begin();
    for(;copia!=shop->end();copia++)
        if(dynamic_cast<Hardware*>(&(**copia)))
            aux->push_back(*copia);
    if(aux->empty()) {

    }
    else {
        string nome=f->hardName->toPlainText().toStdString();
        string produttore=f->hardVendor->toPlainText().toStdString();
        string tipo=f->hardType->currentText().toStdString();
        double prezzo=f->hardShowPrice->value();
        int capacita=f->hardShowCap->value();
        Hardware* elem = new Hardware(nome,produttore,prezzo,tipo,capacita);
        Function fNome(1);
        Function fProduttore(2);
        Function fTipo(9);
        Function fPrezzo(8);
        Function fCapacita(7);
        if(nome!="")        aux=aux->find(elem,fNome);
        if(produttore!="")  aux=aux->find(elem,fProduttore);
        if(tipo!="")        aux=aux->find(elem,fTipo);
        if(prezzo!=100.0)   aux=aux->find(elem,fPrezzo);
        if(capacita!=256)          aux=aux->find(elem,fCapacita);
    }
    showSearch* mostra=new showSearch(aux);
    mostra->setupUi();
    mostra->show();
}

void UiS::SearchForm::chiudi() {
    QDialog* distruggi=this;
    delete distruggi;
}
