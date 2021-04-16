// Meg Veitz 3/09/21
// 6th Edition, Chp 11, Programming Excersice 1
// Implementation for ext clock file

#include <iostream>
#include <string>

using namespace std;

// Default Constructor
extClockType::extClockType(){
    zn = 0; 
}

void extClockType::setTimeZone(){
   int zone;
   // User input for Time Zone
   cout << "What is your time zone: "<< endl;
   cin >> zone;
   cout << "You Entered zone: " << zone << endl;
   //  Validating input
   if(0 <= zone && zone < 12 || zone > -12)
      zn = zone;
   else
      zn = 0;
}

void extClockType::printTimeZone() const{
   cout << "The time zone is: " << zn << endl;
}

