// Section CSC160 - Computer Science I: C++
// File Name:  P92a.cpp
// Student: Meg Veitz
// Homework Number: Lab 9 
// Description: This program is a driver written to demonstrate how the set function works.
// Last Changed: 

#include <iostream>
using namespace std;

class Loan{ // Loan is called structure tag
   public:
      void set();
      float payment();
      void display();
   private:
      int ID; //assume an unique integer between 1111-9999
      float amount; // $ amount of the load
      float rate; //annual interest rate
      int term; //number of months, length of the loan
};

int main(){
   Loan loan1;
   loan1.set();
   return 0;
}

void Loan::set(){
   //Initialize the loan1 object
   cout << "Enter the ID of this loan \n";
   cin >> ID;
   
   cout << "Enter the amount of this loan \n";
   cin >> amount;
   
   cout << "Enter the annual interest rate of this loan (in %) \n";
   cin >> rate;
   
   cout << "Enter the term (bnumber of months, length of the laon)\n";
   cin >> term;
}