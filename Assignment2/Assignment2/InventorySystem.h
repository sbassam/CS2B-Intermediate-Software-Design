/*
-- author: Soroush Bassam
-- creation date: 7/14/18
-- modification date: 
-- USE: InventorySystem class declarations
*/
#include <iostream>
#include <iomanip>
#include <string>
#include "InventoryItem.h"
using namespace std;

class InventorySystem {
private:
   string store_name_;
   int store_id_;
   InventoryItem * item_list_[512];
   int item_count_;

public:
   InventorySystem();
   InventorySystem(string store_name_, int store_id_);
   ~InventorySystem();
   //accessors/mutators
   string get_store_name() const;
   void set_store_name(string store_name);
   int get_store_id() const;
   void set_store_id(int store_id);
   int get_item_count() const;
   void set_item_count(int item_count);


   void BuildInventory(string file_name);
   void ShowInventory() const;
   void ShowDefectInventory() const;
   void Terminate() const;
};



