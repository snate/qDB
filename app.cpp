//app.cpp
#include"ware.h"
#include"app.h"

using namespace std;
using App::Equal;

product::product(const Ware& w): punt(w.clone()) {}

product::product(Ware* p): punt(p->clone()) {}

product::product(const product& p): punt(p.punt->clone()) {}

product& product::operator =(const product& p) {
    if(&p!=this) {
        Ware* aux=punt;
        punt=p.punt->clone();
        delete aux;
    }
    return *this;
}

product::~product() {delete punt;}

bool product::operator <(const product& p) const {
    return (*punt)<(*(p.punt));
}

bool product::operator==(const product& p) const {
    return (*punt)==(*(p.punt));
}

Ware* product::operator ->() {return punt;}

Ware& product::operator *() {return *punt;}

product::operator bool() {return punt!=0;}

Function::Function(int n): feature(n) {}

bool Function::operator ()(const product& x,const product& y) const {
    switch(feature) {
    case 0:    //confronto semplice
        return x==y;
    case 1:    //confronta i nomi
        return x.punt->getName()==y.punt->getName();
    case 2:    //confronta i produttori
        return x.punt->getVendor()==y.punt->getVendor();
    case 3:{   //confronta gli OS
        Software* p = dynamic_cast<Software*>(x.punt);
        Software* q = dynamic_cast<Software*>(y.punt);
        if(p->getOS()==-1) return true;
        return p && q && p->getOS()==q->getOS();}
    case 4:{   //confronta i tipi di software (Prop+Share)
        Software* p = dynamic_cast<Software*>(x.punt);
        Software* q = dynamic_cast<Software*>(y.punt);
        return p && q && p->getType()==q->getType();}
    case 5:{   //confronta se sono disponibili
        PropSW* p = dynamic_cast<PropSW*>(x.punt);
        PropSW* q = dynamic_cast<PropSW*>(y.punt);
        return p && q && p->getOut()==q->getOut();}
    case 6:{   //confronta i mesi <=
        ShareSW* p = dynamic_cast<ShareSW*>(x.punt);
        ShareSW* q = dynamic_cast<ShareSW*>(y.punt);
        return p && q && p->getMonths()<=q->getMonths();}
    case 7:{   //confronta le capacità <=
        Hardware* p = dynamic_cast<Hardware*>(x.punt);
        Hardware* q = dynamic_cast<Hardware*>(y.punt);
        return p && q && p->getDim()<=q->getDim();}
    case 8:{   //confronta i prezzi <=
        product* p=const_cast<product*>(&x);
        product* q=const_cast<product*>(&y);
        return ((*p)->Price() <= (*q)->Price());}
    case 9:{
        Hardware* p = dynamic_cast<Hardware*>(x.punt);
        Hardware* q = dynamic_cast<Hardware*>(y.punt);
        return p && q && p->getType()==q->getType();}
    };
    return false;
}
