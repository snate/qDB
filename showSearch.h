#ifndef SHOWSEARCH_H
#define SHOWSEARCH_H

#include"terza.h"
#include"QDialog"
#include"app.h"

class showSearch: public QDialog
{
    Q_OBJECT
    friend class Controller;
private:
    Cont<product>* shop;
    Cont<product>::iterator it;
    UiT::OutForm* outForm;
    Cont<product>::size_type pos;
public:
    showSearch(Cont<product> *s);
    virtual void setupUi();
public slots:
    void refresh();
    void next();
    void previous();
    void chiudi();
};

#endif // SHOWSEARCH_H
