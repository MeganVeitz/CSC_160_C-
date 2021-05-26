// Meg Veitz
// 4/20/21
// Two stacks of the same type are the same if they have the same number of elements
// and their elements at the corresponding positions are the same. 
// Overload the relational operator == for the class stackType that returns true if two stacks of the same type are the same;
// it return false otherwise. 
// Also, write the definition of the function template to overlaod this operator. 
// ADT = abstract data type

template <class Type>
class stackADT{
   public:
      virtual void initializeStack() =0;
         // Method to initialize the stack to an empty state
                  // Postcondition: Stack is empty.
         
      virtual bool isEmptyStack() const = 0;
         // Function to deterrmine whether the stack is empty.
                  // Postcondition: REturns true if the stack is empty, otherwise returns false.
         
      virtual bool isFullStack() const = 0;
         // Function to determine whether the stack is full.
                  // Postcondition: Returns true if the stack is full, otherwise returns false.
      
      virtual void push(const Type& newItem) = 0;
         // Function to add newItem to the stack. 
                  // Precondition: The stack exists and is not empty.
                  // Postcondition: The stack is changed and newItem is added to the top of the stack. 
      
      virtual Type top() const = 0;
         // Function to return the top element of the stack.
                  // Precondition: The stack exists and is not empty.
                  // Postcondition: If the stack is empty, the program terminates; otherwise, the top element of the stack is returned. 
                  
      virtual void pop() = 0;
         // Function to remove the top element of the stack.
                  // Precondition: The stac exists and is not empty.
                  // Postcondition: The stack is changed and the top element is removed from the stack. 
};