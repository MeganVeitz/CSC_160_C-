// Section CSC160 - Computer Science I: C++
// File Name:  ex43.cpp
// Student: Meg Veitz
// Homework Number: Lab 5
// Description: The following function will use a, b, and c as the coefficients of a quadratic equation to compute b2 - 4ac.
// This function calls on another function called get_a_b_c to get the values for a, b, and c.
// Last Changed: 

#include <iostream>
using namespace std;

double bb_4ac();
void get_a_b_c(double& a, double& b, double& c);


int main( ){
	
   int value;
   value = bb_4ac();
   cout << "The value is: " << value;
}

void get_a_b_c(double& a, double& b, double& c){
   cout<< "Please enter three values for a, b, and c separated by a single space, then press <Enter>:";
   cin >> a >> b >> c;
   cout << endl;

}

double bb_4ac(){
   double a, b, c; // Coeffieients of a quadratic equation
   get_a_b_c(a, b, c);
   return ((b*b) - (4*a*c));
}








