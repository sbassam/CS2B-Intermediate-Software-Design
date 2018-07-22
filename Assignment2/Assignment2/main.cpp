/*
-- author: Soroush Bassam
-- creation date: 7/14/18
-- modification date:
-- USE: declare and initialize MovieTicketMaster object
*/




#include <iostream>
#include "InventorySystem.h"
#include <fstream>
using namespace std;


int main() {
   //InventoryItem  *  item_list[1024] = { NULL };

   //Declare a pointer to InventorySystem object
   InventorySystem * inventorysytem_p = NULL;
   //Dynamically allocate an InventorySystem object using non - default constructor
   inventorysytem_p = new InventorySystem("RadioShaq", 101);
   //Invoke BuildInventory
   inventorysytem_p->BuildInventory("in.txt");
   //Invoke ShowInventory
   inventorysytem_p->ShowInventory();
   //Invoke ShowDefectInventory
   inventorysytem_p->ShowDefectInventory();
   //Invoke Terminate
   inventorysytem_p->Terminate();
   //De - allocate InventorySystem object
   delete inventorysytem_p;



}

