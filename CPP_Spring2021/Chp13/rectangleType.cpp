//Meg Veitz

#include <iostream>
#include <cassert>
#include "rectangleType.h"
 
using namespace std;


// Overload the stream insertions and extraction operators
ostream& operator<< (ostream& osObject, const rectangleType& rectangle){
   osObject << "Length = " << rectangle.length
            << "; Width = " << rectangle.width;
   return osObject;
}

istream& operator>> (istream& isObject, rectangleType& rectangle){
   isObject >> rectangle.length >> rectangle.width;
   return isObject;                     
}

void rectangleType::setDimension(double l, double w){
    if (l >= 0)
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}

double rectangleType::getLength() const{
    return length;
}

double rectangleType::getWidth()const{
    return width;
}

double rectangleType::area() const{
    return length * width;
}

double rectangleType::perimeter() const{
    return (2 * (length + width));
}

rectangleType::rectangleType(){
    length = 0;
    width = 0;
}

rectangleType::rectangleType(double l, double w){
    setDimension(l, w);
}


// Overload arithmetic operators
// Adds corresponding lengths and widths of the two rectangles
rectangleType rectangleType::operator+(const rectangleType& rectangle){
   rectangleType tempRect;
   
   tempRect.length = length + rectangle.length;
   tempRect.width = width + rectangle.width;
   
   return tempRect;
}

// Subtracts lengths and widths of the two rectangles
rectangleType rectangleType::operator-(const rectangleType& rectangle){
   rectangleType tempRect;

   double testLength = length - rectangle.length;
   double testWidth = width - rectangle.width;
   
   if (testLength < 0){
      cout << "Can't subtract, length would be less than zero"<< endl;
      return *this;
   }
   if (testWidth < 0){
      cout << "Can't subtract, width would be less than zero"<< endl;
      return *this;
   }
   
   tempRect.length = testLength;
   tempRect.width = testWidth;
   
   return tempRect;
}

// Multiplies the corresponding lengths and widths of the two rectangles
rectangleType rectangleType::operator*(const rectangleType& rectangle){
   rectangleType tempRect;
   
   tempRect.length = length * rectangle.length;
   tempRect.width = width * rectangle.width; 
   
   return tempRect;
}

// Two rectangles are equal if their lengths and widths are equal~part c
bool rectangleType::operator== (const rectangleType& rectangle){
   return (length == rectangle.length && 
            width == rectangle.width);
}

//Two rectangle are not equal if either their lengths are no equal or their widths are not equal
bool rectangleType::operator!= (const rectangleType& rectangle){
   return (length != rectangle.length ||
           width != rectangle.width);
}

bool rectangleType::operator<= (const rectangleType& rectangle){
   return area() <= rectangle.area();  

}

bool rectangleType::operator< (const rectangleType& rectangle){
   return area() < rectangle.area();  

}

bool rectangleType::operator>= (const rectangleType& rectangle){
   return area() >= rectangle.area();    
}

bool rectangleType::operator> (const rectangleType& rectangle){
   return area() > rectangle.area();  
}   

rectangleType rectangleType::operator++(){
   length++;
   width++;
   
   return *this;
}

// Post-increment
rectangleType rectangleType::operator++(int u){
   rectangleType temp(*this);

   length++;
   width++;
   
   return *this;
}

// Pre-decrement
rectangleType rectangleType::operator--(){
   if (length <= 0 && width <= 0){
      length = 0;
      width = 0;
      return *this;   
   }
   
   if (length <= 0 && width > 0){
      length = 0;
      width--;
      return *this;
   }
   
   if (width <= 0 && length > 0){
      width = 0;
      length--;
      return *this;
   }
      
   length--;
   width--;
   return *this;
}

// Post-decrement???????
rectangleType rectangleType::operator--(int u){
   rectangleType temp(*this);

   length--;
   width--;
   
   return *this;
}
