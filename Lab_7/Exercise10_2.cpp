// Section CSC160 - Computer Science I: C++
// File Name:  Exercise10_2.cpp
// Student: Meg Veitz
// Homework Number: Lab 7
// Description: Write a program that asks user to input up to 20 integers
   //Then finds the max, min, average, and median of the numbers that where entered.
// Last Changed: 

#include <iostream>
using namespace std;
const int SIZE = 20;

// Finding min
// Assigning 1st element to temp and compairing all indexs to that temp variable
int smallest(int min[]){
   int temp = min[0];
   for(int i = 0; i < SIZE; i++) {
      if(temp > min[i]) {
         temp = min[i];
      }
   }
   return temp;
}

// Finding max
int largest(int arr[]) { 
    // Initialize maximum element 
   int max = arr[0]; 
  
 
   for (int i = 1; i < SIZE; i++){ 
       if (arr[i] > max){ 
           max = arr[i];
       } 
   }
   return max; 
}  
  
// Finding average 
double average(int avg[]){
    // Find sum of array element
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
       sum += avg[i];
 
    return (double)sum/SIZE;
}

// Finding median 
double median(int arr[]) 
{ 
    // Sort the array 
    sort(arr, arr + SIZE); 
  
    // Check for even case 
    if (SIZE % 2 != 0){ 
        return (double)arr[SIZE / 2]; 
    }
    return (double)(arr[(SIZE - 1) / 2] + arr[SIZE / 2]) / 2.0; 
} 

// Main Fun
int main( ){
   int array[SIZE];
   int input;
   int i;
   
   //Get 20 numbers from the user
   cout << "Please enter " << SIZE << " integers or press 'x' to quite: "<< endl;
   for (i = 0; i < SIZE; ++i){
         cin >> array[i];
   }
   // Displaying input to user
   cout << "The numbers you entered are: \n";
   for (int n = 0; n < SIZE; ++n){
     cout << array[n] << " " << endl;
   }
   // Calling the Fun
   cout << "==================================" << endl;
   cout << "        The Outputs Are ...       " << endl;
   cout << "----------------------------------" << endl;
   cout << "The Maximum is: " << largest(array) << endl;
   cout << "The Minimum is: " << smallest(array) << endl;
   cout << "The Average is: " << average(array) << endl;
   cout << "The Median is: " << median(array) << endl;
   cout << "----------------------------------" << endl;
   cout << "==================================" << endl;
   return 0;
}
