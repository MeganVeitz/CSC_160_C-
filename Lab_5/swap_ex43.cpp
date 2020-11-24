// Section CSC160 - Computer Science I: C++
// File Name: swap_ex43.cpp 
// Student: Meg Veitz
// Homework Number: Lab 5, exercise 4.3
// Description: 
// Last Changed: Write a C++ program that asks the user to input two integer values, then calls a void function swap to swapthe values for the first and second variable.  Please display the two variables before you call swap and afteryou call that function.

#include <iostream>
using namespace std;

void swap(double& x, double& y);


int main( )
{
   double x, y;
   cout<< "Please enter two values for x and y separated by a single space, then press <Enter>:";
   cin >> x >> y;
   cout << endl;
   
   cout << " x = " << x << "y = " << y << endl;
   swap(x,y);
   cout << " now x = " << x << " and y = " << y << endl;
   

    //system("Pause");
    return 0;
}


void swap(double& x, double& y){
   double temp;
   temp = x;
   x = y;
   y = temp;
}
