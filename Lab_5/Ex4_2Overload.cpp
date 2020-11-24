// Section CSC160 - Computer Science I: C++
// File Name:  Ex4_2Overload.cpp
// Student: Meg Veitz
// Homework Number: Lab 5, P52.cpp, Ex42.cpp, Activity 5-2
// Description: This function illustrates how one function can return two values
// Last Changed: added a & to int j

// Which one of the values got updated upon return from the function process?
   // i, got updated to a new variable.
// What needs to happen to get both values updated upon your return to the main?
   // We need to add an & to int j to point variable to the memory address.
   

#include <iostream>
using namespace std;

//This is the declaration for the function that reads the values for i and j
void get_input(int& i, int& j);

//This is the declaration for the function that adds 10 to i and 20 to j
// Added & to int j 
void process(int& i, int j);

int main(){
   int i, j;
   get_input(i, j);
   cout << "I am about to call funciton processs,, i = " << i << " j= " << j << endl;
   process(i, j);
   cout << "I just came back from funciton Process, i = " << i << " j= " << j << endl;
   return 0;
}
   
void get_input(int& i, int& j){
   cout<< "Please enter two values for i and j separated by a single space, then press <Enter>:";
   cin >> i >> j;
   cout << endl;
   return; //a void funciton, returns nothing
}

// Added & to int j
void process(int& i, int j){
   i = i + 10;
   j = j + 20;
   cout <<"Inside function Process \n";
   cout << "I added 10 to i, and 20 to j, i =" << i << " and j= " << j << "\n";
}
