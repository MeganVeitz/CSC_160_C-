// Section CSC160 - Computer Science I: C++
// File Name:  ex94.cpp
// Student: Meg Veitz
// Homework Number: Lab 9 
// Description: Modify the previous program to include constructors that help perform the same computation as requested in EX 93
// Last Changed: input constructors. 

// Contructor sets the input for later use
//            MUST have the same name as the class
//            doesn't have a type, CAN"T return a value

#include <iostream>
#include <cmath>
using namespace std;

// Class goes in the header file
class Loan{ // Loan is called structure tag
   public:
      Loan();
      Loan(int I, float am, float rt, int trm);
      void payment();
      void display(); //will display all private memebers
      float monthly_payment;
      float add_loans(Loan loan1, Loan loan2);
   private:
      void set();
      int ID; //assume an unique integer between 1111-9999
      float amount; // $ amount of the load
      float rate; //annual interest rate
      int term; //number of months, length of the loan
};

//Main file aka driver file
int main(){
   float monthly_payment = 0;

   Loan loan1;
   Loan loan2(5, 5000, .5, 48);
   
   loan1.display(); //will display the data members of loan1
   
   loan2.display(); //will display the data members of loan2
   
   loan1.payment(); //will return the monthly payment of loan1
   cout << "Payment for loan 1 is: " << loan1.monthly_payment << endl;
   
   loan2.payment(); //will return the monthly payment of loan2
   cout << "Payment for loan 2 is: " << loan2.monthly_payment << endl;
   
   monthly_payment = loan1.add_loans(loan1, loan2);
   cout << "The sum of the two loans is: " << monthly_payment << endl;

   return 0;
}

//Class file
Loan::Loan(){
   set();
}

Loan::Loan(int I, float am, float rt, int trm){
   ID = I;
   amount = am;
   rate = rt;
   term = trm;
}

void Loan::set(){
   //Initialize the loan1 object
   cout << "Enter the ID of this loan \n";
   cin >> ID;
   
   cout << "Enter the amount of this loan \n";
   cin >> amount;
   
   cout << "Enter the annual interest rate of this loan (in %) \n";
   cin >> rate;
   
   cout << "Enter the term (number of months, length of the loan)\n";
   cin >> term;
}

void Loan::payment(){
   rate = rate/1200; //To convert % yearly rate to monthly fraction
   monthly_payment = amount * rate * (pow((rate + 1), term) / (pow((rate + 1), term) - 1));
}

void Loan::display(){
   cout << "The loan ID is: " << ID << endl;
   cout << "The amount of the loan is: " << amount << endl;
   cout << "The annual interest rate of the loan is: " << rate << endl;
   cout << "The term of the loan is: " << term << "\n" << endl;
}

float Loan::add_loans(Loan loan1, Loan loan2){
   monthly_payment = loan1.monthly_payment + loan2.monthly_payment;
   return monthly_payment;
}