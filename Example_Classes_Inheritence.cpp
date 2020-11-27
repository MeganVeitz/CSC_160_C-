#include <iostream>
using namespace std;


class A{
   public: //Constructors
      A(){
       cout << "A\n"; 
      }
};

class B: public A{ //Inheritance
   public:
      B(){
      cout << "B\n";
      }
};

class C: public B{
   public:
      C(){
      cout << "C\n";
      }
};

class D: public C{
   public:
      D(){
      cout << "D\n";
      }
};


int main(){
   cout << "Constructing A: \n";
   A cA;
   
   cout << "Constructing B: \n";
   B cB;
   
   cout << "Constructing C: \n";
   C cC;
   
   cout << "Constructing D: \n";
   D cD;
}


