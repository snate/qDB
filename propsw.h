//propsw.h

#ifndef PROPSW_H
#define PROPSW_H

#include<iostream>
#include<string>
#include"ware.h"
#include"software.h"

using namespace std;

class PropSW : public Software {                                     //software proprietario, per usarlo serve comprare una serial key
 private:
  double price;                                                      //costo di una serial key
  bool out;                                                          //informa se il programma è già uscito
 public:
    PropSW(string nome="",string vend="",double prez=0.0,string tipo="",bool disp=true); //costruttore std e nonx
    ~PropSW();                                                       //distruttore non virtuale
    virtual PropSW* clone() const;                                   //clonazione
    void setPrice(double =-1.0);                                     //imposta il prezzo
    bool getOut() const;                                             //informa se il software è disponibile per la vendita
    void setOut(bool =true);                                         //imposta lo stato di disponibilità del software
    virtual double Price(int =1) const;                              //restituisce il prezzo di n serial key vendute
    virtual void Print() const;                                      //stampa le informazioni del software
    //si eredita l'overloading dell'operatore di confronto perchè nel caso in cui due software abbiano nome,produttore e tipo uguali si assume che abbiano anche prezzo uguale
    //si eredita l'overloading dell'operatore di uguaglianza perchè si assume che due software siano uguali se hanno stesso produttore, stesso nome e stesso tipo
};

#endif
