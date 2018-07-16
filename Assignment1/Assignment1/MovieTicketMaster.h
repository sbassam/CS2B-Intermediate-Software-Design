/*
-- author: Soroush Bassam
-- creation date: 7/06/18
-- modification date:
-- USE: MovieTicketMaster class declarations
*/
#include <string>
#include "Movie.h"
using namespace std;
extern const int g_array_size;

class MovieTicketMaster {
private:
   string theater_location_;
   string theater_name_;
   Movie **Movie_list_;
public:
   MovieTicketMaster();
   MovieTicketMaster(string theater_name, string theater_location);
   ~MovieTicketMaster();

   void Init(string *movie_names, int *movie_seats, double *movie_prices);
   void Run();
   void DisplayBanner();
   void DisplayMenu();
   void ViewMovies();
   void SearchMovie();
   void PurchaseTicket();
   Movie *FindMovie(string &movie_name);
};