// Section CSC160 - Computer Science I: C++
// File Name:  P7_1a.cpp
// Student: Meg Veitz
// Homework Number: Lab 7 
// Description: Displaying out of bounds index
// Last Changed: ran program to see what the out of range index would print.

#include <iostream>
using namespace std;

int main(void)
{
	int numlist[8], i;
   
   cout << "\t i \t numlist[i]\n";
   cout << "\t =====\t========\n";
   
   for (i =0; i <= 8; i++){
      numlist[i] = i * 2;
      cout << "\t " << i << "\t" << numlist[i] << endl;
   }
    return 0;
}