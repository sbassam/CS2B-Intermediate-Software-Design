/*
-- author: Soroush Bassam
-- creation date: 7/14/18
-- modification date:
-- USE: InventoryItem class declarations
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class InventoryItem {
protected:
   string name_;
   int quantity_;

public:

   InventoryItem();
   InventoryItem(string name, int quantity);
   //below destructor is virtual, Product will have a different message.
   virtual ~InventoryItem();


   string get_name() const;
   void set_name(string name);
   int get_quantity() const;
   void set_quantity(int quantity);

   void display() const;
};
#pragma once
