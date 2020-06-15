#include "product.h"
#include "food.h"
#include <iostream>
#include<fstream>
using namespace std;
Food::Food(char *_name, double _price, int _numProducts,double _calories, double _gram, char* _content):Product(_name,_price,_numProduct)
 {
     this->calories=_calorie;
     this->gram=_gram;
     this->content-new char[strlen(_content)+1];
     strcpy(content,_content);
 }
 Food::Food(const Food & other):Product(other)
 {
     this->calories=other.calories;
     this->gram=other.gram;
     this->content=new char[strlen(other.content)+1];
     strcpy(concept,other.content);
 }
 Food& Food::operator=(const Food & other)
 {
     if(this!=&other)
     {
         Product::operator=(other);
         delete [] content;
         this->content=new char[strlen(other.content)+1];
         strcpy(content,other.content);
         this->calories=other.calories;
         this->gram=other.gram;
     }
     return *this;
 }
 Food::~Food()
 {
     delete[] content;
 }
 void Food::print()
 {
     cout<<name<<" "<<price<<" "<<numProducts<<" "<<calories<<" "<<gram<<" "<<content<<endl;
 }
 void Food::getType()
 {
     return *type;
 }
 void Food::SaveToFile()
 {
     ofstream Food;
     Food.open("Food.txt", ios::app);
         Food<<name<<" "<<price<<" "<<numProducts<<" "<<calories<<" "<<gram<<" "<<const<<endl;
         Food.close

 }
