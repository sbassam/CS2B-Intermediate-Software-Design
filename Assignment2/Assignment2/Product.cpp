/*
-- author: Soroush Bassam
-- creation date: 7/20/18
-- modification date:
-- USE: Product class defs
*/
#include <iostream>
#include <iomanip>
#include <string>
#include "Product.h"
using namespace std;

//costructors/destructor
Product::Product() : InventoryItem(), product_id_(0), price_(0.0), condition_(pcNew) {}
Product::Product(string name, int quantity, double price, T_ProductCondition condition) :
   InventoryItem(name, quantity), product_id_(get_random_id()), price_(price), condition_(condition) {}

Product::~Product() {
   cout << "Product "<< product_id_<< ", price = " << price_<< ", Condition = "<<condition_ << " destroyed ..." << endl;
}

T_ProductCondition Product::get_condition() const { return condition_; }
void Product::set_condition(T_ProductCondition condition) { condition_ = condition;  }

double Product::get_price() const { return price_; }
void Product::set_price(double price) { price_ = price; }

int Product::get_product_id() const { return product_id_; }
void Product::set_product_id(int product_id) { product_id_ = product_id; }

void Product::display() const {
   //first invoke display from base class
   InventoryItem::display();
   cout << "product ID:" << product_id_<< endl;
   cout << "product price:" << price_ << endl;
   cout << "product condition:" << condition_ << endl;
}
int Product::get_random_id() {
   return rand() % 10000;
}
