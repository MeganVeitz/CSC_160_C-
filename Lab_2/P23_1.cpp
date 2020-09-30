// Section CSC160 - Computer Science I: C++
// File Name: P23_1
// Student: Megan Veitz
// Homework Number: Lab_2
// Description: Read and computes the average of 6 numbers.
// Last Changed: 

#include <iostream>
using namespace std;

int main(void)
{
	int x,y,z,p,q,r; // (A)
   double average;
   
   //prompt the user:
   cout << "Enter six grades separeated by spaces, then press <Enter>:" << endl;
   // read and store six integers:
   cin >> x >> y >> z >> p >> q >> r; // (B)
   
   average = (x + y + z + p + q + r)/6; //(C)
   cout << "The average is " << average << endl;

    //system("Pause");
    return 0;
}