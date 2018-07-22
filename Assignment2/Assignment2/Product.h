/*
-- author: Soroush Bassam
-- creation date: 7/14/18
-- modification date:
-- USE: Product class declarations
*/
#include <iostream>
#include <iomanip>
#include <string>
#include "InventoryItem.h"
using namespace std;
typedef enum { pcNew, pcUsed, pcRefurbished, pcDefective } T_ProductCondition;
class Product : public InventoryItem {
private:
   int product_id_;
   double price_;
   T_ProductCondition condition_;

public:
   Product();
   Product(string name, int quantity, double price, T_ProductCondition condition);
   virtual ~Product();

   int get_product_id() const;
   void set_product_id(int product_id);
   double get_price() const;
   void set_price(double price);
   T_ProductCondition get_condition() const;
   void set_condition(T_ProductCondition condition);

   void display() const;
   int get_random_id();

};
