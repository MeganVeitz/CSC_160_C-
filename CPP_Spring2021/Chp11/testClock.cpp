// Meg Veitz 3/09/21
// 6th Edition, Chp 11, Programming Excersice 1
// 

//Test program
#include <iostream>
#include <cstring>
#include "extClockType.h"
#include "extClockType.cpp"

using namespace std;

int main(){
   extClockType myClock;//obj of the class
   extClockType otherClock;
   
   cout << "User inputted time:" << endl;

   myClock.setTime();
   myClock.setTimeZone();
   myClock.printTime();
   myClock.printTimeZone();

   cout << "\nManually coded in setTime1:" << endl;
   
   myClock.setTime(0, 6, 34);
//   myClock.printTimeZone();
   myClock.printTime();
   myClock.printTimeZone();
   
   cout << "\nRecieved variables time:" << endl;
   int hours_1, minutes_1, seconds_1;// allocated memory for getTime
   
   myClock.getTime(hours_1, minutes_1, seconds_1);
   cout << "Hours: " << hours_1 << endl;
   cout << "Minutes: " << minutes_1 << endl;
   cout << "Seconds: " << seconds_1 << endl;
   
   cout << "\nCompare times:" << endl;
   myClock.equalTime(otherClock);
   
    cout << "\nManually coded in setTime2:" << endl;
   
    myClock.setTime(0, 0, 0);
    myClock.printTimeZone();
    myClock.printTime();
    myClock.printTimeZone();
    
    cout << "\nCompare times:" << endl;
    myClock.equalTime(otherClock);
}