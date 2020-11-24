// Section CSC160 - Computer Science I: C++
// File Name:  Ex_4.1, overload.cpp
// File Name: overload.cpp
// Student: Meg Veitz
// Homework Number: Lab 5, Activity 5-1, Exercise 4.1
// Description: Use overloading to write a function that displays two real values with a specific precision
// Last Changed: Finally grasps how this funciton runs by inputing display_it(4.5525, 1) into main()

#include <iostream>
using namespace std;


void display_it(double x, int precision){
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint); 
   cout.precision(precision); 
   cout << x << endl;
}

//defining the function
double display_it(double x, double y){
   return (x*y);
}

int display_it(int i, int j){
   return (i%j);
}
   
int main () {
// down below will not work due to the function being a void function and hence it wont return anything to print
   // cout << "The print is " << display_it(4.5525, 2) << endl;
   // prints on line 17 because the function it self prints it.
   
   // comes from void function
   display_it(4.5525, 1);
   display_it(6.958, 2);
   
   // comes from the double display_it()
   cout << "The multiple is " << display_it(4.5,5.5) << endl;
   
   // comes from the int display_it()
   cout << "The modulous is " << display_it(2,3) << endl;
   
   return 0;
}

