#include "InventorySystem.h"
#include "Product.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//cons/destructors
InventorySystem::InventorySystem() : store_name_(NULL), store_id_(0), item_count_(0){
   //initialize all pointers in the array to NULL
   for (int i = 0; i< 512; i++) {

      item_list_[i] = NULL;

   }
   // invoke this function to initialize a seed for the random generator
   srand(time(NULL));
}
InventorySystem::InventorySystem(string store_name, int store_id) : store_name_(store_name), store_id_(store_id){
   //initialize all pointers in the array to NULL
   for (int i = 0; i< 512; i++) {

      item_list_[i] = NULL;

   }
   
   // invoke this function to initialize a seed for the random generator
   srand(time(NULL));
}
InventorySystem::~InventorySystem() {
   for (int i = 0; i< item_count_; i++) {

      delete item_list_[i];

   }

}

//accessors

int InventorySystem::get_store_id() const { return store_id_; }
string InventorySystem::get_store_name() const { return store_name_; }
int InventorySystem::get_item_count() const{ return item_count_; }

//mutators
void InventorySystem::set_store_id(int store_id) { store_id_ = store_id; };
void InventorySystem::set_store_name(string store_name) { store_name_ = store_name; }
void InventorySystem::set_item_count(int item_count) { item_count_ = item_count; }

//member functions
void InventorySystem::BuildInventory(string file_name) {
   ifstream fin(file_name);
   string buffer = NULL;
   string name = NULL;
   T_ProductCondition condition;
   int quantity = 0;
   double price = 0.0;

   InventoryItem  *  item_list[512] = { NULL };
   Product  * p = NULL;
   if (!fin) {
      cout << "ERROR: Failed to open input file\n";
      exit(-1);
   }
   while (getline(fin, buffer, ';')) {

      name = buffer;
      getline(fin, buffer, ';');
      quantity = atol(buffer.c_str());
      getline(fin, buffer, ';');
      price = atol(buffer.c_str());
      getline(fin, buffer, '\n');
      switch (*buffer.c_str()) { 
      case 'N':
         condition = pcNew;
         break;
      case 'U':
         condition = pcUsed;
         break;
      case 'R':
         condition = pcRefurbished;
         break;
      case 'D':
         condition = pcDefective;
         break;
      }

      item_list_[item_count_] = new Product(name, quantity, price, condition);
      item_count_++;
   }
   fin.close();
}

void InventorySystem::ShowInventory() const {
   for (int i = 0; i < item_count_; i++) {
      Product * p = static_cast <Product *> (item_list_[i]);
      p->display();
   }

}
   void InventorySystem::ShowDefectInventory() const {
      for (int i = 0; i < item_count_; i++) {
         Product * p = static_cast <Product *> (item_list_[i]);
         // condition: defective
         if (p->get_condition() == pcDefective) {
            p->display();
         }
      }
   }

void InventorySystem::Terminate() const {
   ofstream fout("out.txt");
   if (!fout) {
      cout << "ERROR: Failed to open output file\n";
      exit(-2);
   }

   //get each data, write it to the file
   for (int i = 0; i < item_count_; i++) {
      Product * p = static_cast <Product *> (item_list_[i]);
      fout << p->get_name() << ";"
         << p->get_quantity() << ";"
         << p->get_price() << ";"<< p->get_condition() << endl;
   }
   fout.close();
}
