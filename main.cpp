#include<iostream>
#include"client.h"
#include"seller.h"
#include"clother.h"
#include"cosmetic.h"
#include"food.h"
#include"technique.h"
#include"shop.h"
using namespace std;
int main()
{
    Shop A;
    Product * obj=new Clothes("Pants",23,10,4,5);
    Seller * worker=new Seller("Ivan",23);
    A.add(obj);
    A.buying;
    A.deleteProducts(obj1);
    A.appoint(worker);
    char name [10]="Maria";
    Client Maria("Maria",45);
    Client.askForPrice;
    Client.informationForProduct;
    Client.buy;
    Client.informationForProductS;
    return 0;
}
