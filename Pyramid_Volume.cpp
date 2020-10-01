//program to work with functions and find a pyramid volume

#include <iostream>
using namespace std;



//Function declaration
double pyramid_volume (double height, double base_length);

int main( )
{
   
   cout << "Volume: " << pyramid_volume(9, 10) << endl;
   cout << "Expected:  300"<< endl; //using cout to test my function
   cout << "Volume: " << pyramid_volume(0, 10) << endl;
   cout << "Expected: 0"<< endl;// using cout to test 
   return 0;
   
}

double pyramid_volume(double height, double base_length)

{
   double base_area = base_length * base_length;
   return height * base_area / 3;
}