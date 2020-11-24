// Section CSC160 - Computer Science I: C++
// File Name:  P7_2.cpp
// Student: Meg Veitz
// Homework Number: Lab 7
// Description: An array element as an argument to a function
// Last Changed: 

#include <iostream>
using namespace std;

void get_grade(int& grade);
//Obtains a grade from the user and stores it in parameter, grade.

int main(void)
{
    int grades[5];
    int i;
    
    cout << "Enter 5 grades \n";
    for (i = 0; i < 5; ++i)//read, store values one-by-one
      get_grade(grades[i]);
      
    for (i = 0; i < 5; ++i)//Displays the array
      cout << "grade[" << i << "] ="<< grades[i] << endl;
    return 0;
}

void get_grade(int& grade){
   cout << "" << endl;
   cout << "Input a grade between 1 and 100: ";
   cout << grade;
}