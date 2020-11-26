//function overlaod excersise
#include <iostream> 
using namespace std;

//prototypes and funciton declaration
int manip(int, int);

float manip(float, float);

int main()
{
   int x = 3;
   int y = 7;
   int z;
   float a = 8.4;
   float b = 4.2;
   float c;
   z = manip(x,y);
   c = manip (a,b);
   cout << z << endl <<c << endl;
   return 0;
}

int manip (int num1, int num2){
return (num1 * num2);
}

float manip (float num1, float num2){
return (num1 / num2);
}


