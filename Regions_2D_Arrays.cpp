#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int REGION =4;
const int MONTH =3;

int main(){
   int orders[REGION][MONTH] = {0};
   
   //enter data into array
   int region = 0;
   int month = 0;
   
   while (region < REGION){
      while (month < MONTH){
         cout << "Number of order for Region " << region + 1 << ", Month " << month + 1 << ": ";
         cin >> orders [region][month];
         month++;
      }
      region++;
      month = 0;
   }

do{//begin outer loop
   cout << "Region " << region + 1 << ": " << endl;
    do{
      
      cout << orders[region][month] << endl;
      month++;
     }while(month < MONTH);

   region++;
   month = 0;

}while(region < REGION);

}