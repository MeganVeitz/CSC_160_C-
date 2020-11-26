//Array with a nested while loop, uses the bubble sort to sort the contects of a one-D arrry in accending order

//Bubblesort.cpp-uses the bubble sort to sort the contects of a one-D arrry in accending order

#include <iostream>
using namespace std;

int main(){
   int numbers[4] = {23, 46, 12, 35};
   int sub = 0;                           //keeps track of subscripts
   int maxSub = 3;                        //variable used for swapping
   int temp = 0;                          //maximum subscrpt
   int lastSwap = 0;                      //position of last swap
   char swap = 'y';                       //indicates if a swap was made
   
   //repeat loop instrructions as long as a swap was made
   while (swap == 'y'){
      swap = 'n';
      sub = 0;
      
      //compare adjacent array lelements to determine whether a swap is necessary
      while (sub < maxSub){
         if (numbers[sub] > numbers [sub + 1]) {
            //a swap is necessary
            temp = numers[sub];
            numbners[sub] = numbers[sub + 1];
            numbers [sub + 1] = temp;
            swap = 'y';
            lastSwap = sub;
         }
         sub += 1; // increment subscript
      }//endwhile
      maxSub = lastSwap; // reset max subscript
   }//end while
      //display sorted array
      for (int x = 0; x < 4; x+=1){
         cout << knumers[x] << endl;
      }//end for
      return 0;
}//end main