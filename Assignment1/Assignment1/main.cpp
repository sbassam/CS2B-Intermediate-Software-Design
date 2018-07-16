/*
-- author: Soroush Bassam
-- creation date: 7/10/18
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
   int movie_seats[g_array_size] = {59, 60, 33, 49, 15, 90, 50, 9};
   double movie_prices[g_array_size] = {14, 14, 18, 18, 14, 14, 14, 14};

   MovieTicketMaster *cinema = new MovieTicketMaster("AMC", "Arlington");
   cinema->Init(movie_names, movie_seats, movie_prices);
   cinema->Run();
   delete cinema;
   cout << "end";
}

/*
-----------------MOVIETICKETMASTER----------------
--------------------------------------------------
--------------------------------------------------
---------------AMC COURTHOUSE PLAZA 8-------------
---------VISIT US: WWW.AMCTHEATRES.COM------------
--------------------------------------------------
--------------------------------------------------
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
1
Title                                                  Price               Available seats
2001 a space odyssey                                      14                            15
God Father I                                              14                            59
Good Will Hunting                                         14                            90
Hotel Budapest                                            14                            50
Interstellar                                              18                            33
La La Land                                                14                            60
Revenant                                                  18                            49
Whiplash                                                  14                             9
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
2
Search for a movie:
2001 a space odyssey
2001 a space odyssey                                      14                            15
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
2
Search for a movie:
Hotel Budapest
Hotel Budapest                                            14                            50
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
2
Search for a movie:
Whiplash
Whiplash                                                  14                             9
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
2
Search for a movie:
2002 a space odyssey
Not currently available
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
3
Enter in a movie title to purchase:
Interstellar
Number of tickets to purchase:
2
NET PRICE: 36
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
1
Title                                                  Price               Available seats
2001 a space odyssey                                      14                            15
God Father I                                              14                            59
Good Will Hunting                                         14                            90
Hotel Budapest                                            14                            50
Interstellar                                              18                            31
La La Land                                                14                            60
Revenant                                                  18                            49
Whiplash                                                  14                             9
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
2
Search for a movie:
Whiplash
Whiplash                                                  14                             9
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
3
Enter in a movie title to purchase:
Whiplash
Number of tickets to purchase:
10
SOLD OUT!--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
3
Enter in a movie title to purchase:
Veeplash
Number of tickets to purchase:
2
NA--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
3
Enter in a movie title to purchase:
Whiplash
Number of tickets to purchase:
9
NET PRICE: 126
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
2
Search for a movie:
Whiplash
Whiplash                                                  14                             0
--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
3
Enter in a movie title to purchase:
Whiplash
Number of tickets to purchase:
1
SOLD OUT!--------------------------------------------------
> Press 1 to: View all movies---------------------
> Press 2 to: Search a movie----------------------
> Press 3 to: Purchase a ticket-------------------
> Press 4 to:  Quit!------------------------------
--------------------------------------------------
4
Bye!
endPress any key to continue . . .
*/