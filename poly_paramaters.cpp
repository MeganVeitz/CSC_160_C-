#include <iostream>
using namespace std;
// function overload example

void print(int i )
{
   cout<< "here is int " << i << endl;
}

void print(double f )
{
   cout<< "here is int " << f << endl;
}

void print(char const *c )
{
   cout<< "here is char* " << c << endl;
}


int main() 
{
print (10);
print (10.10);
print ("ten");

return 0;
// because 10 is an int it's going to follow the function of the correct variable
// due to 10.10 being a double so it knows to go to thedouble funciton
// will not work with funcitons with the same data type
}

