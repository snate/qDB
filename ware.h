//ware.h

#ifndef PRODOTTO_H
#define PRODOTTO_H

#include<iostream>
#include<string>

using namespace std;

class Ware {
 private:
  string name;
  string vendor;
 public:
  Ware(string nome="",string vend="");                               //costruttore std e non del prodotto
  virtual ~Ware();                                                   //distruttore virtuale
  virtual Ware* clone() const =0;                                    //clonazione
  string getName() const;                                            //restituisce il modello del prodotto
  void setName(string);                                              //imposta il modello del prodotto
  string getVendor() const;                                          //restituisce il produttore
  void setVendor(string);                                            //imposta il produttore
  virtual double Price(int =1) const =0;                             //restituisce il prezzo del prodotto
  virtual void Print() const;                                        //stampa le informazioni del prodotto
  virtual bool operator<(const Ware&) const;                         //confronta due prodotti e informa se il primo è minore del secondo
  virtual bool operator==(const Ware&) const;                        //confronta due prodotti e informa se sono uguali
};

#endif
