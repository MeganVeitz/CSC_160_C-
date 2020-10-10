// Section CSC160 - Computer Science I: C++
// File Name:  Filter_Menu
// Student: Meg Veitz
// Homework Number: Lab 4
// Description: Create a menu system to find a correct filter for a car 
  // based on model, cylinder size, and year
  // need to create unique model number created by the choice of the user
// Last Changed: fixed the cylinder output

#include <iostream>
#include <string>

using namespace std;

int main( )
{
	// Your programming goes here
   cout << endl << "----------------------------------------------------------"<< endl;
   cout << endl << "--                 Welcome to Filtron!                  --"<< endl;
   cout << endl << "--                                                      --"<< endl;
   cout << endl << "-- The program that helps you find the right air filter --"<< endl;
   cout << endl << "----------------------------------------------------------"<< endl;
   
  
string iD;      // Air filter unique ID
int make;       // Model type of car
int year;       // Manufactor year of the car
int numC;       // How many cylinders does the car have
string makeName;// make converted to string
string yearS;   // year converted to string
string numCS;    // numC converted to string


//Input car model
 do  {
   cout << "\n\nWhat Car model do you have? Enter an option from list below:  Enter 0 to exit." << endl;
   cout << "1. (Edsel)"<< endl;
   cout << "2. (Austin)" << endl;
   cout << "3. (catepiller)" << endl;
   cout << "4. (Jaguar)" << endl;
   cout << "Enter selection:";
   // reading input
   cin >> make;
   
   switch(make)
      {
      case 0:
         cout << "QUITTING";
         return 1;
         break;
      case 1:
         cout << "You Selected Edsel #1";
         makeName = "Edsel";
         break;
      case 2:
         cout << "You Selected Austin #2";
         makeName = "Austin";
         break;
      case 3:
         cout << "You Selected Catepiller #3";
         makeName = "Catepiller";
         break;
      case 4:
         cout << "You Selected Jaguar #4";
         makeName = "Jaguar";
         break;
      default:
         make = 0;
         cout << "Invalid selection"<<endl;
         cout << "\n\n please select a valid option!" << endl;
         break;
         
      }//end switch
   
   }while (make == 0);
  
   
//Input number of Cylinders from selection above
  do{
   if (make == 1) //choose 6 or 8 Cylinders
      {
      cout << "\n For the Edsel input number of cylinders 6 or 8: " << endl;
      
      cin >> numC;
      if (numC == 0){
         cout << "QUITTING" << endl;
         return 1;
       }
       else if (numC == 6 || numC == 8)
         {
         cout << "Your car has " << numC << " cylinders." << endl;
         }
         else
            { 
            numC = 0;
            }
      }
      
   else if (make == 2) //choose 4 or 6 Cylinders
      {
      cout << "\n For the Austin input number of cylinders 4 or 6: " << endl;
      cin >> numC;
      if (numC == 0){
         cout << "QUITTING" << endl;
         return 1;
       }
       else if (numC == 4 || numC == 6){
         cout << "Your car has " << numC << " cylinders." << endl;
         }
         else
            { 
            numC = 0;
            }
      }
      
   else if (make == 3) //choose 15 or 20 Cylinders
      {
      cout << "\n For the Catepiller input number of cylinders 15 or 20: " << endl;
      cin >> numC;
      if (numC == 0){
         cout << "QUITTING" << endl;
         return 1;
       }
       else if (numC == 15 || numC == 20){
         cout << "Your car has " << numC << " cylinders." << endl;
         }
         else
            { 
            numC = 0;
            }
      }
      
   else if (make == 4) //choose 6 or 12 Cylinders
      {
      cout << "\n For the Jaguar input number of cylinders 6 or 12: " << endl;
      cin >> numC;
       if (numC == 0){
         cout << "QUITTING" << endl;
         return 1;
       }
       else if (numC == 6 || numC == 12){
         cout << "Your car has " << numC << " cylinders." << endl;
         }
         else{ 
            numC = 0;
            }
      }
      
   else{ //prompt user to enter info again
      
      numC = 0;
      cout << "Invalid selection"<<endl;
      cout << "\n\nEnter 0 to exit and please select a valid option!" << endl;
      }
   }while(numC == 0);
   
//Input manufacture year
do{
   cout << "\n\nEnter in the 4 digit manufacture year of the car between 1985 - 2005:  Enter 0 to exit." << endl;
   cin >> year;
      if (year == 0){
            cout << "QUITTING" << endl;
            return 1;
         }
         
      else if (year >= 1985 && year <= 2005){
         cout << "\n" << year << " is the year of your car.\n" << endl;
      }
      
      else{
         year = 0;
         cout << "Invalid year" << endl;
      }
}while(year == 0);
      

// Create air filter ID and Output
   yearS = to_string(year);
   numCS = to_string(numC);
   string firstNum;
   string secondNum;
     
   cout << "The make of your car is: " << makeName << ". You have " << numC << " cylinders in your car, and the year of your car is " << year << "." << endl;
   cout << "\n"<< endl;
   // make sure the unique ID is created proporly 
   if (numC < 10)
   {
      firstNum = "0";
      secondNum = numCS.at(0);
   } else{
      
      firstNum = numCS.at(0);
      secondNum = numCS.at(1);
   }

   cout << "Your new air filter ID is: " << makeName.at(0) << yearS.at(2) << yearS.at(3) << firstNum << secondNum << endl;
   cout << "Goodbye!" << endl;

return 0;
}

    //system("Pause");
    //return 0;
//}