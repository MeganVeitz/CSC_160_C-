// Section CSC160 - Computer Science I: C++
// File Name:  P92.cpp
// Student: Meg Veitz
// Homework Number: Lab 9 
// Description: This program uses a class for a loan, initializes it from the keyboard, then displays the class
// Last Changed: 

// Page 6 has P92.cpp and now page 11 is asking to make a new file called P92.cpp..... so making another file called exP92.cpp

// Class is a data type whose variables are objects
//       has two parts:  private and public. 

#include <iostream>
#include <cmath>
using namespace std;

class Loan{ //loan class definition
   public:
      int ID; //assume an unique integer between 1111-9999
      float amount; // $amount of the loan
      float rate; // annual interest rate
      int term; //number of months, length of the loan
};

float payment(Loan l);

int main(){
   Loan loan1;
   float monthly_payment;
   
   // Initialize the loan1 object
   cout << "Enter the ID of this loan \n";
   cin >> loan1.ID;
   
   cout << "Enter the amount of this loan \n";
   cin >> loan1.amount;
   
   cout << "Enter the annual interest rate of this loan (in %) \n";
   cin >> loan1.rate;
   
   cout << "Enter the term (number of months, length of the loan) \n";
   cin >> loan1.term;
   
   monthly_payment = payment(loan1);
   
   cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment << endl;
   
   return 0;
}

float payment(Loan l){
   l.rate = l.rate/1200; //To convert % yearly rate to monthly fraction
   return l.amount * l.rate * (pow((l.rate + 1), l.term) / (pow((l.rate + 1), l.term) - 1));
}