/*form.cpp*/
#include"form.h"

Form::~Form() {delete form;}

void Form::setupUi() {
    form = new Ui_Dialog;
    QDialog* q = new QDialog(this);
    form->Ui_Dialog::setupUi(q);
    q->show();
}
