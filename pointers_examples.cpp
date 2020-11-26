// Pointers are arrays

#include <iostream>
using namespace std;

int main(){
   int my_array[]={1, 23, 17, 4, -5, 100};
   int* ptr;
   
   int i;
   ptr = &my_array[0];//point our pointer to the first element of the array
   
   cout << "my_arrray[]={1, 23, 17, 4, -5, 100};\n\n";
   
   for (i = 0; i <6; i++){
      cout << "my_array[" << i << "]=" << my_array[i] << "<-- A" << endl; //<--A
      
      //cout << "ptr + " << i << " =    " << *(ptr + 1) << "<--B" << endl << endl; //<--B
      //cout << "ptr + " << i << " =    " << *ptr++ << " <--B" << endl << endl;
      
      cout << "ptr + " << i << "=  " << *(++ptr) << " <-- B " << endl << endl;
   }
   return 0;
}

//diffrernt files:
//Header - difinitions
//Implementation - processes for all of my functions and stuff
//Main - call the functions (my goal is to make this as small as possible)