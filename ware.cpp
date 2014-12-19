//ware.cpp

#include<iostream>
#include<string>
#include"ware.h"

using namespace std;

Ware::Ware(string n,string v): name(n),vendor(v) {}

Ware::~Ware() {}

string Ware::getName() const {return name;}

void Ware::setName(string n) {name=n;}

string Ware::getVendor() const {return vendor;}

void Ware::setVendor(string v) {vendor=v;}
void Ware::Print() const {
  if(vendor!="")cout<<"Produttore: "<<vendor<<endl;
  if(name!="")  cout<<"Articolo: "<<name<<endl;
}

bool Ware::operator<(const Ware& w) const {
    if(vendor<w.getVendor()) return true;
    if(vendor>w.getVendor()) return false;
    if(name<w.getName())     return true;
    else return false;
}

bool Ware::operator==(const Ware& w) const {
    return name==w.getName() && vendor==w.getVendor();
}
