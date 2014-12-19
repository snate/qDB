//propsw.cpp

#include<iostream>
#include<string>
#include"ware.h"
#include"software.h"
#include"propsw.h"

using namespace std;

PropSW::PropSW(string n,string v,double p,string t,bool o): Software(n,v,t),price(p),out(o) {}

PropSW::~PropSW() {}

PropSW* PropSW::clone() const {return new PropSW(*this);}

void PropSW::setPrice(double p) {if(p>=0) price=p;}

bool PropSW::getOut() const {return out;}

void PropSW::setOut(bool b) {out=b;}

double PropSW::Price(int n) const {
  double sale=0.0;
  if(n>=10) sale+=0.25;
  return price*(n)*(1-sale);
}

void PropSW::Print() const {
  Software::Print();
  if(price>=0) cout<<"Prezzo: "<<price<<"€"<<endl;
}
