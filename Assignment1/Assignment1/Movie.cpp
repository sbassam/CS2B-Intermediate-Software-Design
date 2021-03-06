/*
-- author: Soroush Bassam
-- creation date: 7/6/18
-- modification date: added Display on 7/10/18
-- USE: Movie class definitions
*/
#include "Movie.h"
using namespace std;

//constructors
Movie::Movie() : movie_name_("test"), movie_seat_(0), movie_price_(0.0) {
}
Movie::Movie(string movie_name, int movie_seat, double movie_price) :
   movie_name_(movie_name), movie_seat_(movie_seat), movie_price_(movie_price) {

}
Movie::~Movie() {

}

//accessor definitions
string Movie::get_movie_name() { return movie_name_; }
int Movie::get_movie_seat() { return movie_seat_; }
double Movie::get_movie_price() { return movie_price_; }

//mutators
void Movie::set_movie_name(string &movie_name) { movie_name_ = movie_name; }
void Movie::set_movie_seat(int movie_seat) { movie_seat_ = movie_seat; }
void Movie::set_movie_price(double movie_price) { movie_price_ = movie_price; }

//members
double Movie::PurchaseTicket(int number_of_tickets) {
   if (number_of_tickets>movie_seat_)
      return -1;
   else
      movie_seat_ -= number_of_tickets;
   return (number_of_tickets*movie_price_);
}
void Movie::Display() {
   cout << setw(30) << left << movie_name_;
   cout << setw(30) << right << movie_price_;
   cout << setw(30) << right << movie_seat_ << endl;
}