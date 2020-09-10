// Section CSC160 - Computer Science I: C++
// File Name:  Lesson 1
// Student: Megan Veitz
// Homework Number: 1
// Description: Introduction to C++
// Last Changed: 

// Activity 1.1 image is in a word doc attachment

// Activity 1.2
// I have read the exercise and understood the material about problem solving.
// My opertation system is JGRASP.

// Activity 1.3 below; algorithm for calculating profit from water bottles

#include <iostream>
using namespace std;

int main( )
{
	// Your programming goes here
   
   int cases_per_day=0; 
   int bottles_per_day=0;
   int bottles_per_case = 12;
   double profit_per_bottle = 0.2; // 20 cents per bottle profit
   double profit_per_day, profit_per_year;
   
   cout<<"Press enter after entering each number \n";
   cout<<"Enter number of cases\n";
   cin>>cases_per_day;
   
   profit_per_day = cases_per_day * bottles_per_case * profit_per_bottle;
   profit_per_year = 365 * profit_per_day;
   
   cout<<"The store has a made:";
   cout<<profit_per_day;
   cout<<" per day.\n";
   cout<<"That means the profit for one year will be: ";
   cout<<profit_per_year<<endl;
   
   cout<<"Good business?!\n";
   return 0;
   
   system("Pause");
   return 0;
}