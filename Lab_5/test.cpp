// Section CSC160 - Computer Science I: C++
// File Name:  Ex_4.1
// Activity 5-1, Exercise 4.1
// Student: Meg Veitz
// Homework Number: Lab 5
// Description: Use overloading to write a function that displays two real values with a specific precision
// Last Changed: 

#include <iostream>
using namespace std;



void display_it(double , int precision){
   cout << setf(fixed);
   cout << setf(showpoint);
   cout.precision(precision);
   cout << x << endl;
   
   cout << "The module is " << display_it(4.5,5.5) << endl;
   cout << "The average of 2.0,2.5, and 3.0 is " << display_it(2,3) << endl;

   
return 0;
}

double display_it(double x, double x){
   return (x%2);
}

int display_it(int precision, int precision, int precision){
   return (precision/3);
}