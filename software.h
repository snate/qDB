//software.h

#ifndef SOFTWARE_H
#define SOFTWARE_H

#include<iostream>
#include<string>
#include"ware.h"

using namespace std;

class Software: public Ware {
 private:
  string swType;                                  //dice di che tipo è il software
  int OS;                                         //sequenza che può valere 10,20 o 21 a seconda che giri
  //rispettivamente su 10=>(Windows,Ubuntu), su 20=>(Windows,Lion) o su 21=>(Windows,Lion,Ubuntu), 0=>(Windows)
  //2=LIONX 1=UBUNTU12    , si assume che qualsiasi software riesca a girare su Win8.1
 public:
    Software(string nome="",string vend="",string tipo="");   //costruttore di software std e non
    virtual ~Software();                          //distruttore virtuale
    virtual Software* clone() const =0;           //clonazione
    void setType(string);                         //imposta il tipo del software
    string getType() const;                       //restituisce il tipo del software
    void setOS(int);                              //imposta gli OS supportati
    int getOS() const;                            //informa su
    virtual double Price(int =0) const =0;        //restituisce il prezzo del software
    virtual void Print() const;                   //stampa le informazioni del software
    virtual bool operator<(const Ware&) const;    //informa se l'oggetto di invocazione è minore del parametro passato per riferimento costante
    virtual bool operator==(const Ware&) const;   //informa se i due software sono uguali
};

#endif
