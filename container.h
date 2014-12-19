//container.h
#ifndef CONT_H
#define CONT_H
#include<iostream>

using std::ostream;using std::cout;

template<class T> class Cont {
  friend class iterator;
  friend class const_iterator;
 public:
  typedef unsigned int size_type;
  typedef T value_type;
 private:
  class Item;
  class smartp {
  public:
    Item* punt;                                                                 //unico campo dati di smart pointer, puntatore all'oggetto di classe T puntato
    smartp(Item* =0);                                                           //costruttore di smart pointer, con possibile inizializzazione
    smartp(const smartp&);                                                      //costruttore di copia smart pointer
    ~smartp();                                                                  //distruttore di uno smart pointer
    smartp& operator=(const smartp&);                                           //assegnazione tra smart pointers
    Item& operator*() const;                                                    //dereferenziazione per smart pointers
    Item* operator->() const;                                                   //accesso a membro per smart pointers
    bool operator==(const smartp&) const;                                       //uguaglianza tra smart pointers
    bool operator!=(const smartp&) const;                                       //disuguaglianza tra smart pointers
    operator bool();                                                            //conversione smartp => bool
  };
  class Item {
  public:
    Item();                                                                     //costrutore di Item, con valori di default
    Item(const value_type&,smartp =0);                                          //costruttore di Item, con possibile inizializzazione
    value_type info;
    smartp next;
    Item* prev;
    int riferimenti;
  };
  smartp first;                                                                 //campo dati di cont, smart pointer al primo elemento
  Item* last;
  size_type dim;                                                                //campo dati di cont, numero di elementi in cont
  bool ord;                                                                     //campo dati di cont: true <=> Cont è ordinato
 public:
  class iterator {
    friend class Cont;
    friend class const_iterator;
  private:
    Item* pointer;
  public:
    bool operator==(const iterator&) const;                                     //uguaglianza tra iteratori
    bool operator!=(const iterator&) const;                                     //disuguaglianza tra iteratori
    iterator& operator++();                                                     //incremento prefisso 
    iterator operator++(int);                                                   //incremento postfisso
    iterator& operator--();                                                     //decremento prefisso
    iterator operator--(int);                                                   //decremento postfisso
    iterator operator+(int);                                                    //avanzamento (responsabilità utente di restare nei boundaries)
    iterator& operator+=(int);                                                  //avanzamento con assegnazione (resp. come sopra)
    iterator operator-(int);                                                    //arretramento (resp. come sopra)
    iterator& operator-=(int);                                                  //arretramento con assegnazione (resp. come sopra)
    bool operator<(const iterator&) const;                                      //indica se il parametro formale è successivo nella lista rispetto all'oggetto di invocazione
    bool operator>=(const iterator&) const;                                     //indica se il parametro formale coincide o è precedente nella lista rispetto all'oggetto di invocazione
    bool operator>(const iterator&) const;                                      //indica se il parametro formale è precedente nella lista rispetto all'oggetto di invocazione
    bool operator<=(const iterator&) const;                                     //indica se il parametro formale coincide o è successivo nella lista rispetto all'oggetto di invocazione
    value_type& operator[](int);                                                //dereferenziazione *(it+n)  (resp. come sopra)
    value_type& operator*();                                                    //dereferenziazione
    operator bool();                                                            //restituisce false se pointer è un null pointer
  };
  class const_iterator {
    friend class Cont;
  private:
    const Item* pointer;
  public:
    const_iterator(iterator =0);                                                //costruttore std e con conversione da iterator a const_iterator
    bool operator==(const const_iterator&) const;                               //uguaglianza tra iteratori
    bool operator!=(const const_iterator&) const;                               //disuguaglianza tra iteratori
    const_iterator& operator++();                                               //incremento prefisso 
    const_iterator operator++(int);                                             //incremento postfisso
    const_iterator& operator--();                                               //decremento prefisso
    const_iterator operator--(int);                                             //decremento postfisso
    const_iterator operator+(int);                                              //avanzamento (responsabilità utente di restare nei boundaries)
    const_iterator& operator+=(int);                                            //avanzamento con assegnazione (resp. come sopra)
    const_iterator operator-(int);                                              //arretramento (resp. come sopra)
    const_iterator& operator-=(int);                                            //arretramento con assegnazione (resp. come sopra)
    bool operator<(const const_iterator&) const;                                //indica se il parametro formale è successivo nella lista rispetto all'oggetto di invocazione
    bool operator>=(const const_iterator&) const;                               //indica se il parametro formale coincide o è precedente nella lista rispetto all'oggetto di invocazione
    bool operator>(const const_iterator&) const;                                //indica se il parametro formale è precedente nella lista rispetto all'oggetto di invocazione
    bool operator<=(const const_iterator&) const;                               //indica se il parametro formale coincide o è successivo nella lista rispetto all'oggetto di invocazione
    const value_type& operator[](int) const;                                    //dereferenziazione *(it+n)  (resp. come sopra)
    const value_type& operator*() const;                                        //dereferenziazione
    operator bool();                                                            //restituisce false se pointer è un null pointer
  };
  Cont();                                                                       //crea un cont vuoto
  size_type size();                                                             //restituisce il numero di elementi nel contenitore
  bool empty() const;                                                           //informa se la lista è vuota
  iterator begin() const;                                                       //restituisce un iteratore che punta il primo elemento del contenitore
  iterator end() const;                                                         //restituisce un iteratore che punta l'ultimo nodo del contenitore
  Cont(size_type,const value_type&);                                            //costruisce il contenitore di tipo cont con un certo numero di copie dell'elemento passato per riferimento
  Cont(size_type);                                                              //costriusce il contenitore di tipo cont con un certo numero di copie dell'elemento di default di tipo value_type
  iterator insert(iterator,const value_type&);                                  //inserisce il valore t prima dell'elemento puntato da it, restituisce l'iteratore del nuovo elemento inserito
  void insert(iterator,size_type,const value_type&);                            //inserisce il valore t prima dell'elemento puntato da it
  iterator erase(iterator);                                                     //se l'iteratore punta un elemento del contenitore, toglie l'elemento dal contenitore e lo distrugge
  iterator erase(iterator,iterator);                                            //cancella gli elementi da quello puntato da it1 a quello precedente rispetto a quello puntato da i2
  void clear();                                                                 //esegue l'erase sull'intero contenitore
  iterator push_back(const value_type&);                                        //aggiunge un elemento in coda a cont
  void pop_back();                                                              //elimina l'elemento in coda a cont
  void push_front(const value_type&);                                           //inserisce in testa al contenitore l'elemento t
  void pop_front();                                                             //cancella l'elemento in testa al contenitore
  value_type min() const;                                                       //restituisce l'elemento minore presente in cont
  value_type& operator[](const iterator&) const;                                //restituisce il campo info di tipo T dell'item puntato
  void sort();                                                                  //ordina cont con Insertion Sort
  void merge(Cont&);                                                            //unisce due contenitori nel primo mediante Merge Sort, svuota il secondo dei due
  void move(Cont&,iterator,const T&);                                           //prende l'elemento puntato da b nel contenitore x e lo inserisce prima di quello puntato da a nel contenitore *this
  Cont* find(const T&);                                                         //restituisce un contenitore formato dagli elementi uguali a T dentro il contenitore attuale
  template<class Functor> Cont* find(const T& x,Functor equal);                 //ridefinisce la funzione di ricerca, implementando l'uso di funtori
  void edit(iterator,const T&);                                                 //copia il valore val nell'elemento puntato dall'iteratore
  Cont* deepCopy();                                                             //esegue una copia profonda di uno smartp
};

//SMARTP
template<class T> Cont<T>::smartp::smartp(Item* p) : punt(p) {if(punt) punt->riferimenti++;}

template<class T> Cont<T>::smartp::smartp(const smartp& s) : punt(s.punt) {if(punt) punt->riferimenti++;}

template<class T> Cont<T>::smartp::~smartp() {
  if(punt) {
    punt->riferimenti--;
    if(punt->riferimenti==0) delete punt;
  }
}

template<class T> typename Cont<T>::smartp& Cont<T>::smartp::operator=(const smartp& s) {
  if(this!=&s) {
    Item* aux=punt;
    punt=s.punt;
    if(punt) punt->riferimenti++;
    if(aux) {
      aux->riferimenti--;
      if(aux->riferimenti==0) delete aux;
    }
  }
  return *this;
}

template<class T> typename Cont<T>::Item& Cont<T>::smartp::operator*() const {return *punt;}

template<class T> typename Cont<T>::Item* Cont<T>::smartp::operator->() const {return punt;}  

template<class T> bool Cont<T>::smartp::operator==(const smartp& p) const {return punt==p.punt;}

template<class T> bool Cont<T>::smartp::operator!=(const smartp& p) const {return punt!=p.punt;}

template<class T> Cont<T>::smartp::operator bool() {return punt!=0;}

//ITEM
template<class T> Cont<T>::Item::Item() : next(0),prev(0) {}

template<class T> Cont<T>::Item::Item(const value_type& val,smartp s) : info(val),next(s),prev(0) {}

//ITERATOR
template<class T> bool Cont<T>::iterator::operator==(const iterator& i) const {return pointer==i.pointer;}

template<class T> bool Cont<T>::iterator::operator!=(const iterator& i) const {return pointer!=i.pointer;}

template<class T> typename Cont<T>::iterator& Cont<T>::iterator::operator++() {
  if(pointer) pointer=(pointer->next).punt;
  return *this;
}

template<class T> typename Cont<T>::iterator Cont<T>::iterator::operator++(int) {
  iterator aux=*this;
  if(pointer) pointer=(pointer->next).punt;
  return aux;
}

template<class T> typename Cont<T>::iterator& Cont<T>::iterator::operator--() {
  if(pointer) pointer=pointer->prev;
  return *this;
}

template<class T> typename Cont<T>::iterator Cont<T>::iterator::operator--(int) {
  iterator aux=*this;
  if(pointer) pointer=pointer->prev;
  return aux;
}

template<class T> typename Cont<T>::iterator Cont<T>::iterator::operator+(int n) {
  iterator aux=*this;
  for(int i=0;i<n;i++) aux++;
  return aux;
}

template<class T> typename Cont<T>::iterator& Cont<T>::iterator::operator+=(int n) {
  iterator& aux=*this;
  aux=aux+n;
  return aux;
}

template<class T> typename Cont<T>::iterator Cont<T>::iterator::operator-(int n) {
  iterator aux=*this;
  for(int i=0;i<n;i++) {
    Item* prior=(aux.pointer)->prev;
    aux.pointer=prior;
  }
  return aux;
}

template<class T> typename Cont<T>::iterator& Cont<T>::iterator::operator-=(int n) {
  iterator& aux=*this;
  aux=aux-n;
  return aux;
}

template<class T> bool Cont<T>::iterator::operator<(const iterator& it) const { //se uno dei due oggetti (parametro o oggetto di istanziazione) sono iteratori di un null pointer restituisce false
  iterator aux=it;
  if(!pointer) return false;
  if(!aux) return true;
  Item* prior=(aux.pointer)->prev;
  while(prior!=0) {
    if(prior==pointer) return true;
    aux--;
    prior=(aux.pointer)->prev;
  }
  return false;
}

template<class T> bool Cont<T>::iterator::operator>=(const iterator& it) const {
  Item aux=*this;
  return !(aux<it);
}

template<class T> bool Cont<T>::iterator::operator>(const iterator& it) const {
  iterator aux=it;
  if(aux.pointer==0 || pointer==0) return false;
  Item* succ=((aux.pointer)->next).punt;
  while(succ!=0) {
    if(succ==pointer) return true;
    aux++;
    succ=((aux.pointer)->next).punt;
  }
  return false;
}

template<class T> bool Cont<T>::iterator::operator<=(const iterator& it) const {
  Item aux=*this;
  return !(aux>it);
}

template<class T> T& Cont<T>::iterator::operator[](int n) {
  for(int i=0;i<n;i++)
    (*this)++;
  return (*this)->info;
}

template<class T> T& Cont<T>::iterator::operator*() {return pointer->info;}

template<class T> Cont<T>::iterator::operator bool() {return pointer!=0;}

//CONST_ITERATOR
template<class T> Cont<T>::const_iterator::const_iterator(iterator i) {
    if(i) pointer=i.pointer;
    else  pointer=0;
}

template<class T> bool Cont<T>::const_iterator::operator==(const const_iterator& i) const {return pointer==i.pointer;}

template<class T> bool Cont<T>::const_iterator::operator!=(const const_iterator& i) const {return pointer!=i.pointer;}

template<class T> typename Cont<T>::const_iterator& Cont<T>::const_iterator::operator++() {
  if(pointer) pointer=(pointer->next).punt;
  return *this;
}

template<class T> typename Cont<T>::const_iterator Cont<T>::const_iterator::operator++(int) {
  const_iterator aux=*this;
  if(pointer) pointer=(pointer->next).punt;
  return aux;
}

template<class T> typename Cont<T>::const_iterator& Cont<T>::const_iterator::operator--() {
  if(pointer) pointer=pointer->prev;
  return *this;
}

template<class T> typename Cont<T>::const_iterator Cont<T>::const_iterator::operator--(int) {
  const_iterator aux=*this;
  if(pointer) pointer=pointer->prev;
  return aux;
}

template<class T> typename Cont<T>::const_iterator Cont<T>::const_iterator::operator+(int n) {
  const_iterator aux=*this;
  for(int i=0;i<n;i++) aux++;
  return aux;
}

template<class T> typename Cont<T>::const_iterator& Cont<T>::const_iterator::operator+=(int n) {
  const_iterator& aux=*this;
  aux=aux+n;
  return aux;
}

template<class T> typename Cont<T>::const_iterator Cont<T>::const_iterator::operator-(int n) {
  const_iterator aux=*this;
  for(int i=0;i<n;i++) {
    Item* prior=(aux.pointer)->prev;
    aux.pointer=prior;
  }
  return aux;
}

template<class T> typename Cont<T>::const_iterator& Cont<T>::const_iterator::operator-=(int n) {
  const_iterator& aux=*this;
  aux=aux-n;
  return aux;
}

template<class T> bool Cont<T>::const_iterator::operator<(const const_iterator& it) const {
  const_iterator aux=it;
  if(!pointer) return false;
  if(!aux) return true;
  Item* prior=(aux.pointer)->prev;
  while(prior!=0) {
    if(prior==pointer) return true;
    aux--;
    prior=(aux.pointer)->prev;
  }
  return false;
}

template<class T> bool Cont<T>::const_iterator::operator>=(const const_iterator& it) const {
  Item aux=*this;
  return !(aux<it);
}

template<class T> bool Cont<T>::const_iterator::operator>(const const_iterator& it) const {
  const_iterator aux=it;
  if(aux.pointer==0 || pointer==0) return false;
  Item* succ=((aux.pointer)->next).punt;
  while(succ!=0) {
    if(succ==pointer) return true;
    aux++;
    succ=((aux.pointer)->next).punt;
  }
  return false;
}

template<class T> bool Cont<T>::const_iterator::operator<=(const const_iterator& it) const {
  Item aux=*this;
  return !(aux>it);
}

template<class T> const T& Cont<T>::const_iterator::operator[](int n) const {
  for(int i=0;i<n;i++)
    (*this)++;
  return (*this)->info;
}

template<class T> const T& Cont<T>::const_iterator::operator*() const {return pointer->info;}

template<class T> Cont<T>::const_iterator::operator bool() {return pointer!=0;}

//CONT
template<class T> Cont<T>::Cont() : last(0),dim(0),ord(true) {}

template<class T> typename Cont<T>::size_type Cont<T>::size() {return dim;}

template<class T> bool Cont<T>::empty() const {
  return (first==0);
}

template<class T> typename Cont<T>::iterator Cont<T>::begin() const {
  iterator aux;
  aux.pointer = first.punt;
  return aux;
}

template<class T> typename Cont<T>::iterator Cont<T>::end() const {
  iterator aux;
  aux.pointer=0;
  return aux;
}

template<class T> Cont<T>::Cont(size_type n,const value_type& t) : dim(0),ord(true),last(0) {
    iterator it; it.pointer=0;
    insert(it,n,t);
}

template<class T> Cont<T>::Cont(size_type n) : dim(n),ord(true) {
  if(n>0) {
    first=new Item();
    smartp s=first;
    for(int i=1;i<n;i++) {
      smartp& succ=(s.punt)->next;
      succ=new Item;
      s=succ;
    }
    last=s.punt;
  }
}

template<class T> typename Cont<T>::iterator Cont<T>::insert(iterator it,const value_type& t) {
  Item* nuovo=new Item(t,it.pointer);
  Item* prior=last;
  if(it) prior=(it.pointer)->prev;                                                               //nuovo viene inserito prima di un altro elemento del contenitore
  else last=nuovo;                                                                               //inserito in posizione past-to-the-end
  nuovo->prev=prior;
  if(prior) (prior->next)=nuovo;                                                                 //inserito dopo qualche altro elemento
  else first=nuovo;                                                                              //inserito in prima posizione
  dim++;
  if(dim>1 && ord){
    if(it) {if(*it<nuovo->info) ord=false;}
    else   {if(nuovo->info<prior->info) ord=false;}
  }
  iterator aux; aux.pointer=nuovo;
  return aux;
}

template<class T> void Cont<T>::insert(iterator it,size_type n,const value_type& t) {
  if(n<=0) return;
  iterator pNew=insert(it.pointer,t);iterator uNew;
  iterator p=pNew;
  if(n==1) uNew=pNew;
  else
    for(int i=1;i<n;i++) {
      uNew=insert(it.pointer,t);
      p->next=uNew.pointer;
      p.pointer=uNew.pointer;
    }
  Item* prior=last;
  if(it) {                                                                              //inserito/i prima di un altro elemento
    prior=(it.pointer)->prev;
    (it.pointer)->prev=uNew;
  }
  else                                                                                          //inserito/i in posizione past-to-the end
    last=uNew;
  pNew->prev=prior;
  if(prior) prior->next=pNew;                                                                   //inserito/i dopo un altro elemento
  else first=pNew;                                                                              //inserito/i prima del primo elemento
  dim+=n;
  if(dim>1 && ord){
    if(it) {if(*it<*uNew)         ord=false;}
    else   {if(*pNew<prior->info) ord=false;}
  }
}

template<class T> typename Cont<T>::iterator Cont<T>::erase(iterator it) {
  if(!it) {
    iterator aux; aux.pointer=0;
    return aux;
  }
  Item* curr=it.pointer;
  Item* succ=(curr->next).punt;
  Item* prior=curr->prev;
  if(prior) prior->next=succ;
  else first=succ;
  if(succ) succ->prev=prior;
  else last=prior;
  dim--;
  iterator aux;aux.pointer=succ;
  return aux;
}

template<class T> typename Cont<T>::iterator Cont<T>::erase(iterator it1,iterator it2) {
  bool b=true;
  iterator i;
  for(i=it1;b && i!=it2;i++)
      if(!i)
	b=false;
  if(!b) return 0;
  for(i=it1;i!=it2;)
    i=erase(i);
  return i;
}

template<class T> void Cont<T>::clear() {
  erase(begin(),end());
  dim=0;
}

template<class T> typename Cont<T>::iterator Cont<T>::push_back(const value_type& val) {
  if(empty()) {
    iterator aux = insert(begin(),val);
    first=aux.pointer;
    last=aux.pointer;
    dim=1;
  }
  else{
    Item* newLast=new Item(val,0);
    if(val<last->info) ord=false;
    last->next=newLast;
    newLast->prev=last;
    if(ord && newLast->info<last->info) ord=false;
    last=newLast;
    dim++;
  }
  iterator aux; aux.pointer=last;
  return aux;
}

template<class T> void Cont<T>::pop_back() {
  if(last){
    if(!last->prev) first=0;
    else {
      Item* newLast=last->prev;
      delete last;
      last=newLast;
      last->next=0;
    }
    dim--;
  }
}

template<class T> void Cont<T>::push_front(const value_type& t) {
  iterator primo=insert(begin(),t);
  Item* secondo=primo.pointer->next.punt;
  if(dim>1 && ord)
    if(ord && secondo->info<*primo)
      ord=false;
}

template<class T> void Cont<T>::pop_front() {
  erase(begin());
}

using std::cerr;using std::endl;
template<class T> typename Cont<T>::value_type Cont<T>::min() const {
  if(empty()){
    cerr<<"Lista vuota"<<endl;
  }
  Item min= *first;
  for(iterator i=begin();i!=end();i++) 
    if(*i<min.info) min.info=*i;
  return min.info;
}

template<class T> T& Cont<T>::operator[](const iterator& it) const {return (it.pointer)->info;}

template<class T> void Cont<T>::sort() {         //ordina cont con Insertion Sort
  if(!ord) {
    iterator p=begin();
    iterator* it=new iterator[dim];
    for(unsigned int i=0;i<dim;i++) {
      it[i].pointer=p.pointer;
      p++;
    }
    for(unsigned int j=1;j<dim;j++) {
      int i=j-1;
      value_type elem = *it[j];
      while(i>=0 && elem<*it[i]) {
        *it[i+1]=*it[i];
        i--;
      }
      *it[i+1]=elem;
    }
  }
  ord=true;
}

template<class T> void Cont<T>::merge(Cont& x) {         //ordina cont con Heap Sort
  sort();
  if(this==&x) return;
  x.sort();
  iterator a=begin();
  iterator b=x.begin();
  while(b)
    if(!a)
      while(b) {
	move(x,a,*b);
	b=x.begin();
      }
    else
      if(*b<*a) {
	move(x,a,*b);
	b=x.begin();
      }
      else {
	a++;
	while(a && !*b<*a) a++;
	move(x,a,*b);
	b=x.begin();
	cout<<*this<<endl;
	}
}

template<class T> void Cont<T>::move(Cont& x,iterator a,const T& val) {
  insert(a,val);
  x.pop_front();
  cout<<x<<endl;
}

template<class T> Cont<T>* Cont<T>::find(const T& t) {
    Cont* aux = new Cont();
    for(iterator it=begin();it<end();it++)
        if((*it)==t) aux->push_back(*it);
    return aux;
}

template<class T> void Cont<T>::edit(iterator it,const T& val) {
    if(it)
        (*it)=val;
}

template<class T> template<class Functor> Cont<T>* Cont<T>::find(const T& y,Functor equal) {
    Cont* aux=new Cont();
    for(iterator it=begin();it<end();it++)
        if(equal(*it,y)) aux->push_back(*it);
    return aux;
}

template<class T> Cont<T>* Cont<T>::deepCopy() {
  if(empty()) return 0;
  smartp p=first;
  Item* primo=new Item(p->info);
  Item* prec=primo;
  Item* q;
  p=p->next;
  while(p) {
    prec->next=new Item(p->info);
    q=(prec->next).punt;
    q->prev=prec;
    prec=q;
    p=p->next;
  }
  Cont* nuovo=new Cont;
  nuovo->first.punt=primo;
  nuovo->dim=dim;
  nuovo->last=q;
  nuovo->ord=ord;
  return nuovo;
}

template<class T> ostream& operator<<(ostream& os,const Cont<T>& c) {
    if(c.begin())
        for(typename Cont<T>::iterator i=c.begin();i!=c.end();i++)
            os<<*i<<std::endl;
    else
        cout<<"Lista vuota"<<endl;
    return os;
}

#endif
