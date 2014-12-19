//Form.h
#ifndef FORM_H
#define FORM_H

#include"QDialog"
#include"prima.h"

class Form: public QDialog
{
    Q_OBJECT
    friend class Controller;
private:
    Ui_Dialog* form;
public:
    ~Form();
    virtual void setupUi();
};

#endif // FORM_H
