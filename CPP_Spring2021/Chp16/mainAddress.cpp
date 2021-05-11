// Meg Veitz
// 4/10/21
// Chp16
// Add or delete a new entry to a linked list
// Allow the user to save the data in a file. 
// resources: https://stackoverflow.com/questions/35201919/how-do-i-print-out-the-contents-of-a-file-c-file-stream/35202275
// And the book

#include "addressList.cpp" 
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


int main(int argc, char** argv){
   cout << "Starting" << endl;
   AddressList Address = AddressList(); //Address list obj
   
   cout << "Adding 3" << endl;
   Address.AddNode(3);
   cout << "Printing" << endl;
   Address.PrintAddressList();
   Address.AddNode(6);
   Address.PrintAddressList();
   
   cout << "Adding more!" << endl;
   Address.AddNode(9);
   Address.AddNode(12);
   Address.PrintAddressList();

   cout << "Deleting 9" << endl;
   Address.DeleteNode(9);
   Address.PrintAddressList();

   Address.SaveToFile("addressfile.txt");
   cout << "End" << endl;
   return 0;
}
