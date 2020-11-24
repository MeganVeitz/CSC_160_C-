// Section CSC160 - Computer Science I: C++
// File Name:  Activity 2
// Student: Meg Veitz
// Homework Number: Lab 6
// Description: 
   //Write a program that requests the current time and a waiting time as two integers for the number of hours and the number of minutes to wait.
   //The program then outputs what the time will be after the waiting period. 
   //Use 24-hour notation for the times.  
   //Include a loop that lets the user repeat this calculation for additional input values until 
   //the user says they want to end the program
// Last Changed: Got the output rounding converstion for a 24 notation corrected.
// Assuming wait time is less than a day, if not go home.

#include <iostream>
#include <cmath>

using namespace std;

int currentTime;
int waitTime;
int waitHrs;
int waitMin;
char choice;
int endWaitTime;
int convertToMin;

int main( )
{
   cout << "----------------------------------------" << endl;
	cout << "- Welcome to the Wait Time Calculator! -" << endl;
   cout << "----------------------------------------" << endl;
   do{
      cout << "Do you want to calulate your end wait time?" << endl;
      do{
         cout << "Type 'y' to calculate or type 'n' to stop then press <Enter>" << endl;
         cin >> choice;
      } while(choice != 'y' && choice != 'n');
        
      if (choice == 'n'){
         cout << "Thanks for using the Wait Time Calculator, Goodbye!" << endl;
         return 0;   
      }
      // geting current time
      cout << "Great, Enter in the current time in a 24-hour notation." << endl;
      cin >> currentTime;
      cout << "The current time is: " << currentTime << endl;
      cout << "\n" << endl;
      // getting wait time
      cout << "Now enter your wait time in hours and minutes, seperated by a space then press <Enter>" << endl;
      cin >> waitHrs >> waitMin;
      cout << "Your wait time is: " << waitHrs << " hours and " << waitMin << " minutes \n" << endl;
      
      convertToMin = waitHrs * 60;
      convertToMin = waitMin + convertToMin;
      
      int hours = floor(convertToMin / 60);
      int min = convertToMin % 60;
      
      int minutesLeft = currentTime % 60;
      
      if ((minutesLeft + min) > 60) {
         hours ++;
         min = min - 60;
      }
      
      endWaitTime = currentTime + (hours * 100) + min;
      if (endWaitTime > 2400){
         endWaitTime = endWaitTime - 2400;
      }
      cout << "---------------------------------------------------" << endl;
      cout << "Your end wait time in hours and minutes is: " << endWaitTime << endl;
      cout << "---------------------------------------------------" << endl;
   } while(choice == 'y');
}
