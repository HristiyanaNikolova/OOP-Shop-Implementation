#include<iosteream>
using namespace std;
class Product
{
  protected:
  char * name;
  double price;
  int numProducts;
  public:
  Product(char * _name, double _price, int _numProducts);
  Product(const Product &);
  Product& operator=(const Product &);
  ~Product();
  virtual void print()=0; 
  virtual void SaveToFile()=0;
  virtual void getType()=0;
  double getPrice();
};