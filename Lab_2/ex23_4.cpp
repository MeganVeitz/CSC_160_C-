// Section CSC160 - Computer Science I: C++
// File Name:  P23_3
// Student: Megan Veitz
// Homework Number: Lab_2
// Description: read adn average N integers, print the result
// Last Changed: change program to work with a do while loop instead of a while loop

#include <iostream>
using namespace std;

int main(void)
{
	int x;
   int count = 0; //(1)initialize a counter to 0 to count number of values
   int N; //Number of values for which the average must be computed.
   double sum = 0; // intialize the sum to 0 tomake sure the sum at the beginning is 0 double average;
   int average; 
   
   // prompt the user:
   cout << "Enter number of values, N, to be read in <Enter>:" <<endl;
   cin >> N;
   
   do
   {
      //read each number and compute the sum:
      cout<<"\n Enter a grade <Enter>:";
      cin >>x;
      sum = sum + x;
      count++; //(3) update the count
   }
   while(count < N); // (2) read n grades and compute their sum, count ensures N entries

   if(N==0)
      cout<<"You haven't entered a number, no average wil be computed, bye\n";
   else{
      average = sum/N;
      cout <<"The average of these " << N << " grades is " << average << endl;
      }
      
    //system("Pause");
    return 0;
}