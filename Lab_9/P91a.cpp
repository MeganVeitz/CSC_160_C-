// Section CSCl60 - Computer Science I: C++
// File Name:  P9la.cpp
// Student: Meg Veitz
// Homework Number: Lab 9 
// Description: This program creates uses a structure for loan, initialize it from the keyboard, then displays the struct
// Last Changed: Fixed the code to run. Ran into a problem with the letter l and number 1 looking similar.

#include <iostream>
#include <cmath>
using namespace std;

struct Loan{ //Loan is called structure tag
   int ID; //assume an unique integer between l1l1-9999
   float amount; //$ amount of thelaon
   float rate; //annual interest rate
   int term; //number of months, length of the loan
};

float payment(Loan l);

int main(){
   Loan loan1;
   float monthly_payment;
   
   //Initialize the loanl structure
   cout << " Enter the ID of this loan \n";
   cin >> loan1.ID;
   
   cout << "Enter the amount of this loan \n";
   cin >> loan1.amount;
   
   cout << "Enter the annual interst rate of this loan (in %) \n";
   cin >> loan1.rate;
   
   cout << "Enter the term (number of months, length of the loan) \n";
   cin >> loan1.term;
   
   monthly_payment = payment(loan1);
   
   cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment << endl;
   
   return 0;
}

float payment(Loan l){
   l.rate = l.rate/1200; //To convert % yearly rate to monthly fraction
   return l.amount*l.rate*(pow((l.rate+1), l.term)/(pow((l.rate+1), l.term) -1));
}