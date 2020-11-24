// Section CSC160 - Computer Science I: C++
// File Name:  P7_2a.cpp
// Student: Meg Veitz
// Homework Number: Lab 7
// Description: The entire array as an argument to a funciton
// Last Changed: fixed line 29 to grade[i], so it can ask for users input proporly

#include <iostream>
using namespace std;

void get_grade(int grade[]);

int main( )
{
    int grades[5];
    int i;
    
    cout << "Enter 5 grades \n";
    get_grade(grades); // can read, modify all elements
    
    for(i =0; i < 5; ++i)// Displays the array
      cout << "grade[" << i << "] =" << grades[i] << endl;
    return 0;
}

void get_grade(int grade[]){
   for(int i = 0; i < 5; ++i){
      cout << "Input a grade between 0 and 100: ";
      cin >> grade[i];// added [i] in grade to run proporly
   }
}