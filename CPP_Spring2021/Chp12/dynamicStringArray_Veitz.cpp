// Meg Veitz 3/13/21
// 6th Edition, Chp 12, Programming Excersice 1
// Redo Programming Exercise 5 of Chp 8 using dynamic arrays
// Chp8 Ex5 ~ Write a program taht prompts the user to input a string and ouputs the string in uppercase letters. 
// (Use a character array to storethestring.)

#include <iostream>
#include <cstring>


using namespace std;

int main(){
   string input_str;
   int lengthOfStr;   

   do{

      // User input   
      cout << "Hi! Enter a word, then press <Enter>, else enter 0 to quit." << endl;
      cin >> input_str;
      if(input_str == "0"){
         cout << "Goodbye!" << endl;
         break;
      }
      
      // To Upper
      cout << "String to Uppercase:\n";
      transform(input_str.begin(), input_str.end(), input_str.begin(), ::toupper);
      cout << input_str << endl;
      
      // Length
      lengthOfStr = input_str.length();
      cout << "The length of the input string is: " << lengthOfStr << endl;
      
      // Creates new array
      char* charArr = new char[lengthOfStr];
      for(int i = 0; i < lengthOfStr; i++){
         charArr[i] = input_str[i];
      }

   } while(input_str != "0");// End while
  
}// End main