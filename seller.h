#include <iostream>
#include "human.h"
using namespace std;
class Seller: public Human
 {
     public:
     Seller(char _ime, int _years);
     Seller(const Seller & );
     Seller& operator=(const Seller &);
     ~Seller();
    
 };
 