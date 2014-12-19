//hardware.cpp

#include<iostream>
#include<string>
#include"ware.h"
#include"hardware.h"

using namespace std;

Hardware::Hardware(string n,string v,double p,string t,int c):Ware(n,v),price(p),objType(t),capacity(c) {}

Hardware::~Hardware() {}

Hardware* Hardware::clone() const {return new Hardware(*this);}

void Hardware::setType(string t) {objType=t;}

string Hardware::getType() const {return objType;}

void Hardware::setDim(double c) {capacity=c;}

int Hardware::getDim() const {return capacity;}

double Hardware::Price(int n) const {
  double sale=0.0;
  if(n>=1000)  sale += 0.15;
  return price*n*(1-sale);
}

void Hardware::Print() const {
  Ware::Print();
  if(objType!="") cout<<"Tipologia articolo: "<<objType;
  if(capacity>0)  cout<<endl<<"Capacita': "<<capacity;
  cout<<endl;
}

bool Hardware::operator<(const Ware& w) const {
  const Hardware* p = dynamic_cast<const Hardware*>(&w);
  if(p) {
      if(capacity<p->getDim()) return true;
      if(capacity>p->getDim()) return false;
      if(Ware::operator <(*p)) return true;
      return false;
  }
  else  return Ware::operator<(w);
}

bool Hardware::operator==(const Ware& w) const {
  const Hardware* p = dynamic_cast<const Hardware*>(&w);
  if(p) return capacity==p->getDim() && objType==p->getType() && Ware::operator==(*p);
  else  return Ware::operator==(w);
}
