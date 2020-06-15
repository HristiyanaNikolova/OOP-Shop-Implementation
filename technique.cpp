#include "product.h"
#include "technique.h"
#include <iostream>
using namespace std;
Technique::Technique(char * _name, double _price, int _numProducts, double _weight, int _warranty):Product(_name,_price,_numProducts)
 {
this->weight=_weight;
this->warranty=_warranty;
 }
 Technique::Technique(const Technique & other):Product(other)
 {
     this->weight=other.weight;
     this->warranty=other.warranty;
 }
 Technique& Technique:: operator=(const Technique & other)
 { 
     if(this!=&other)
     {
Product::operator=(other);
this->weight=other.weight;
this->warranty=other.warranty;
     }
     return *this;
 }
 Technique::~Technique()
 {

 }
 void Technique::print()
 {
     cout<<name<<" "<<price<<" "<<numProducts<<" "<<weight<<" "<<warranty<<endl;
 }
 void Technique::getType()
 {
     return *type;
 }
 void Technique::SafeToFile()
 {
     ofstream Technique;
     Technique.open("Technique.txt",ios::app);
     Technique<<name<<" "<<price<<" "<<numProducts<<" "<<weight<<" "<<warranty<<endl;
     Technique.close;
 }