// Section CSC160 - Computer Science I: C++
// File Name:  
// Student: 
// Homework Number: 
// Description: 
// Last Changed: 

#include <iostream>
using namespace std;

int main( )
{
	// Your programming goes here
   cout << endl << "----------------------------------"<< endl;
   cout << endl << "----------------Main Menu---------"<< endl;
   cout << endl << "----------------------------------"<< endl;


int option, value;
do
{
   cout << "\n\nWhat operation do you want toperfom? select Option number. Enter 0 to exit." << endl;
   cout << "1. (putany info you want here)"<< endl;
   cout << "2. ()" << endl;
   cout << "3. ()" << endl;
   cout << "4. ()" << endl;
   cout << "5. ()" << endl;
   cout << "6. ()" << endl;
   cout << "7. ()" << endl;
   
   cin >> option;
   
   switch(option)
   {
      case 0:
         break;
      case 1:
         cout << "Selected #1";
         break;
      case 2:
         cout << "Selected #2";
         break;
      case 3:
         cout << "Selected #3";
         break;
      case 4:
         cout << "Selected #4";
         break;
      case 5:
         cout << "Selected #5";
         break;
      case 6:
         cout << "Selected #6";
         break;
      case 7:
         cout << "Selected #7";
         break;
      default:
         cout << "Enter proper Option number "<<endl;
         break;
         
   }
}while(option !=0);

    //system("Pause");
    return 0;
}