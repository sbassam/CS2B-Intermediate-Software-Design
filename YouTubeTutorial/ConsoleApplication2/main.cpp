// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Animal {
   private://can only be changed by functions inside the class
      int height;
      int weight;
      string name;
   public:
      int getWeight() { return weight };
      int setWeight


};
int main()
{


   int myAge = 27;
   int * myAge_p = &myAge;
   int badNums[5] = { 4, 13, 14, 24, 34 };
   int * badNums_p = badNums;

   cout << myAge << endl;
   cout << myAge_p << endl;
   cout << *myAge_p << endl;

   cout << "location" << badNums_p << "Value" << *badNums_p << endl;
   badNums_p++;
   cout << "location" << badNums_p << "Value" << *badNums_p << endl;
   badNums_p++;
   cout << "location" << badNums_p << "Value" << *badNums_p << endl;

   // An array name is just a pointer to the array
   

   return 0;
}

