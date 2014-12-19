//app.h
#ifndef PRODUCT_H
#define PRODUCT_H

#include"ware.h"
#include"propsw.h"
#include"hardware.h"
#include"sharesw.h"
#include"container.h"

using namespace std;

                    // ATTENZIONE DEFINIRE OPERATOR -> E *

class product {
    friend class Function;
    private:
        Ware* punt;
    public:
        product(const Ware&);
        product(Ware* =0);
        product(const product&);
        product& operator=(const product&);
        ~product();
        bool operator<(const product&) const;
        bool operator==(const product&) const;
        Ware* operator->();
        Ware& operator*();
        operator bool();
};

class Function {
    private:
        int feature;
    public:
        Function(int =0);
        bool operator()(const product&,const product&) const;
    };

namespace App {
    typedef Function Equal;
};

#endif
