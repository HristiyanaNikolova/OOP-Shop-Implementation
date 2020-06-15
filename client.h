#include<iostream>
#include "human.h"
using namespace std;
class Client:  public Human
 {
     protected:
     public:
     Client(char _ime, int _years);
     Client(const Client &);
     Client& operator=(const Client &);
     ~Client();
     void askForPrice(Product *obj, Shop store);
     void informationForProduct(Product *obj, Shop store);
     void buy(Product *obj, Shop store);
     void informationForProductS(char type[], Shop store);
 };