//prima.cpp
#include<QApplication>
#include<QDialog>
#include"prima.h"
#include"seconda.h"
#include"form.h"
#include"app.h"

using Ui::Dialog;
using UiS::SearchForm;

class Controller:public Form {
    Q_OBJECT
private:
    Cont<product>* shop;
    Cont<product>::iterator it;
public:
    Controller();
    void setupUi(Cont<product>* =0);
    void NomeProdotto();
public slots:
    void insProp();
    void insShare();
    void insHard();
    void bleach(int page);
    void refresh();
    void next();
    void previous();
    void edit();
    void remove();
    void sort();
    void find();
    void esci();
signals:
    void chiudi();
};
