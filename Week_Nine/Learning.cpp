#include <string>
#include <iostream>

using namespace std;

class Item
{
public:
   Item();
   Item(double price);
   Item(string d_description);
 
   void set_price(double price);
   void display_data() const;
 
private:
   string description;
   double item_price;
};
Item::Item()
{
   item_price = 0;
}
Item::Item(double price)
{
   item_price = price;
}
Item::Item(string d_description)
{
   description = d_description;
}
void Item::set_price(double price)
{
   item_price = price;
}
void Item::display_data() const
{
   cout << "Description = " << description << ", Price = " 
      << item_price;
}
int main()
{
   Item it1;
   it1.set_price(5);
   it1.display_data();
   return 0;
}
