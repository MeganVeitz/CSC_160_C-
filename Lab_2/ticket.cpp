// Section CSC160 - Computer Science I: C++
// File Name:  Lab2_Veitz
// Student: Meg Vietz
// Homework Number: Lab2
// Description: If Statements
// Last Changed: Changed the age amount to except people 65 years or older.

// Activity 2-2, ex22_1


#include <iostream>
using namespace std;

int main( )
{
   
  
    double age, ticket = 12;
      
    cout << "Please enter the age \n";
    cin >> age;
    if(age <= 8 || age >= 65)
       ticket = 6;
         
    cout << "Your ticket costs $ " << ticket << endl;
      
    return 0;
  
}