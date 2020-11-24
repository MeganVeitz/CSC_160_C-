// Section CSC160 - Computer Science I: C++
// File Name:  ex91.cpp
// Student: Meg Veitz
// Homework Number: Lab 9 
// Description: Modify P91a.cpp to ask users to enter 2 different loans and use a function called initialize_loan to initialize each loan struct.
//              Program should also compute and display the payment for each individual loan and the total monthly payment.
//              Use separate struct for each loan.
// Last Changed: Ran initialize_loan funciton with two different loans. 
//               Was cool to see that the same paramater doesn't have to change when running multiple loans through the initialize_loan function.

// Tips: The & is the address of operator and the * is the dereference operator
//       & = address of 
//       * =  value pointed to by 
//       so, &p is the address or p 
//       and, *p wouldbe the value pointed to by p



#include <iostream>
#include <cmath>
using namespace std;

struct Loan{ //Loan is called structure tag
   //Memeber Types
   int ID; //assume an unique integer between l1l1-9999
   float amount; //$ amount of thelaon
   float rate; //annual interest rate
   int term; //number of months, length of the loan
};

void initialize_loan(Loan s);
float payment(Loan l);
float monthly_payment;

int main(){
   Loan loan1, loan2;
    
   initialize_loan(loan1);
   initialize_loan(loan2);
   return 0;
}

float payment(Loan l){
   l.rate = l.rate/1200; //To convert % yearly rate to monthly fraction
   return l.amount*l.rate*(pow((l.rate+1), l.term)/(pow((l.rate+1), l.term) -1));
}
//set-function
void initialize_loan(Loan s){
   //Initialize the loanl structure
   cout << " Enter the ID of this loan \n";
   cin >> s.ID;
   
   cout << "Enter the amount of this loan \n";
   cin >> s.amount;
   
   cout << "Enter the annual interst rate of this loan (in %) \n";
   cin >> s.rate;
   
   cout << "Enter the term (number of months, length of the loan) \n";
   cin >> s.term;
   
   monthly_payment = payment(s);
   
   cout << "The monthly payment for loan " << s.ID << " is: " << monthly_payment << endl; 
}
