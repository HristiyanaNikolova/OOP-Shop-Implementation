#include "product.h"
#include<iosteream>
using namespace std;
Product::Product(char * _name, double _price, int _numProducts)
{
    this->name=new char[strlen(_name)+1];
    strcpy(name,_name);
    this->price=_price;
    this->numProducts=_numProducts;
}
Product::Product(const Product & other)
{
    this->name=new char[strlen(other.name)+1];
    strcpy(name,other.name);
    this->price=other.price;
    this->numProducts=other.numProducts;
}
Product &Product:: operator=(const Product & other)
{
    if(this!=&other)
    {
        delete [] name;
        this->name=new char[strlen(other.name)+1];
        this->price=other.price;
        this->numProducts=other.numProducts;
    }
    return * this;
}
Product::~Product()
{
    delete [] name;
}
double Product::getPrice()
{
    return price;
}