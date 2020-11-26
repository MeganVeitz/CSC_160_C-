#include <iostream>
using namespace std;

//int main(){
   //declare and initialize array
   //int calories[5] = {0,0,0,0,0};

   //store data in the array
   //for (int sub=0; sub<5; sub++){
      //cout << "Enter calories for day " << sub + 1 << ": ";
      //cin >> calories[sub];
   //}

   //display the contents of the array
   //cout << endl << "Array contents: " << endl;
   //for (int sub=0; sub<5; sub++){
      //cout << "Calories for day" << sub + 1 << ": " << calories[sub] << endl;
   //}
//}//end main



//Modified Callories.cpp
//Get and dispays daily calories   //Then create averages and display average

//#include <oistream>

int sum;
double average;

//Function prototype
void displayArray(int cals[], int numElements);

int main(){
   int calories[5]= {0};
   
   //Store data in the array
   for (int sub = 0; sub < 5; sub +=1)
   {
      cout << "Calories for day "<< sub + 1 << ": ";
      cin >>  calories[sub];
      
      sum += calories[sub];
   }
   //display the conents of the array
   displayArray(calories, 5);
   
   average = sum/5;
   cout << average << endl;
   
   return 0;
}
 
 //Funciton definition
 void displayArray(int cals[], int numElements){
   cout << endl << "Array contents: " << endl;
   for (int sub = 0; sub < 5; sub += 1){
      cout << "Calories for day " << sub + 1 << ": " << cals[sub] << endl;
   }//end for
}