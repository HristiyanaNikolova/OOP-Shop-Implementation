#include "product.h"
#include <iostream>
#include<fstream>
using namespace std;
class Food: virtual public Product
 {
     protected:
     double calories;
     double gram;
     char *content;
     char type[20]="Food";
     public:
     Food(char *_name, double _price, int _numProducts, double _calories, double _gram, char * _content);
     Food(const Food &);
     Food & operator=(const Food &);
     ~Food();
     void print ();
     void SaveToFile();
     void getType();
 };