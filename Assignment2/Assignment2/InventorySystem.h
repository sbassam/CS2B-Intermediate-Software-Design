/*
-- author: Soroush Bassam
-- creation date: 7/14/18
-- modification date: 
-- USE: InventorySystem class declarations
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class InventorySystem {
private:
   string store_name_;
   string store_id_;
   InventoryItem item_list_;
   int item_count_;

public:
   InventorySystem();
   InventorySystem(string store_name_, string store_id_);
   ~InventorySystem();

   string get_movie_name();
   int get_movie_seat();
   double get_movie_price();


   void set_movie_price(double movie_price);
   void set_movie_name(string &movie_name);
   void set_movie_seat(int movie_seat);



   double PurchaseTicket(int count_of_tickets);
   void Display();
};