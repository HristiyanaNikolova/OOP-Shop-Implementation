#include "shop.h"
#include<iostream>
#include<fstream>
using namespace std;
Shop::Shop(int _size=0; int _cap=10, Product *_arr=NULL, int _size1=0, int _cap1=10, Seller *_arr1=NULL, int _employee[100], int _items[5000] )
{
    this->size=_seze;
    this->size1=_size1;
    this->cap=_cap;
    this->cap1=_cap1;
    this->employee=_employee;
    this->items=_items;
    Product **arr=new Product*[size];
    for(int i=0;i<size;i++)
    {
        this->arr[i]=_rr[i];
    }
    Seller **arr1=new Seller*[size];
    for(int i=0;i<size;i++)
    {
        this->arr1[i]=arr1[i];
    }
}
Shop::Shop(const Shop & other)
{
  this->size=other.seze;
    this->size1=other.size1;
    this->cap=other.cap;
    this->cap1=other.cap1;
    this->employee=other.employee;
    this->items=other.items;
    employee=other.employee;
    items=other.items;
    Product **arr=new Product*[size];
    for(int i=0;i<size;i++)
    {
        this->arr[i]=_rr[i];
    }
    Seller **arr1=new Seller*[size];
    for(int i=0;i<size;i++)
    {
        this->arr1[i]=arr1[i];
    }  
}
Shop & Shop::operator=(const Shop &  other)
{
    if(this!=&other)
    {
        delete [] arr;
        delete [] arr1;
        arr=new Product[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=other.arr[i];
        }
        arr[size]=other.arr[size];
         for(int i=0;i<size1;i++)
        {
            arr1[i]=other.arr1[i];
        }
        arr1[size1]=other.arr1[size1];
        cap=other.cap;
        size=other.size;
        size1=other.size1;
        cap1=other.cap1;
        employee=other.employee;
        items=other.items;
    }
    return *this;
}
Shop::~Shop()
{
    delete [] arr;
    delete [] arr1;
}
int Shop::buying(int items)
{
    int n;
    if(n>items)
    {
        cout<<"There isn't enough items";
        break;
    }
    items-n=items;
}
int Shop::addProducts(Product * obj)
{
    if(size==cap)
    {
        Product** temp=new Product*[cap+cap];
        for(int i=0;i<cap;i++)
        {
            temp[i]=arr[i];
        }
        temp[size]=obj;
        delete []arr;
        arr=temp;
        cap+=cap;
    }
        arr[size]=obj;
        size++;
    }
}
int Shop::deleteProducts(Product * obj1)
{
    
    if(size>0)
    {
        size--;
    }
}
int Shop::appoint(Seller * worker)
{
    if(size1==cap1)
    {
        Seller **temp=new Seller *[cap1+cap1];
        for(int i=0;i<cap1;i++)
        {
            temp[i]=arr1[i];
        }
        temp[size]=worker;
        delete [] arr1;
        arr1=temp;
        cap1+=cap1;
        delete [] temp;
    }
    arr1[size1]=worker;
    size1++;
}
void Shop::writeIn()
{
ofstream Shop;
 Shop.open("Shop.txt", ios::app);
 Shop<<employee<<" "<<items<<endl;
 Shop.close; 
}