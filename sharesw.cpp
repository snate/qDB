//sharesw.cpp

#include<iostream>
#include<string>
#include"ware.h"
#include"software.h"
#include"sharesw.h"

using namespace std;

ShareSW::ShareSW(string n,string v,double p,int m,string t): Software(n,v,t),payment(p),months(m) {}

ShareSW::~ShareSW() {}

ShareSW* ShareSW::clone() const {return new ShareSW(*this);}

int ShareSW::getMonths() const {return months;}

void ShareSW::setMonths(int m) {months=m;}

double ShareSW::Price(int copies) const {
    double sale=0.0;
    if(months>=24) sale += 0.10;
    if(months>=12) sale += 0.05;
    return payment*(months-1)*copies*(1-sale);
}

void ShareSW::Print() const {
  Software::Print();
  cout<<"Il prezzo è di "<<payment<<"€/mese."<<endl;
  cout<<"--- Trial version --- Mesi totali di prova: "<<months<<endl;
}
