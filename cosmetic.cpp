#include "product.h"
#include "cosmetic.h"
#include <iostream>
#include<fstream>
using namespace std;
Cosmetic::Cosmetic(char * _name, double _price, int _numProducts, char * _production, char * _composition):Product(_name,_price,_numProducts)
 {
this->production=new char[strlen(_production)+1];
strcpy(production,_production);
this->composition]new char[strlen(_composition)+1];
strpy(composition,_composition);
 }
 Cosmetic::Cosmetic(const Cosmetic & other):Product(other)
 {
     this->production=new char[strlen(other.production)+1];
     strcpy(production,other.production);
     this->composition=new char[strlen(other.composition)+1];
     strcpy(composition,other.composition);
 }
 Cosmetic &Cosmetic::operator=(const Cosmetic & other)
 {
     if(this!=&other)
     {
Product::operator=(other);
delete[] production;
delete[] composition;
this->production=new char[strlen(other.production)+1];
strcpy(production,other.production);
this->composition=new char[strlen(other.composition)+1];
strcpy(composition,other.composition); 
     }
     return *this;
 }
 Cosmetic::~Cosmetic
 {
     delete [] production;
     delete [] composition;
 }
 void Cosmetic:: print()
 {
     cout<<name<<" "<<price<<" "<<numProducts<<" "<<production<<" "<<composition<<endl;
 }
 void Cosmetic::getType()
 {
     return *type;
 }
 void Cosmetic::SafeToFile()
 {
     ofstream Cosmetic;
     Cosmetic.open("Cosmetics.txt", ios::app);
     Cosmetic<<name<<" "<<price<<" "<<numProducts<<" "<<production<<" "<<composition<<endl;
     Cosmetic.close();
 } 
   