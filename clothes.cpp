#include "prosuct.h"
#include "clothers.h"
#include<iostream>
using namespace std;
 Clothes::Clothes(char * _name, double _price, int _numProducts, double _size, double _lenght):Product(_name,_price,_numProducts)
 {
     
     this->size=_size;
     this->lenght=_lenght;
 }
 Clothes::Clothes(const Clothes & other):Product(other)
 {
     this->size=other.size;
     this->lenght=other.lenght;
 }
 Clothes& Clothes:: operator=(const Clothes & other)
 {
     if(this!=&other)
     {
         Product::operator=(other);
         this->size=other.size;
         this->lenght=other.lenght;
     }
     return *this;
 }
 Clothes::~Clothes()
 {

 }
 void Clothes::print()
 {
     cout<<name<<" "<<price<<" "<<numProducts<<" "<<size<<" "<<lenght<<endl;
 }
 void Clothes::getType()
 {
     return *type;
 }
 void Clothes::SafeToFile()
 {
     ofstream Clothes;
     Clothes.open("Clothes.txt",ios::app);
     Clothers<<name<<" "<<price<<" "<<numProducts<<" "<<size<<" "<<lenght<<endl;
     Clothes.close();

 }