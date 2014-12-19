#include"terza.h"
#include"showSearch.h"

showSearch::showSearch(Cont<product>* s) {
    shop=s;
    it=s->begin();
    pos=1;
    outForm = new UiT::OutForm;
    setupUi();
}

void showSearch::setupUi() {
    outForm->setupUi(this);
    connect(outForm->outNextButton,SIGNAL(clicked()),this,SLOT(next()));
    connect(outForm->outPreviousButton,SIGNAL(clicked()),this,SLOT(previous()));
    connect(outForm->closeButton,SIGNAL(clicked()),this,SLOT(chiudi()));
    refresh();
}

void showSearch::refresh() {
    Cont<product>::iterator successivo=it;
    successivo++;
    Cont<product>::iterator precedente=it;
    precedente--;
    if(false==successivo)
        outForm->outNextButton->setVisible(false);
    else
        outForm->outNextButton->setVisible(true);
    if(precedente==0)
        outForm->outPreviousButton->setVisible(false);
    else
        outForm->outPreviousButton->setVisible(true);
    if(shop->empty()) {
        outForm->outName->setText("none");
        outForm->outAvailable->setText("none");
        outForm->outCapacity->setText("none");
        outForm->outMonths->setText("none");
        outForm->outPrice->setText("none");
        outForm->outSupportedOS->setText("none");
        outForm->outVendor->setText("none");
        outForm->outType->setText("none");
    }
    else {
        outForm->outName->setText((*it)->getName().c_str());
        outForm->outVendor->setText((*it)->getVendor().c_str());
        PropSW* p=dynamic_cast<PropSW*>(&(**it));
        ShareSW* s=dynamic_cast<ShareSW*>(&(**it));
        Hardware* h=dynamic_cast<Hardware*>(&(**it));
        if(p) {
            if(p->getOS()==3) outForm->outSupportedOS->setText("Win,Lion,Ub");
            if(p->getOS()==0) outForm->outSupportedOS->setText("Win");
            if(p->getOS()==2) outForm->outSupportedOS->setText("Win,Lion");
            if(p->getOS()==1) outForm->outSupportedOS->setText("Win,Ub");
            if(p->getOut())    outForm->outAvailable->setText("S");
            else               outForm->outAvailable->setText("N");
            outForm->outType->setText(p->getType().c_str());
            outForm->outPrice->setText(QString::number(p->Price()));
            outForm->outMonths->setText("");
            outForm->outCapacity->setText("");
        }
        if(s) {
            if(s->getOS()==3) outForm->outSupportedOS->setText("Win,Lion,Ub");
            if(s->getOS()==0) outForm->outSupportedOS->setText("Win");
            if(s->getOS()==2) outForm->outSupportedOS->setText("Win,Lion");
            if(s->getOS()==1) outForm->outSupportedOS->setText("Win,Ub");
            outForm->outType->setText(s->getType().c_str());
            outForm->outPrice->setText(QString::number(s->Price()));
            outForm->outMonths->setText(QString::number(s->getMonths()));
            outForm->outAvailable->setText("");
            outForm->outCapacity->setText("");
        }
        if(h) {
            outForm->outType->setText(h->getType().c_str());
            outForm->outPrice->setText(QString::number(h->Price()));
            outForm->outCapacity->setText(QString::number(h->getDim()));
            outForm->outSupportedOS->setText("");
            outForm->outMonths->setText("");
        }
    }
}

void showSearch::next() {
    Cont<product>::iterator successivo=it;
    successivo++;
    if(successivo)  {it++;outForm->attention->setText("");}
    else            outForm->attention->setText("Fine lista");
    refresh();
}

void showSearch::previous() {
    it--;
    outForm->attention->setText("");
    refresh();
}

void showSearch::chiudi() {
    QDialog* distruggi=this;
    delete distruggi;
    delete outForm;
    delete shop;
}
