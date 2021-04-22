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


// Overload increment and decrement operators
// Pre-increment
rectangleType rectangleType::operator++(){
   length++;
   width++;
   
   return *this;
   // delete this;
}

// Post-increment
rectangleType rectangleType::operator++(int u){
   rectangleType temp(*this);

   length++;
   width++;
   
   return *this;
   // delete this;
}

// Pre-decrement
rectangleType rectangleType::operator--(){
   length--;
   width--;
   
   return *this;
   // delete this;
}

// Post-decrement
rectangleType rectangleType::operator--(int u){
    rectangleType temp(*this);

   length--;
   width--;
   
   return *this;
   // delete this;
}


// Overload arithmetic operators ~ part d
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
    
    tempRect.length = length - rectangle.length;
    tempRect.width = width - rectangle.width;
    
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
   if ((length <= rectangle.getLength()) && (width <= rectangle.getWidth())){
      return true;
   }
   return false;
}

bool rectangleType::operator< (const rectangleType& rectangle){
    if ((length < rectangle.getLength()) && (width < rectangle.getWidth())){
      return true;
    }
    return false;
}

bool rectangleType::operator>= (const rectangleType& rectangle){
    if ((length >= rectangle.getLength()) && (width >= rectangle.getWidth())){
      return true;
    } 
    return false;
    
}

bool rectangleType::operator> (const rectangleType& rectangle){
    if ((length > rectangle.getLength()) && (width > rectangle.getWidth())){
      return true;
    }
    return false;
}   
