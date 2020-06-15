#include "product.h"
#include <iostream>
#include<fstream>
using namespace std;
class Cosmetic:virtual public Product
 {
     protected:
    char * production;
    char * composition; 
    char type[20]="Cosmetics"
    public:
    Cosmetic(char * _name, double _price, int _numProducts, char * _production, char * _composition);
    Cosmetic(const Cosmetic &);
    Cosmetic& operator=(const Cosmetic &);
    ~Cosmetic();
    void print();
    char getType();
    void SafeToFile();
 };