// C++ program to reverse an array 

#include <iostream>
using namespace std; 
  
/* Function to reverse arr[] from start to end*/
void reverseArray(string arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        string temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
}      
  
/* Utility function to print an array */
void printArray(string arr[], int size) 
{ 
   for (int i = 0; i < size; i++) 
   cout << arr[i] << " "; 
  
   cout << endl; 
}  
  
/* Driver function to test above functions */
int main()  
{ 
    //sentValue = 0;
    //while (sentValue != .)
    
       string arr[10]; 
       
       for (int j = 0; j < 10; j++){
         cout << "Please enter up to ten letters, with a space inbetween letters, or press < . > to end list: ";
         cin >> arr[j];
            if (arr[j] == "."){
               break;
            }
               else cin >> arr[j];
       }
         
       int n = sizeof(arr) / sizeof(arr[0]);  
     
       // To print original array  
       printArray(arr, n); 
         
       // Function calling 
       reverseArray(arr, 0, n-1); 
         
       cout << "Reversed array is" << endl; 
         
       // To print the Reversed array 
       printArray(arr, n); 
        
    return 0; 
} 
