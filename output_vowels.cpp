//Write a program that prompts the user to input a sequence of characters and outputs the number of vowels.
#include <iostream>
using namespace std;

bool isVowel(char ch);

int main()

{
   char ch;
   cout << "Enter multiple characters" << endl;
   cin >> ch;
   cout << endl;
   
   cout << ch << " has these vowels: " << isVowel(ch) << endl;

   // system("Pause");
    return 0;
}

bool isVowel(char ch)
{
switch (ch)
   {
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   
      return true;
   default:
      return false;
   //cout << 
   }
}