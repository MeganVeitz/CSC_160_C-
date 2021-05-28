// Meg Veitz
// 4/27/21
// (Recursive Sequential Search) Linear search, Start from the beginning and work your way through the list or item in found.
// The sequential search algorithm given in the chapter is nonrecursive. 
// Write and implement a recursive version of the sequential serach algorithm.
// Fun Fact: Average number of comarisons made by sequential search is: (n+1)/2
// References: https://www.w3schools.com/cpp/cpp_arrays.asp
// D.S. Malik

// Please ignore all warnings

#include <iostream>
using namespace std;

/* Keeping non-recursive code, below, for future references

 template <class elemType>
 int seqSearch(const elemType list[], int length, const elemType& item){
 
    int loc;
    bool found = false; 
    
    loc = 0;
    
    while (loc < length && !found){ // while you have elements and it has not been found 
       if (list[loc] == item){ // trying to find an index of a specific item
          found = true;
       } else{
          loc++;
       }
       
       if(found){
          return loc;
       }else{
          return -1;
       }
    }
 }// end seqSearch
*/

template <class elemType>
int seqSearch(const elemType list[], const elemType& item, int index){// start on index 0
   cout << "index: " << index << endl;
   int size = sizeof(list);
   if (index == size+2){ // off by 2 due to starting the index at one and the recusive call adding one to the next index
      cout << "End of list, Target not Found" << endl;
      return -1;
   }
   
   if (list[index] == item){ // finds its target
      cout << "Found Target" << endl;
      return index;
   }
   
   return seqSearch(list, item, index +1);// calls itself, moves onto the next index
}// end Recursive seqSearch

int main(){
   cout << "Resursive Search 1" << endl;
   int testList;
   int const listArr[10] = {1,3,2,5,4,6,8,7,9,10};
   testList = seqSearch(listArr, 10, 0);
   
   cout << "\nResursive Search 2" << endl;
   int testList2;
   int const listArr2[5] = {3,5,4,8,7};
   testList2 = seqSearch(listArr2, 4, 0);
   
   cout << "\nResursive Search 3" << endl;
   int testList3;
   int const listArr3[10] = {3,5,4,8,7,4,2,7,7,1};
   testList3 = seqSearch(listArr3, 9, 0);
}