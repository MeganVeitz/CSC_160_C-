// Section CSC160 - Computer Science I: C++
// File Name:  P9_1.cpp
// Student: Meg Veitz
// Homework Number: Lab 9 
// Description: This program creates uses a structure for loan, initialize it from the keyboard, then desplays the struct
// Last Changed: figured out there is a difference between the letter "l" and the number "1" in this code 
//               as well as that those two looked so similar I thought it was all the number 1
// Struct can hold variables of diffreent types, but cannot hold any funciton. 

#include <iostream>
#include <cmath>
using namespace std;

struct Loan{ //Loan is called structure tag
   int ID; //assume an unique integer between 1111-9999
   float amount; //$ amount of the loan
   float rate; // annual interest rate
   int term; //umber of months, length of the loan
};

float payment(float amount, float rate, int term);

int main(){
   Loan loan1;
   float monthly_payment;
   
   //Initialize the loan1 structure
   cout << "Enter the ID of this loan \n";
   cin >> loan1.ID;
   
   cout << "Enter the amount of this loan \n";
   cin >> loan1.amount;
   
   cout << "Enter the annual interest rate of this loan (in %) \n";
   cin >> loan1.rate;
   
   cout << "Enter the term (number of months, length of the loan) \n";
   cin >> loan1.term;
   
   monthly_payment = payment(loan1.amount, loan1.rate, loan1.term);
   
   cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment << endl;
   
   return 0;
}

float payment(float amount, float rate, int term){
   rate = rate/1200; //To convert % yearly rate to monthly fractions
   return amount*rate*(pow((rate+1), term)/(pow((rate+1), term)-1));
}