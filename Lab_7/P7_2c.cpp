// Section CSC160 - Computer Science I: C++
// File Name:  P7_2c.cpp
// Student: Meg Veitz
// Homework Number: Lab 7
// Description: An example for partailly filled arrays
   //Saving very large integers as array of characters
// Last Changed: 

#include <iostream>
#include <cctype>// In lab 7 it says <ctype> and doesn't work
                // so changed it to <cctype>
using namespace std;

const int MAXSIZE = 20;
void read_array(char d_array[], int& size); //array will be modified
void write_array(const char d_array[], int size); //array will NOT be modified

int main(void){
    char digit_array[MAXSIZE];
    int size, i;
    
    size = 0;
    cout << "Enter an integer with no more than 20 digits: ";
    read_array(digit_array, size);
    write_array(digit_array, size);
    
    return 0;
}

void read_array(char d_array[], int& size){
   char digit;
   do{
      cin.get(digit);
      if(isdigit(digit)){
         d_array[size] = digit;
         ++size;
      }
   }while (size < 20 && isdigit(digit));
}

void write_array(const char d_array[],int size){
   cout << "The integers you entered are: ";
   for(int i = 0; i < size; ++i)
      cout << d_array[i];
   cout << endl;
}