// Meg Veitz 3/09/21
// 6th Edition, Chp 11, Programming Excersice 1
// Implemintation of clockType

#include <iostream>
#include <string>
using namespace std;

// Default Constructor
clockType::clockType(){
   hr = 0;
   min = 0;
   sec = 0;
}

void clockType::setTime(int hours, int minutes, int seconds){
   hr = hours;
   min = minutes;
   sec = seconds;
}

void clockType::setTime(){
   int hours, minutes, seconds;

   // Ask user for input
   cout << "Set Time" << endl;
   cout << "First enter the hours:" << endl;
   cin >> hours;
   cout << "Then enter the minutes:" << endl;
   cin >> minutes;
   cout << "Now, enter the seconds or enter 0:" << endl;
   cin >> seconds;
   cout << "You have entered " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;

   // validating input, if not valid setting to 0.
   if(0 <= hours && hours < 24){
      hr = hours;
   }else{
      hr = 0;
   }
   if (0 <= minutes && minutes < 60){
      min = minutes;
   }else{
      min = 0;
   }
   if (0 <= seconds && seconds < 60){
      sec = seconds;
   }else{ 
      sec = 0;
      cout << "senconds over 59" << endl;
   }
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const{
   cout << "Get Time" << endl;
   //cout << hours << minutes << seconds << endl;
   hours = hr;
   minutes = min;
   seconds = sec;
}

void clockType::incrementHours(){
   hr++;
   cout << "Incrementing hours" << endl;
   if(hr > 23){
      hr = 0;
      cout << "More than 23 hours. Setting hours to 0." << endl;
   }
}

void clockType::incrementMinutes(){
   min++;
   cout << "Incrementing minutes" << endl;
   if (min > 59){
      min = 0;
      incrementHours();
      cout << "More than 59 minutes. Incrementing hours." << endl;
   }
}

void clockType::incrementSeconds(){
   sec++;
   cout << "Incrementing Seconds" << endl;
   if (sec > 59){
      sec = 0;
      incrementMinutes();
      cout << "More than 59 seconds. Incrementing minutes." << endl;
   }
}

void clockType::printTime() const{    
   if (hr < 10){
      cout << "0";
   }
   cout << hr << ":";
   if (min < 10){
      cout << "0";
   }
   cout << min << ":";
   if (sec < 10){
      cout << "0";
   }
   cout << sec << endl; 
}// printed form hh:mm:ss


bool clockType::equalTime(const clockType& otherClock) const{
   if (hr != otherClock.hr) {
      //Not the same hour, time not equal
      cout << "Hours do not match" << endl;
      return false;
   }
   if (min != otherClock.min) {
      //Not the same minute, time not equal
      cout << "Minutes do not match" << endl;
      return false;
   }
   if (sec != otherClock.sec) {
      //Not the same second, time not equal
      cout << "Seconds do not match" << endl;
      return false;
   }      
   // Time is equal
   cout << "Times Match!" << endl;
   return true;
}
