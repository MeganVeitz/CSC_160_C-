// Section CSC160 - Computer Science I: C++
// File Name:  ex23_1, P23_2
// Student: Megan Veitz
// Homework Number: Lab_2
// Description: Read and average 6 integers, print the result
// Last Changed: Changed the program to compute the average of 100 numbers.

// Diferences between this program and the one given in P23_1.cpp.
// Importantly, P23_1 is not using a loop in its logic, it is using a sequence structure.
// In this text editor we are practicing using a while loop to "count" inputs and output the average.
// 

#include <iostream>
using namespace std;

int main(void)
{
	int x;
   int count = 0; //(1) initialize a counter to 0 to count number of grades
   double sum = 0; //initialize the sum to 0 to make sure the sum at the beginning is 0
   double average;
   
   //propt the user:
   cout << "Enter 100 grades separeated by a single space, then press <Enter>:";
   while(count<100)//(2) read six grades and compute their sum, count ensures 100. entries
   {
      //read each number and compute the sum:
      cin >> x;
      sum = sum + x;
      count ++; //(3)update the count
   }
   
   cout << endl;
   
   average = sum/100; // compute the average, total divided by the number of grades
   cout << "The average is " <<average<<endl;
   

    //system("Pause");
    return 0;
}