// Meg Veitz
// 4/20/21
// Two stacks of the same type are the same if they have the same number of elements
// and their elements at the corresponding positions are the same. 
// Overload the relational operator == for the class stackType that returns true if two stacks of the same type are the same;
// it return false otherwise. 
// Also, write the definition of the function template to overlaod this operator. 


#include <iostream>
#include <cassert>
#include "stackADT.h"

using namespace std;


template <class Type>
class stackType: public stackADT<Type>{
public:
   const stackType<Type>& operator=(const stackType<Type>&);
      // Overload the assignment operator.
      
   void initializeStack();
      // function to initialize the stack to an empty state.
      // Postconition: stackTop = 0;
   
   bool isEmptyStack() const;
      // Function to determine whether the stack is empty.
      // Postcondition: returns true if the stack is empty, otherwise returns false.
   bool isFullStack() const;
      // Function to determine whether the stack is full.
      // Postcodition: Returns true if the stack is full, otherwise returns false.
   
   void push(const Type& newItem);
      // Function to add newItem to the stack.
      // Precondition: The stack exists and is not full.
      // Postcondition: The stack is changed and newItem is added to the top of the stack. 
   
   Type top() const;
      // Function to return the top element of the stack.
      // Precondition: The stack exists and is not empty.
      // Postcondition: The stack is change and the top element is remeoved from the stack. 
   
   void pop();
      // Funciton to remove the top elemnt of the stack.
      // Precondition: The stack exists and is not empty. 
      // Postcondition: The stack is changed and the top element is removed from the stack. 
   
   bool operator==(const stackType<Type>& otherStack) const;
      // Overload operator==
   
   stackType(int stackSize = 100);
      // Constructor
      // Create an array of the size stackSize to hold the stack elements.
      // The default stack size is 100.
      // Postcondition: The variable list containes the base address of the array, stackTop = 0, and maxStackSize = stackSize.
   
   stackType (const stackType<Type>& otherStack);
      // Copy constructor
      
   ~stackType();//
      // Destructor
      // Remove all the elements from the stack.
      // Postcondition: The array (list) holding the stack elements is delete. 
   
   private:
      int maxStackSize; // variable to store the maximum stack size
      int stackTop;     // variable to point to the top of the stack 
      Type *list;       // pointer to the array that holds the stack elements
      
      void copyStack(const stackType<Type>& otherStack);
      // Function to make a copy of otherStack.
      // Postcondition: A copy of otherStack is creted and assigned to this stack. 
};
