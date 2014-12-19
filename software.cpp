//software.cpp

#include<iostream>
#include<string>
#include"ware.h"
#include"software.h"

using namespace std;

Software::Software(string n,string v,string t): Ware(n,v),swType(t),OS(0) {}

Software::~Software() {}

void Software::setType(string t) {swType=t;}

string Software::getType() const {return swType;}

void Software::setOS(int n) {OS=n;}

int Software::getOS() const {
    switch(OS) {
    case(20): return 2;
    case(10): return 1;
    case(12): return 3;
    default:  return 0;
    }
}

void Software::Print() const {
  Ware::Print();
  if(swType!="") cout<<"Categoria: "<<swType<<endl;
}

bool Software::operator<(const Ware& s) const { 
  if(Ware::operator<(s)) return true;
  const Software* p=dynamic_cast<const Software*>(&s);
  if(p) return swType < p->getType();
  else return false;
}

bool Software::operator==(const Ware& s) const {
  if(!(Ware::operator==(s))) return false;
  else {
    const Software* p = dynamic_cast<const Software*>(&s);
    if(p) return swType == p->getType();
    else  return swType == "";
  }
}
