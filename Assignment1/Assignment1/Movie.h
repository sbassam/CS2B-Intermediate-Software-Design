/*
-- author: Soroush Bassam
-- creation date: 7/07/18
-- modification date: 7/10/18 added to accessors and mutators
-- USE: Movie class declarations
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Movie {
private:
   string movie_name_;
   int movie_seat_;
   double movie_price_;

public:
   Movie();
   Movie(string movie_name, int movie_seat, double movie_price);
   ~Movie();

   string get_movie_name();
   int get_movie_seat();
   double get_movie_price();


   void set_movie_price(double movie_price);
   void set_movie_name(string &movie_name);
   void set_movie_seat(int movie_seat);
   


   double PurchaseTicket(int count_of_tickets);
   void Display();
};