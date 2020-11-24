// Section CSC160 - Computer Science I: C++
// File Name:  P7_1b.cpp
// Student: Meg Veitz
// Homework Number: Lab 7
// Description: program uses a flexible size array of integers.
// Last Changed: ran program to see how a constant can be replaced are your index size.
      // Then saw how it printed out the reverse order of the array.

#include <iostream>
using namespace std;
const int SIZE = 8; //Max size for the array

int main( )
{
   int numlist[SIZE];
   
   //Read SIZE integers from the keyboard
   for (int i = 0; i < SIZE; i++){
      cout << "Enter value # " << i + 1 << ": ";
      cin >> numlist[i];
   }
   //Display the numbers in a reverse order
   for (int i = SIZE; i > 0; i--){
      cout << "Value # " << i << ": ";
      cout << numlist [i-1] << endl; //attention to i-1
   }
    return 0;
}