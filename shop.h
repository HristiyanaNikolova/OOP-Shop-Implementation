#include<iostream>
#include"product.h"
#include"seller.h"
#include<fstream>
using namespace std;
class Shop
{
    protected:
    int size;
    int cap=10;
    Product *arr;
    int size1;
    int cap1=10;
    Seller *arr1;
    int employee[100];
    int items[5000];
    public:
    Shop(int _size=0; int _cap=10, Product *_arr=NULL, int _size1=0, int _cap1=10, Seller *_arr1=NULL, int _employee[100], int _items[5000] )
    Shop(const Shop &);
    Shop & operator=(const Shop &);
    ~Shop();
    int buying(int items);
    int addProducts(Product * obj);
    int deleteProducts(int items);
    void writeIn(Product * arr);
    int appoint(Seller * worker);
};