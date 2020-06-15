#include <iostream>
#include "human.h"
#include "seller.h"
using namespace std;
Seller::Seller(char _ime, int _years):Human(_ime,_years)
 {

 }
 Seller::Seller(const Seller & other):Human(other)
 {

 }
 Seller& Seller :: operator=(const Seller & other)
 {
     if(this!=&other)
     {
         Human::operator=(other);
     }
     return *this;
 }
 Seller::~Seller
 {

 }
