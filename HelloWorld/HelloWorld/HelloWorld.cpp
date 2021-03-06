//= ====================================================================================
// Name        : Pointers.cpp
// Author      : CS 2B
// Date          : Winter 2017
// Version     :
// Copyright   : Copyright (C). CS Department Foothill College 2015. All rights reserved.
// Program purpose: Illustration of variables and their memory addresses                                   

// Revisions history: (date/programmer/what changed)
//=====================================================================================

#include <iostream>
#include <iomanip>
using namespace std;

class Memory {

public:

   Memory();

   ~Memory();

};

Memory::Memory() { cout << "Memory ctor\n"; }

Memory::~Memory() { cout << "Memory dtor\n"; }

//What's the output of the below program?
/*
int   main() {

   Memory * p = new Memory();

}
*/
//What about this program ?
/*
int   main() {

   Memory * p = new Memory();

   delete p;

}
*/
//What about this program ?
/*
int   main() {

   Memory mem;

  // Memory * p = new Memory();

}
*/
//What about this program ?


int   main() {

   Memory mem;
   cout << "1" << endl;
   Memory * p = new Memory();
   cout << "2" << endl;

   delete p;
   cout << "3" << endl;

}



/*
int main() {

   int count = 10;
   double price = 5.99;
   MovieTicket  ticket;

   cout << "count's value: " << count << endl;
   cout << "count's memory address: " << &count << endl;

   cout << "price's value: " << fixed << setprecision(2) << price << endl;
   cout << "price's memory address: " << &price << endl;

   cout << "MovieTicket object's memory address: " << &ticket << endl;

   cout << "--------------------------------------------\n\n";



   const int  kSize = 4;
   int list[kSize] = { 10,20,30,40 };

   cout << "Print array elements' values and memory addresses:" << endl;
   cout << "--------------------------------------------\n";
   cout << "Element\t\tValue\t\tAddress\n";
   cout << "--------------------------------------------\n";


   for (int i = 0; i< kSize; ++i) {
      cout << setw(3) << "[" << i << "]\t\t" << list[i] << "\t\t" << &list[i] << endl;
   }

   int * pp = new int(10);

   cout << "this is pp:" << *pp << endl;
   delete pp;
   return 0;
}

*/

