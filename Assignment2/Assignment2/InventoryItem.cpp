//BuildInventory: read a text file containing electronics products information and store them in an array of pointers
//ShowInventory : display all inventory items
//ShowDefectInventory : display inventory items that are defective
//Terminate : to save current inventory to a text file

#include "InventoryItem.h"

//cons/destructors
InventoryItem::InventoryItem() : name_(), quantity_(0) {}
InventoryItem::InventoryItem(string name, int quantity) : name_(name), quantity_(quantity) {}

InventoryItem::~InventoryItem() {
   cout << "InventoryItem " << name_ << " with " << quantity_ << " items destroyed ..." << endl;
}

// accessors/mutators
string InventoryItem::get_name() const { return name_; }
void InventoryItem::set_name(string name) { name_ = name; }

int InventoryItem::get_quantity() const { return quantity_; }
void InventoryItem::set_quantity(int quantity) { quantity_ = quantity; }

void InventoryItem::display() const {
   cout << "Item name: " << name_ << "Item quantity: " << quantity_ << endl;
}