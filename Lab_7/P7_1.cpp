// Section CSC160 - Computer Science I: C++
// File Name:  P7_1.cpp
// Student: Meg Veitz
// Homework Number: Lab 7
// Description: Looking at indexing of arrays
// Last Changed: ran the program and saw it read in 8 int and printed out the reverse order.

#include <iostream>
using namespace std;

int main(void)
{
	int numlist[8];
   
   //Read 8 integers from the keyboard
   for (int i = 0; i < 8; i++){
      cout << "Enter value #" << i + 1 << ": ";
      cin >> numlist[i];
   }
   
   //Display the numbers in a reverse order
   for (int i = 8; i > 0; i--){
      cout << "Value #" << i << ": ";
      cout << numlist[i-1] << endl; //attention to the i-1
   }
    return 0;
}