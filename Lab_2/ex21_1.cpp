// Section CSC160 - Computer Science I: C++
// File Name:  Lab2_Veitz
// Student: Meg Veitz
// Homework Number: Lab2
// Description: Variables and assignments
// Last Changed: computed equations
// Activity 2-1, Exercise 21-1

// Question 2.1 3 -= 4 * 5; Answer is -17
// Question 2.2 40 %= 16 / 2; Answer is 0
// Question 2.3 88 /= 82 % 4; Ansswer is 44

#include <iostream>
using namespace std;

int main( )
{
   // For Acticity 2-1 Exercise 21-1
   /double num1 = 3;
   num1 -= 4*5;
	cout << num1;
   cout <<" Answer to quesiton 1 \n";
   
   int num2 = 40;
   num2 %= 16/2;
   cout << num2;
   cout <<" Answer to quesiton 2 \n";
   
   double num3 = 88;
   num3 /= 82%4;
   cout << num3;
   cout <<" Answer to quesiton 3 \n";