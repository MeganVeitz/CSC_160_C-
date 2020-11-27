//Calling class member funciton, using class cube and finding Volume.

// Class consists of:
   //class name - becomes the new datattype
   //members - variables  of datatypes
     // methods that opertate on members

#include <iostream>
using namespace std;

class Cube{
   public:
      int side;
   
//   int getVolume();
   
   //declaring inside of class
   int getVolume(){
      return side*side*side;
   }
};
//declaring outside of class
//int Cube::getVolume(){
//   return side * side * side;// returns volume of cube
//}

int main(){
   Cube C1;
   C1.side = 4; //setting the size value
   cout << "Volume of cube C1: " << C1.getVolume();
   
return 0;
}
//C1 is like self.something
