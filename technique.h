#include "product.h"
#include <iostream>
#include<fstream>
using namespace std;
class Technique: virtual public Product
 {
     protected:
     double weight;
     int warranty;
     char type[20]="Technique";
     public:
     Technique(char * _name, double _price, int _numProducts, double _weight, int _warranty);
     Technique(const Technique &);
     Technique& operator=(const Technique &);
     ~Technique();
     void print ();
     void getType();
     void SaveToFile();
 };