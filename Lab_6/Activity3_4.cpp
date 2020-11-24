// Section CSC160 - Computer Science I: C++
// File Name:  Acivity 3.4
// Student: Meg Veitz
// Homework Number: Lab 6
// Description: 
   //Your program should allow the user to enter any date and output the corresponding day of the week in English.  
   //This program should include a void function named getInput that prompts the user for the date and returns the month, day, and year using pass-by-reference parameters.  
   //You may choose to have the user enter the date’s month as either a number(1-12) or a month name.

// Last Changed: Re-went over calulations, got it working correctly.

#include <iostream>
using namespace std;

char inP;
int d,m,y;  //day, month, year
int leapYear;
int ogYear; // originial year
int oddDay;
   
void getInput(){
   cout << "''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
   cout << "'**************************************************'" << endl;
   cout << "'*  Curious to know what day of the week it was   *'" << endl;
   cout << "'*               on a specific date?              *'" << endl;
   cout << "'**************************************************'" << endl;
   cout << "''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
   do{
      cout << "Type 'y' to find the specific day of the week on any date," << endl;
      cout << "Or type 'n' to stop then press <Enter>" << endl;
      cin >> inP;
      } while(inP != 'y' && inP != 'n');
        
      if (inP == 'n'){
         cout << "Thanks for using the program, Goodbye!" << endl;
         return;   
   }
     
   cout << "Enter in a two digit day then press <Enter>" << endl;
   cin >> d;
   cout << "Enter in a two dig month then press <Enter>" << endl;
   cin >> m;
   cout << "And Enter a four dig year then press <Enter>" << endl;
   cin >> y;
}
   
int main(){
   do{
      getInput();
      
      //Ending day of each month
      int days[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
      
      //Days of the week
      string day_name[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

      //Are we in a leap year?
      if((y%4==0 && y%100) || (y%400==0)){
         //add one to the ending of each day of year
         for (int i=2; i<=12; i++) {
            days[i] = days[i] + 1;
         }
      }

      //Calculate the index of the day needed
      leapYear = (y-1) / 4 + (y - 1) / 400 - (y - 1) / 100;
      ogYear=(y - 1 - leapYear);
      //Get the index in the day_names array
      oddDay=(leapYear * 2 + ogYear + days[m-1] + d)%7;
                   
      cout << "''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
      cout << "'**************************************************'" << endl; 
      cout << "    The specific day of the week in year " << y << "," << endl;
      cout << "    In month " << m << ",                            " << endl;
      cout << "    And on day " << d << ",                          " << endl;
      cout << "    Is: " << day_name[oddDay]<<".                    " << endl; 
      cout << "'**************************************************'" << endl; 
      cout << "''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;    
   } while(inP == 'y');
}

