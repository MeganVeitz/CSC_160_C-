// Section CSC160 - Computer Science I: C++
// File Name:  ex93.cpp
// Student: Meg Veitz
// Homework Number: Lab 9 
// Description: Modify the class loan and include the monthly_payment as a data member in that class
//              Also, add a new funciton called add_loans, defined as: float add_loans(Loan loan1, Loan loan2); Keep the payment function 
//              Since you include the monthly_payment as a member, instead of returning a value from the funciton, you directly set the value for monthly_payment in that function
//              The new funciton, add_loans, takes two loan objects and computes the total monthly payment, i.e., the sum of monthly payment of the two loans.
// Last Changed: modified everything correctly and got it running. 

#include <iostream>
#include <cmath>
using namespace std;


class Loan{ // Loan is called structure tag
   public:
      void set();
      void payment();
      void display(); //will display all private memebers
      float monthly_payment;
      float add_loans(Loan loan1, Loan loan2);
   private:
      int ID; //assume an unique integer between 1111-9999
      float amount; // $ amount of the load
      float rate; //annual interest rate
      int term; //number of months, length of the loan
};

//float payment();

int main(){
   float monthly_payment = 0;

   Loan loan1,loan2;
   
   loan1.set();
   loan1.display(); //will display the data members of loan1
   
   loan2.set();
   loan2.display(); //will display the data members of loan1
   
   loan1.payment(); //will return the monthly payment of loan1
   cout << "Payment for loan 1 is: " << loan1.monthly_payment << endl;
   
   loan2.payment(); //will return the monthly payment of loan1
   cout << "Payment for loan 2 is: " << loan2.monthly_payment << endl;
   
   monthly_payment = loan1.add_loans(loan1, loan2);
   cout << "The sum of the two loans is: " << monthly_payment << endl;

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