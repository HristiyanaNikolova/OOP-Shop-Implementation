#include<iostrea>
using namespace std;
class Human
 { 
     protected:
     char * ime;
     int years;
     public:
     Human(char _ime, int _years);
     Human(const Human &);
     Human& operator=(const Human &);
     ~Human();
 };