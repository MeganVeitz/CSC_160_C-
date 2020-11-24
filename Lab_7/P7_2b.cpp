// Section CSC160 - Computer Science I: C++
// File Name:  P7_2b.cpp
// Student: Meg Veitz
// Homework Number: Lab 7
// Description: An example for partially filled arrays.
   // Saving very large integers as array of characters.
// Last Changed: ran program to input a int to make a partially filled array.

#include <iostream>
#include <cctype> // In lab 7 it says <ctype> and doesn't work
                  // so changed it to <cctype>
using namespace std;

const int MAXSIZE = 20;

int main(void)
{
    char digit_array[MAXSIZE], digit;
    int size, i;
    
    size = 0;
    cout << "Enter an integer with no more than 20 digits: ";
    do{
      cin.get(digit);
      if(isdigit(digit))
      {
         digit_array[size] = digit;
         ++size;
      }
    }while(size < 20 && isdigit(digit));
    
    cout << "The integer you entered is: ";
    for(i = 0; i < size; ++i)
      cout << digit_array[i];
    cout << endl;
    return 0;
}