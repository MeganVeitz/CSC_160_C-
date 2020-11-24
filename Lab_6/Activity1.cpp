// Section CSC160 - Computer Science I: C++
// File Name:  Activity1
// Student: Meg Veitz
// Homework Number: Lab 6

// Description: Write a program that reads in a length in feet and inches 
// and outputs the equivalent length in meters and centimeters.
// 3 void funcitons: input, output, and 1+ for calculating
// Loop through asking for new input until user quits
// Foot = 0.3048 meters, Meter = 100 centimeters, Foot = 12 inches
// Last Changed: Double checked converstions.

#include <cmath>
#include <string>
#include <iostream>

using namespace std;

double feet; 
double inch;
double cent; // centimeters
char play; // to ask user if they want to play


void input(){
   cout << "do you want to convert your imperial measurments to Metric Measurments? " << endl;
   
   while (play != 'y' || play != 'Y'){
      cout << "Enter 'y' for yes and 'n' to quit" << endl;
      cin >> play;
      
      if (play == 'n' || play == 'N'){
         cout << "Thanks for using the measurment converter!" << endl;
         return;
      }
   }
   cout << "Type in each input followed by a space then press <Enter>" << endl;
   cout << "How many feet and inches do you want to convert to meters and centimeters: " << endl;
   cin >> feet >> inch;
}


void calculating(){
   // converting everthing to inches
   double total = (feet * 12) + inch;
   // coverting it to centimeters
   cent = 2.54 * total;
}


void output(){
   cout << "\n The number of feet you entered is " << feet << " and the number of inches your enters is " << inch << endl;
   cout << "\n The feet and inches converted to meters, centimeters is: " << cent / 100 << endl;
}


int main( ){
    do{
       input();
       if (play == 'n' || play == 'N'){
         return 0;
       }
       calculating();
       output();
    } while(play == 'y' || play == 'Y');
}
