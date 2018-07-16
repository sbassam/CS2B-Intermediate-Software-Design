/*
-- author: Soroush Bassam
-- creation date: 7/10/18
-- modification date:
-- USE: MovieTicketMaster class definitions
*/
#include "MovieTicketMaster.h"
using namespace std;

MovieTicketMaster::MovieTicketMaster() {

}
MovieTicketMaster::MovieTicketMaster(string theater_name, string theater_location) :
   theater_name_(theater_name), theater_location_(theater_location) {
   Movie_list_ = new Movie*[g_array_size];

   for (int i = 0; i<g_array_size; i++) {
      Movie_list_[i] = NULL;
   }
}

MovieTicketMaster::~MovieTicketMaster() {
   for (int i = 0; i<g_array_size; i++) {
      delete Movie_list_[i];
   }
}

void MovieTicketMaster::Init(string *movie_names, int *movie_seats, double *movie_prices) { 
   string *p_movie_name = movie_names;
   int *p_movie_seat = movie_seats;
   double *p_movie_price = movie_prices;

   for (int i = 0; i<g_array_size; i++) {
      Movie_list_[i] = new Movie(*p_movie_name++, *p_movie_seat++, *p_movie_price++);
   }

   //selection sort algorithm
   string A, Z;
   Movie *swap;
   for (int i = 0; i<g_array_size; i++) {
      for (int j = i + 1; j<g_array_size; j++) {
         A = Movie_list_[i]->get_movie_name();
         Z = Movie_list_[j]->get_movie_name();
         if (A > Z) {
            swap = Movie_list_[i];
            Movie_list_[i] = Movie_list_[j];
            Movie_list_[j] = swap;
         }
      }
   }
}

void MovieTicketMaster::Run() {
   bool is_running = true;
   int user_input;
   DisplayBanner();
   do {
      DisplayMenu();
      cin >> user_input;
      switch (user_input) {
      case 1:
         ViewMovies();
         break;
      case 2:
         SearchMovie();
         break;
      case 3:
         PurchaseTicket();
         break;
      case 4:
         cout << "Bye!"<< endl;
         is_running = false;
         break;
      default:
         cout << "Try Again!" <<endl;
      }
   } while (is_running);

}

void MovieTicketMaster::DisplayBanner() {
   cout << "-----------------MOVIETICKETMASTER----------------" << endl;
   cout << "--------------------------------------------------" << endl;
   cout << "--------------------------------------------------" << endl;
   cout << "---------------AMC COURTHOUSE PLAZA 8-------------" << endl;
   cout << "---------VISIT US: WWW.AMCTHEATRES.COM------------" << endl;
   cout << "--------------------------------------------------" << endl;
   cout << "--------------------------------------------------" << endl;
}

void MovieTicketMaster::DisplayMenu() {
   cout << "--------------------------------------------------" << endl;
   cout << "> Press 1 to: View all movies---------------------" << endl;
   cout << "> Press 2 to: Search a movie----------------------" << endl;
   cout << "> Press 3 to: Purchase a ticket-------------------" << endl;
   cout << "> Press 4 to:  Quit!------------------------------" << endl;
   cout << "--------------------------------------------------" << endl;
}

void MovieTicketMaster::ViewMovies() {
   cout << setw(30) << left << "Title" << setw(30) << right << "Price" << setw(30) << right << "Available seats" << endl;
   for (int i = 0; i<g_array_size; i++) {
      Movie_list_[i]->Display();
   };
}

void MovieTicketMaster::SearchMovie() {
   string search_movie;
   cout << "Search for a movie:" << endl;
   cin.ignore();
   getline(cin, search_movie);
   Movie *p = FindMovie(search_movie);
   if (p != NULL)
      p->Display();
   else
      cout << "Not currently available" << endl;

}

Movie *MovieTicketMaster::FindMovie(string &movie_name) {
   for (int i = 0; i<g_array_size; i++) {
      if (Movie_list_[i]->get_movie_name() == movie_name) {
         return Movie_list_[i];
      }
   };
   return NULL;
}

void MovieTicketMaster::PurchaseTicket() {
   string purchase_movie; int number_of_tickets;
   cout << "Enter in a movie title to purchase: \n";
   cin.ignore();
   getline(cin, purchase_movie);
   cout << "Number of tickets to purchase: \n";
   cin >> number_of_tickets;
   Movie *p = FindMovie(purchase_movie);
   if (p != NULL) {
      double cost = p->Movie::PurchaseTicket(number_of_tickets);
      if (cost == -1)
         cout << "SOLD OUT!";
      else
         cout << "NET PRICE: " << cost << endl;
   }
   else
      cout << "NA";
}