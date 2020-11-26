// This program allows a manager to dislapy the number of employees who earn more than a specific amount, which they will enter. 
#include<iostream>
using namespace std;
 
int main () 
{
   int peopleSalaries[9] = {23000 ,26000, 21000, 54000, 45000, 36000, 80000, 75000, 34000};
   int salary = 0;
   int salOver = 0;
   
   //Trying to continue asking the manager to input 
   //while(salary >= 0){
   cout << "Search for Salaries over: " ;
   cin >> salary;
   
      //search the array
      for (int sub = 0; sub < 10; sub++){
         if (peopleSalaries[sub] > salary)
            salOver ++;
      }
   //}
   
   cout << endl << "People with a salary over " << salary << " dollars" << endl;
   cout <<  "are " << salOver << " people."<< endl;

return 0;
}


