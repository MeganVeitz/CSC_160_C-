#include <iostream>
using namespace std;

int main(){
//Inclass on board.. not sure it compiles
   //int *p;
   //int i;
   //int i2 = *p;
   //int p2 = &i;
   //int a[2];
   //int i = *a;
   //int i2 = a[0];
//How do we get second elememnt?
   //int i = *a+1;
   
// What is printed
   //int a = 1;
   //int b = 2;
   //int*p = &a;
   //cout << *p << endl;// prints 1
   //p = &b;
   //cout << *p << endl;// prints 2
   
// What's printed
   //int a = 1;
   //int b = 2;
   //int*p = &a;
   //int*q = &b;
   //*p = *q;
   //cout << a << " " << b << endl; //prints 2 & 2
   
// What's printed
   //int a = 15;
   //int*p = &a;
   //int*q = &a;
   //cout << *p + *q << endl; //prints 30
   
// What's printed
   //int a = 15;
   //int *p = &a;
   //int *q = &a;
   //*p = *p + 10;
   //cout << *q << endl; //prints 25
   //*q = *q + 10;
   //cout << *q << endl; //prints 35

// What's printed
   int a = 15;
   int *p = &a;
   cout << *p << " " << p << endl; //print 15 & 0x7ffeee299bdc <- that's an memory adress
     
}