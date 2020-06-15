#include "product.h"
#include <iostream>
using namespace std;
class Clothes: virtual public Product
 {
     protected:
     double size;
     double lenght;
     char type[20]="Clothes";
     public:
     Clothes(char * _name, double _price, int _numProducts, double _size, double _lenght);
     Clothes(const Clothes &);
     Clothes & operator=(const Clothes &);
     ~Clother ();
     void print();
     void getType();
     void SaveToFile();
 };