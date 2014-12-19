#include"QPalette"
#include"controller.h"

using UiS::SearchForm;

Controller::Controller() {shop=new Cont<product>;it=shop->begin();}

void Controller::setupUi(Cont<product>* s) {
    if(s!=0) shop=s;
    else     shop=new Cont<product>;
    it=shop->begin();
    Form::setupUi();
    bleach(0);
    connect(form->closeButton,SIGNAL(clicked()),this,SLOT(esci()));
    connect(form->propInsert,SIGNAL(clicked()),this,SLOT(insProp()));
    connect(form->shareInsert,SIGNAL(clicked()),this,SLOT(insShare()));
    connect(form->hardInsert,SIGNAL(clicked()),this,SLOT(insHard()));
    connect(form->tabWidget,SIGNAL(currentChanged(int)),this,SLOT(bleach(int)));
    connect(form->propPriceSelector,SIGNAL(valueChanged(int)),form->propShowPrice,SLOT(display(int)));
    connect(form->sharePriceSelector,SIGNAL(valueChanged(int)),form->shareShowPrice,SLOT(display(int)));
    connect(form->shareMonthsSelector,SIGNAL(valueChanged(int)),form->shareShowMonths,SLOT(display(int)));
    connect(form->hardPriceSelector,SIGNAL(valueChanged(int)),form->hardShowPrice,SLOT(display(int)));
    connect(form->hardCapSelector,SIGNAL(valueChanged(int)),form->hardShowCap,SLOT(display(int)));
    connect(form->nextButton,SIGNAL(clicked()),this,SLOT(next()));
    connect(form->previousButton,SIGNAL(clicked()),this,SLOT(previous()));
    connect(form->editButton,SIGNAL(clicked()),this,SLOT(edit()));
    connect(form->removeButton,SIGNAL(clicked()),this,SLOT(remove()));
    connect(form->sortButton,SIGNAL(clicked()),this,SLOT(sort()));
    connect(form->findButton,SIGNAL(clicked()),this,SLOT(find()));
    connect(this,SIGNAL(chiudi()),qApp,SLOT(quit()));
}

void Controller::insProp() {
    PropSW* aux = new PropSW(form->propName->toPlainText().toStdString(),form->propVendor->toPlainText().toStdString(),form->propShowPrice->value(),form->propType->currentText().toStdString(),form->propAvailable->checkState()==Qt::Checked);
    aux->setOut(form->propAvailable->checkState()==Qt::Checked);
    if(form->propUbuntu->checkState()==Qt::Checked && form->propLion->checkState()==Qt::Checked) aux->setOS(21);
    else { //non gira su tutti e 3
        if(form->propUbuntu->checkState()==Qt::Checked) aux->setOS(10);
        else { //non gira su Ubuntu
            if(form->propLion->checkState()==Qt::Checked) aux->setOS(20);
        }
    }
    Cont<product>::iterator nuovo = shop->push_back(aux);
    if(**nuovo==*aux) {form->propName->setStyleSheet("background-color:lightgreen;");form->propVendor->setStyleSheet("background-color:lightgreen;"); }
    else {form->propName->setStyleSheet("background-color:coral;");form->propVendor->setStyleSheet("background-color:coral;"); }
}

void Controller::insShare() {
    ShareSW* aux = new ShareSW(form->shareName->toPlainText().toStdString(),form->shareVendor->toPlainText().toStdString(),form->shareShowPrice->value(),form->shareShowMonths->value(),form->shareType->currentText().toStdString());
    if(form->shareUbuntu->checkState()==Qt::Checked && form->shareLion->checkState()==Qt::Checked) aux->setOS(21);
    else { //non gira su tutti e 3
        if(form->shareUbuntu->checkState()==Qt::Checked) aux->setOS(10);
        else { //non gira su Ubuntu
            if(form->shareLion->checkState()==Qt::Checked) aux->setOS(20);
        }
    }
    Cont<product>::iterator nuovo = shop->push_back(aux);
    if(**nuovo==*aux) {form->shareName->setStyleSheet("background-color:lightgreen;");form->shareVendor->setStyleSheet("background-color:lightgreen;"); }
    else {form->shareName->setStyleSheet("background-color:coral;");form->shareVendor->setStyleSheet("background-color:coral;"); }
}

void Controller::insHard() {
    Hardware* aux = new Hardware(form->hardName->toPlainText().toStdString(),form->hardVendor->toPlainText().toStdString(),form->hardShowPrice->value(),form->hardType->currentText().toStdString(),form->hardShowCap->value());
    Cont<product>::iterator nuovo = shop->push_back(aux);
    if(**nuovo==*aux) {form->hardName->setStyleSheet("background-color:lightgreen;");form->shareVendor->setStyleSheet("background-color:lightgreen;"); }
    else {form->hardName->setStyleSheet("background-color:coral;");form->shareVendor->setStyleSheet("background-color:coral;"); }
}

void Controller::bleach(int page) {
    form->propName->setStyleSheet("background-color:white;");
    form->propVendor->setStyleSheet("background-color:white;");
    form->shareName->setStyleSheet("background-color:white;");
    form->shareVendor->setStyleSheet("background-color:white;");
    form->hardName->setStyleSheet("background-color:white;");
    form->hardVendor->setStyleSheet("background-color:white;");
    if(page==0) {
        it=shop->begin();
        refresh();
    }
}

void Controller::refresh() {
    Cont<product>::iterator successivo=it;successivo++;
    Cont<product>::iterator precedente=it;precedente--;
    if(successivo==0) form->nextButton->setVisible(false);
    else              form->nextButton->setVisible(true);
    if(precedente==0) form->previousButton->setVisible(false);
    else              form->previousButton->setVisible(true);
    if(!shop->empty()) {
        form->editButton->setVisible(true);
        form->removeButton->setVisible(true);
        form->wareName->setText((**it).getName().c_str());
        form->wareVendor->setText((**it).getVendor().c_str());
        PropSW* p=dynamic_cast<PropSW*>(&(**it));
        ShareSW* s=dynamic_cast<ShareSW*>(&(**it));
        Hardware* h=dynamic_cast<Hardware*>(&(**it));
        if(p) {
            if(p->getOS()==3) form->wareSupportedOS->setText("Win,Lion,Ub");
            if(p->getOS()==0) form->wareSupportedOS->setText("Win");
            if(p->getOS()==2) form->wareSupportedOS->setText("Win,Lion");
            if(p->getOS()==1) form->wareSupportedOS->setText("Win,Ub");
            if(p->getOut())    form->wareAvailable->setText("S");
            else               form->wareAvailable->setText("N");
            form->wareType->setText(p->getType().c_str());
            form->warePrice->setText(QString::number(p->Price()));
            form->wareMonths->setText("");
            form->wareCapacity->setText("");
        }
        if(s) {
            if(s->getOS()==3) form->wareSupportedOS->setText("Win,Lion,Ub");
            if(s->getOS()==0) form->wareSupportedOS->setText("Win");
            if(s->getOS()==2) form->wareSupportedOS->setText("Win,Lion");
            if(s->getOS()==1) form->wareSupportedOS->setText("Win,Ub");
            form->wareType->setText(s->getType().c_str());
            form->warePrice->setText(QString::number(s->Price()));
            form->wareMonths->setText(QString::number(s->getMonths()));
            form->wareAvailable->setText("");
            form->wareCapacity->setText("");
        }
        if(h) {
            form->wareType->setText(h->getType().c_str());
            form->warePrice->setText(QString::number(h->Price()));
            form->wareCapacity->setText(QString::number(h->getDim()));
            form->wareSupportedOS->setText("");
            form->wareMonths->setText("");
        }
    }
    else {
        form->editButton->setVisible(false);
        form->removeButton->setVisible(false);
        form->wareAvailable->setText("none");
        form->wareCapacity->setText("none");
        form->wareMonths->setText("none");
        form->wareName->setText("none");
        form->warePrice->setText("none");
        form->wareSupportedOS->setText("none");
        form->wareType->setText("none");
        form->wareVendor->setText("none");
    }
}

void Controller::next() {
    it++;
    refresh();
}

void Controller::previous() {
    it--;
    refresh();
}

void Controller::edit() {
    PropSW* p=dynamic_cast<PropSW*>(&(**it));
    ShareSW* s=dynamic_cast<ShareSW*>(&(**it));
    Hardware* h=dynamic_cast<Hardware*>(&(**it));
    if(p) {
        PropSW aux=*p;
        aux.setName(form->wareName->toPlainText().toStdString());
        aux.setVendor(form->wareVendor->toPlainText().toStdString());
        QString disp=form->wareAvailable->toPlainText();
        if(disp.toStdString()=="S") aux.setOut(true);
        if(disp.toStdString()=="N") aux.setOut(false);
        *p=aux;
        refresh();
    }
    if(s) {
        ShareSW aux=*s;
        aux.setName(form->wareName->toPlainText().toStdString());
        aux.setVendor(form->wareVendor->toPlainText().toStdString());
        int months=form->wareMonths->toPlainText().toInt();
        if(months>0 && months<37) aux.setMonths(months);
        *s=aux;
        refresh();
    }
    if(h) {
        Hardware aux=*h;
        aux.setName(form->wareName->toPlainText().toStdString());
        aux.setVendor(form->wareVendor->toPlainText().toStdString());
        int cap=form->wareAvailable->toPlainText().toInt();
        if(cap>0 && cap<257 && cap%2==0) aux.setDim(cap);
        *h=aux;
        refresh();
    }
}

void Controller::remove() {
    Cont<product>::iterator aux;
    if(it==shop->begin()) {
        aux=it;aux++;
    }
    else{
        aux=it;aux--;
    }
    shop->erase(it);
    it=aux;
    refresh();
}

void Controller::sort() {
    shop->sort();
    it=shop->begin();
    refresh();
}

void Controller::find() {
    SearchForm* ricerca=new SearchForm(shop);
    //QDialog* dialogoRicerca=new QDialog;
    ricerca->setupUi(ricerca);
    ricerca->show();
}

void Controller::esci() {
    chiudi();
}
