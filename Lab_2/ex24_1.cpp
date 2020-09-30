// Section CSC160 - Computer Science I: C++
// File Name:  ex21_1, P24_1
// Student: Megan Veitz
// Homework Number: Lab_2
// Description: read and average some integers, print the result.
// This program continue asking for a new number until the user enters a 0 to terminatte the program
// Last Changed: changed to use do..while. do not initialize the choice to 1 this time and complie andrun the program

// Does the program work the same way after changing it to a do.. while loop?
// The while loop compaired to the do..while loop almost work the same except for when prompting the user to enter another grade.
// The while loop would stop asking for another grade if you pressed any key other than 1.
// The do.. while loop will continue asking you for a grade UNTIL you enter 0.

#include <iostream>
using namespace std;

int main(void)
{

	int x;
   int count = 0; //(1) initialize a counter to 0 to count number of values
   int choice; // This is the choice that controls the looping continuation or termination
   double sum = 0; //initialize the sume to 0 tomake sure thesum at the beginning is 0
   double average;
   
   do
   {
      //READ EACH NUMBER AND CMPUTE THE SUM:
      cout << "\n Enter a grade <Enter>:";
      cin >> x;
      sum = sum + x;
      count ++; // (3) update the count
      //prompt the user:
      cout << "Do you wish to enter another grade? (1 for yes and 0 or other key for no):"<<endl;
      cin >> choice;
   }while(choice); // (2) READ N GRADES AND COMPUTE THEIR SUM, COUNT ENSURES N ENTRIES
   
   if(count ==0)
      cout<<"You haven't enterd a number yet, no averge will be computed, bye\n";
   else{
      average = sum/count; //Notice that we have divided by count this time
      cout<<"The average of these " << count << " grades is "<< average << endl;
   }

    //system("Pause");
    return 0;
}