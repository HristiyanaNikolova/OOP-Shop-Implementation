#include<iostream>
#include"human.h"
using namespace std;
Human::Human(char _ime, int _years)
 {
     this->ime=new char[strlen(_ime)+1];
     strcpy(ime,_ime);
     this->years=_years;
 }
 Human::Human(const Human & other)
 {
     this->ime=new char [strlen(other.ime)+1];
     strcpy(ime,other.ime);
     this->years=other.years;
 }
 Human& Human:: operator=(const Human & other)
 {
     if(this!=&other)
     {
         delete [] ime;
         ime=new char[strlen(other.ime)+1];
         strcpy(ime,other.ime);
         this->years=other.years
     }
     return *this;
 }
 Human::~Human()
 {
     delete []ime;
 }

