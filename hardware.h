//hardware.h

#ifndef HARDWARE_H
#define HARDWARE_H

#include<iostream>
#include<string>
#include"ware.h"

using namespace std;

class Hardware: public Ware {                                        //componentistica di storage
 private:
  double price;                                                      //prezzo di una unità
  string objType;                                                    //categoria alla quale appartiene il componente (USB/CD/DVD/HDD/...)
  int capacity;                                                   //capacità del componente, espressa in MB
 public:
  Hardware(string nome="",string vend="",double prez=0.0,string tipo="",int dim=0.0);//costruttore std e non
  ~Hardware();
  virtual Hardware* clone() const;
  void setType(string ="");                                          //imposta la categoria del componente
  string getType() const;                                            //restituisce la categoria del componente
  void setDim(double =0.0);                                          //imposta la capacità
  int getDim() const;                                             //restituisce la capacità del componente
  virtual double Price(int =1) const;                                //restituisce il prezzo dell'acquisto di n unità
  virtual void Print() const;                                        //stampa le informazioni del componente
  virtual bool operator<(const Ware&) const;                         //informa se il primo oggetto è "minore" del secondo
  virtual bool operator==(const Ware&) const;                        //informa se i due oggetti sono uguali
};

 #endif
