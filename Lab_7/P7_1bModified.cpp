// Section CSC160 - Computer Science I: C++
// File Name:  P7_1bModified
// Student: Meg Veitz
// Homework Number: Lab 7
// Description: Reads in a array size defined by a constant SIZE.
   // store int inside an array named numlist, display array
   // then reverse contents of the array, and display contents of array again.
   // NOTE: NOT asking to display array in reverse, 
   // but actually reverse the contents of array and then display the array itself.
// Last Changed: Created funcitons to actually reverse array. 

#include <iostream>
using namespace std;
const int SIZE = 8; //Max size for the array

//Reverse numlist[] from start to end
void rvereseArray(int numlist[], int start, int end){
   while (start < end){
     int temp = numlist[start]; 
     numlist[start] = numlist[end];
     numlist[end] = temp;
     start++;
     end--;
   } 
}
//Print numlist array
void printArray(int numlist[], int size){
   for (int i = 0; i < size; i++)
   cout << numlist[i] << " ";
   cout << endl;
} 
//Main function
int main( ){
   int numlist[SIZE];
   int n = sizeof(numlist)/ sizeof(numlist[0]);   
   //Read SIZE integers from the keyboard
   for (int i = 0; i < SIZE; i++){
      cout << "Enter value # " << i + 1 << ": ";
      cin >> numlist[i];
   }
   cout << "Displaying initial array: " << endl;
   printArray(numlist, n);
   rvereseArray(numlist, 0, n-1);
   cout << "Displaying array after it has been reversed: " << endl;
   printArray(numlist, n); 
}
   //for (int i =0; i <= 8; i++){
     // numlist[i] = i * 2;
     // cout << "\t " << i << "\t" << numlist[i] << endl;
  // }
   
   //for (int i =0; i <= 8; i++){
    //  numlist[i] = i * 2;
    //  cout << "\t " << i << "\t" << numlist[i] << endl;
   //}
    //return 0;


