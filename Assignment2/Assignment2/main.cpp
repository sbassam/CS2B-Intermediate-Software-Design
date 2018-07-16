/*
-- author: Soroush Bassam
-- creation date: 7/14/18
-- modification date:
-- USE: declare and initialize MovieTicketMaster object
*/

#include <iostream>
#include "MovieTicketMaster.h"
using namespace std;

const int g_array_size = 8;
int main() {
   string movie_names[g_array_size] = {
      "God Father I",
      "La La Land",
      "Interstellar",
      "Revenant",
      "2001 a space odyssey",
      "Good Will Hunting",
      "Hotel Budapest",
      "Whiplash" };
   int movie_seats[g_array_size] = { 59, 60, 33, 49, 15, 90, 50, 9 };
   double movie_prices[g_array_size] = { 14, 14, 18, 18, 14, 14, 14, 14 };

   MovieTicketMaster *cinema = new MovieTicketMaster("AMC", "Arlington");
   cinema->Init(movie_names, movie_seats, movie_prices);
   cinema->Run();
   delete cinema;
   cout << "end";
}

