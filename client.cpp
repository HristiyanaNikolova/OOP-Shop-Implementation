#include<iostream>
#include "human.h"
#include "client.h"
using namespace std;
Client::Client(char _ime, int _years):Human(_name,_years)
 {

 }
 Client::Client(const Client & other):Human(other)
 {

 }
 Client& Client:: operator=(const Client & other)
 { 
     if(this!=&other)
     {
         Human:operator=(other);
     }
     return *this;
 }
 Client::~Client
 {

 }
 void Client::askForPrice(Product * obj, Shop store)
 {
     store.askForPrice(obj);
 }
 void Client::informationForProduct(Produc * obj, Shop store)
 {
     store.informationForProduct(obj);
 }
void Client::buy(Product * obj,Shop store)
{
    store.buy(obj);
}
void Client::informationForProductS(char type[], Shop store)
{
    store.informationForProductS(type);
}