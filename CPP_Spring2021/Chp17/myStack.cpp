// Meg Veitz
// 4/20/21
// Two stacks of the same type are the same if they have the same number of elements
// and their elements at the corresponding positions are the same. 
// Overload the relational operator == for the class stackType that returns true if two stacks of the same type are the same;
// it return false otherwise. 
// Also, write the definition of the function template to overlaod this operator. 


#ifndef H_StackType
#define H_StackType
#include <stack>
#include <iostream>
#include "myStack.h"

using namespace std;

template <class Type>// Function to initialize the stack to an empty state.
void stackType<Type>::initializeStack(){
   stackTop = 0;
}// end initializaStack


template <class Type>// Function to determine whether the stack is empty.
bool stackType<Type>::isEmptyStack() const {
   return(stackTop == 0);               // Returns true if the stack is empty, otherwise returns false.
}// end isEmptyStack


template <class Type>// Function to determine whether the stack is full.
bool stackType<Type>::isFullStack() const {
   return (stackTop == maxStackSize);   // Returns true if the stack is full, otherwise returns false.
}// end isFullStack


template <class Type>// Function to add newItem to the stack.
void stackType<Type>::push(const Type& newItem){
   if (!isFullStack()){
      list[stackTop] = newItem;         // Add newItem to the top of the stack
      stackTop++;                       // Increment stackTop
   } else {
      cout << "Cannot add to a full stack." << endl;
   }
}// end push


template <class Type>// Function to return the top element of the stack.
Type stackType<Type>::top() const {         
   assert(stackTop != 0);               // If stack is empty, terminate the program 
   return list[stackTop -1];            // Return the element of the stack indicated by stackTop -1
}// end top


template <class Type>   // Funciton to remove the top elemnt of the stack.
void stackType<Type>::pop() {
   if (!isEmptyStack()){
      stackTop--;                       // Decrement stackTop
   } else {
      cout << "Cannot remove from an empty stack." << endl;
   }
}// end pop


template <class Type>// Constructor
stackType<Type>::stackType(int stackSize){
   if (stackSize <= 0){
      cout << "Size of the array to hold the stack must be positive" << endl;
      cout << "Creating an array of size 100." << endl;
      maxStackSize = 100;
   } else {
      maxStackSize = stackSize;         // Set the stack size to the value specified by the parameter stackSize
   }
   stackTop = 0;                        // Set stackTop to 0
   list = new Type[maxStackSize];       // Create the array to hold the stack elements     
}// end Constructor


template <class Type>// Function to make a copy of otherStack. 
void stackType<Type>::copyStack(const stackType<Type>& otherStack){
   delete [] list;
   maxStackSize = otherStack.maxStackSize;
   stackTop = otherStack.stackTop;
   
   list = new Type[maxStackSize];
   
   for (int j = 0; j < stackTop; j++)   // Copy otherStack into this stack
      list[j] = otherStack.list[j];
}// end copyStack


template <class Type>// Copy constructor
stackType<Type>::stackType(const stackType<Type>& otherStack){
   list = NULL;
   copyStack(otherStack);
}// end copy constructor 


template <class Type>// Destructor
stackType<Type>::~stackType(){
   delete [] list;                      // Deallocate the memory occupied by the array
}// end destructor 


template <class Type>
const stackType<Type>& stackType<Type>::operator=(const stackType<Type>& otherStack){
   if (this != &otherStack){            // Avoid self-copy
      copyStack(otherStack);
   }
   return *this;
}// end operator= 


// Two stacks are the same if:
// - They have the same length
// - Each element is the same
// Returns true if that is the case
// Returns false if anything else
//
// Compare the length, if not same return false, and end. If true, it will move to next
// In a loop, do comparision of each element (==), if any of them are false, return false.
// 
// Outside loop return true, length and all elements have been compared


template <class Type>// Function to make a copy of otherStack. 
bool stackType<Type>::operator==(const stackType<Type>& otherStack) const{ //change to be == not copystack

   // compare lengths
   if (sizeof(list) != sizeof(otherStack.list)) {
      cout << "Different Sized" << endl;
      return false;
   }
   
   // compare stacks elementwise
   for (int j = 0; j < sizeof(list); j++){   // Copy otherStack into this stack
      if(list[j] != otherStack.list[j]){
         cout << "Different elements" << endl;
         return false;
      }
   }
   cout << "The stacks have the same length of elements and same element type" << endl;
   return true;
     
}// end operator==

# endif