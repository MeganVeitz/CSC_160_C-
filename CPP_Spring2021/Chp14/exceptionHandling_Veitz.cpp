// Meg Veitz
// 3/18/21
// Chp 14
// Write a program that prompts the user to enter a length in feet and inches and outputs the equivalent length in centimeters. 
// If the user enters a negative number or nondigit number, throw and handle an appropriate exceoption and promt the user to enter another set of numbers. 
// Resources: https://www.cplusplus.com/doc/tutorial/exceptions/
// And the C++ Programming: Prgram Design Includeing Data Structures by: D.S.Malik 6th Edition

#include <iostream>
#include <string>
using namespace std;

int main(){
   int lengthFt; // User input length in feet and inches
   int lengthIn;
   string input;
   float centCal;
   char quitCmd;
   float centConvert = 2.54;   // Multiply the totalInch value by 2.54
   
   quitCmd = 'a';
   
   while (quitCmd != 'q'){
   
      try {
         cout << "Welcome to the length convertor 10997.2" << endl;
         cout << "We convert your american feet and inches into reliable centimeters" << endl;
         // Get user input for feet
         cout << "Please enter the length in feet or enter 0 feet: " ;
         cin >> input;
         
         // error checking, non int type
         try{
            lengthFt = stoi(input);
         } catch (std::invalid_argument) {
            cout << "Exception Caught!"<< endl;
            continue;
         }
         
         // error checking, non-negative length
          if (lengthFt < 0){
             cout << "Input must be positive length." << endl;
             throw runtime_error("Invalid foot length");
          }
          
         // Get user input for inches
         cout << "Enter length in inches or enter 0 inches: ";
         cin >> lengthIn;
            
         // error checking, non-negative length
          if (lengthIn < 0){
             cout << "Input must be positive length." << endl;
             throw runtime_error("Invalid inch length");
          }
         
         // Calculate foot to inches and add inch and foot together
         int foot2Inch = lengthFt * 12;
         int totalInch = foot2Inch + lengthIn; 
         // Convert inch to cent 
         centCal = (static_cast <float>(totalInch)) * centConvert;
         cout << "The total length in inches is: " << totalInch << " in." << endl;
         cout << "Converted to centimeters your new total is: " << centCal << " cm" << endl;
      }
      catch (runtime_error& excpt){
         // Prints error message passed by throw statement
         cout << excpt.what() << endl;
         cout << "Can't convert lengths, please try agian." << endl;
      }      
  
      // Prompt user to continue or quit
      cout << endl << "Enter any key to continue or ('q' to quit): ";
      cin >> quitCmd;
         
      
   }// End while
   cout << "Thanks for using LC 10997.2, Goodbye." << endl;
   return 0;
}