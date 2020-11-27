#include<iomanip>
#include<iostream>
using namespace std;

double getAverage(double time[], int numElements);
double getLowest(double time[], int nemElements);
 
int main () 
{
   double finishTimes[5] ={0.0};
   double aveTime = 0.0;
   double lowestTime = 0.0;
   cout << "Hello Chris!\nEnter the finishing time for \n";
   
   //enter finish times
   for (int x = 0; x < 5; x += 1){
      cout << "Race " << x + 1 <<  ": ";
      cin >> finishTimes[x];
      }
      
   aveTime = getAverage(finishTimes, 5);
   lowestTime = getLowest(finishTimes, 5);
   
   cout << fixed << setprecision(1) << endl;
   cout << "Average 5k Finishing Time: " << aveTime << endl;
   cout << "Lowest 5k Finishing Time: " << lowestTime << endl;
   return 0;
}//end main

double getAverage(double time[], int numElements){
   double total = 0.0;
   
   for (int x = 0; x < numElements; x += 1)
      total += time[x];
      
   return total / numElements;
}
   
   
double getLowest (double time[], int numElements){
   double lowest = time[0];
   for (int x = 1; x < numElements; x +=1)
      if (time[x] < lowest)
         lowest = time[x];
   return lowest;
}
   //int finishTimes[5];
   //int time;
   //int average;
   //int lowest;
   
   //int sub = 0;                           //keeps track of subscripts
   //int maxSub = 5;                        //variable used for swapping
   //int temp = 0;                          //maximum subscrpt
   //int lastSwap = 0;                      //position of last swap
   //char swap = 'y'; 
   

   //cout << "Average Finishing Time: " ;
  // average = finishTimes / 5;
  /// cout << average;
   
      //search the array
      //for (int i = 0; i < 5; i++){
         //if (finishTimes[i] < 5)
       //     average = average + ;
     // }
    
   //while (sub < maxSub){
         //if (finishTimes[sub] > finishTimes [sub + 1]) {
            //a swap is necessary
            //temp = finishTimes[sub];
            //finishTimes[sub] = finishTimes[sub + 1];
            //finishTimes [sub + 1] = temp;
            //swap = 'y';
          //  lastSwap = sub;
        // }
        // sub += 1; // increment subscript
      //}//endwhile
    //  maxSub = lastSwap; // reset max subscript

  // cout << "Lowesst Finishing Time: ";
  // cout << finishTimes[0];
   //cout << endl << "People with a salary over " << salary << " dollars" << endl;
   //cout <<  "are " << salOver << " people."<< endl;

//return 0;
//}
