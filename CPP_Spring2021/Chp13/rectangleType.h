// Meg Veitz
// 3/23/21
// Chp 13
//This chapter uses the class rectangleTpye to illustrate how to overload the operatorss +, *, ==, !=, >>, and <<. 
//In this ex, first redefine the class rectangleType by declaring the instance variables as protected and then overload additional operators as defined in parts a to c. 
   //a) Overload the pre - and post-increment and decrement operators to increment and decrement, respectively, the length and width of the rectangle by one unit. 
   // (Note: after decrementing the length and wideth, they must be positive.)
   
   //b) Overload the binary operator - to subtract the dimensions of one rectangle from the corresponding dimensions of another rectangle. 
   // If the resulting dimensions are not positive, output an appropriate message and do not perform the operation. 
   
   //c) The operators == and != are overloaded by considering the lengths and widths of rectangles. 
   // Redefine the functions to overload the relational operator by considering the areas of  rectangles as follows:
   // Two rectangles are the same, if they have the same area; otherwise the rectangles are not the same. 
   // Similary, rectangle yard1 is greater than rectangle yard2 if the area of yard1 is greater than the area of yard2.
   // Overload the remaining relational operators using simlar definitions. 
   
   //d) Write the definitions of the functions to overload the operators defined in parts a to c. 
   //e) Write a test program that tests various operations on the class rectangleType. 
// Resources: https://www.geeksforgeeks.org/operator-overloading-c/
// https://www.cplusplus.com/doc/tutorial/exceptions/
   
#include <iostream>
using namespace std;

class rectangleType{

   // Overload the stream insertions and extraction operators
   friend ostream& operator<< (ostream&, const rectangleType &);
   friend istream& operator>> (istream&, rectangleType &);
   
public:
   void setDimension(double l, double w);
   double getLength() const;           // retrieves length
   double getWidth() const;            // retrieves width
   double area() const;                // returns area
   double perimeter() const;           // return perimeter
   void print() const;                 // display rectngle type attributes
   rectangleType();                    // default constructor
   rectangleType(double l, double w);  // rectangle obj constructor
   
   // Overload arithmetic operators
   rectangleType operator+(const rectangleType&); // Overload the operator +
   rectangleType operator*(const rectangleType&); // Overload the operator *
   rectangleType operator-(const rectangleType&); // Overload the operator -
   
   // Overload relational operators
   bool operator== (const rectangleType&);         // Overload the operator ==
   bool operator!= (const rectangleType&);         // Overload the operator !=
   bool operator<= (const rectangleType&);         // Overload the operator <= 
   bool operator< (const rectangleType&);          // Overload the operator <
   bool operator>= (const rectangleType&);         // Overload the operator >=
   bool operator> (const rectangleType&);          // Overload the operator >
   
   // Overload increment and decrement operators
   rectangleType operator++ ();                          // Pre-increment
   rectangleType operator++ (int);                       // Post-increment
   rectangleType operator-- ();                          // Pre-decrement
   rectangleType operator-- (int);                       // Post-decrement
   
protected:
   double length;
   double width;
};
