//sharesw.h

#ifndef SHARESW_H
#define SHARESW_H

#include<iostream>
#include<string>
#include"ware.h"
#include"software.h"

using namespace std;

class ShareSW : public Software {                                 //software che è pagato mensilmente ad un prezzo accessibile, così da permetterne la prova prima dell'acquisto definitivo
 private:
  double payment;                                                 //rata mensile
  int months;                                                     //numero di mesi di prova fissi per il prodotto
 public:
  ShareSW(string nome="",string vend="",double pag=0.0,int mesi=12,string tipo="");  //costruttore std e non
  ~ShareSW();                                                     //distruttore non virtuale
  ShareSW* clone() const;                                         //clonazione di shareware
  int getMonths() const;
  void setMonths(int);
  virtual double Price(int =1) const;                             //restituisce il prezzo di n licenze per i mesi di abbonamento
  virtual void Print() const;                                     //stampa le informazioni del software
  //si eredita l'overloading dell'operatore di confronto perchè nel caso in cui due software abbiano nome,produttore e tipo uguali si assume che abbiano anche prezzo uguale
  //si eredita l'overloading dell'operatore di uguaglianza perchè si assume che due software siano uguali se hanno stesso produttore, stesso nome e stesso tipo
};

#endif
