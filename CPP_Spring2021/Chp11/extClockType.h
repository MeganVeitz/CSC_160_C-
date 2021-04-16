// Meg Veitz 3/09/21
// 6th Edition, Chp 11, Programming Excersice 1

#include "clockType.h"
#include "clockType.cpp"


// Derived class ~ child
class extClockType : public clockType{
   public:
      extClockType(); //constructor
      void setTimeZone();// memeber functions
      void printTimeZone() const;
   private:
      int zn;//member variable    
};
