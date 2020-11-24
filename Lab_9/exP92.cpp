// Section CSC160 - Computer Science I: C++
// File Name:  exP92.cpp
// Student: Meg Veitz
// Homework Number: Lab 9 
// Description: Complete program by definning the number functions display, payment for class loan
//              Note that the display function will display all the information about a loan
//              You will display the monthly payment in the main by assigning the returned value from the payment function to a variable of type float.
// Last Changed: 

#include <iostream>
#include <cmath>
using namespace std;


class Loan{ // Loan is called structure tag
   public:
      void set();
      float payment();
      void display(); //will display all private memebers
   private:
      int ID; //assume an unique integer between 1111-9999
      float amount; // $ amount of the load
      float rate; //annual interest rate
      int term; //number of months, length of the loan
};

//float payment();

int main(){
   float p;
   Loan loan1;
   
   loan1.set();
   loan1.display(); //will display the data members of loan1
   
   p = loan1.payment(); //will return the monthly payment of loan1
   cout << "Payment for loan is: " << p << endl;

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

float Loan::payment(){
   rate = rate/1200; //To convert % yearly rate to monthly fraction
   return amount * rate * (pow((rate + 1), term) / (pow((rate + 1), term) - 1));
}

void Loan::display(){
   cout << "The loan ID is: " << ID << endl;
   cout << "The amount of the loan is: " << amount << endl;
   cout << "The annual interest rate of the loan is: " << rate << endl;
   cout << "The term of the loan is: " << term << "\n" << endl;
}