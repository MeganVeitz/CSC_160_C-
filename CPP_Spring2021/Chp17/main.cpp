// Meg Veitz
// 4/20/21
// Two stacks of the same type are the same if they have the same number of elements
// and their elements at the corresponding positions are the same. 
// Overload the relational operator == for the class stackType that returns true if two stacks of the same type are the same;
// it return false otherwise. 
// Also, write the definition of the function template to overlaod this operator. 
// References: https://stackoverflow.com/questions/40225008/c-overload-operator-in-mystack-h
// 
#include <iostream>
#include "myStack.cpp"

using namespace std;

void testCopyConstructor (stackType<int> otherStack);

int main(){
   stackType<int> stack(50);
   stackType<int> copyStack(50);
   stackType<int> dummyStack(100);
   
   stack.initializeStack();
   stack.push(23);
   stack.push(45);
   stack.push(38);
   copyStack = stack;   // copy stack into copyStack
   
   cout << "The elements of copyStack: ";
   
   while (!copyStack.isEmptyStack()){   // print copyStack
    cout << copyStack.top() << " ";
    copyStack.pop();
   }
   cout << endl;
   
   copyStack = stack;
   testCopyConstructor(stack);   //test the copy constructor
   
   if(!stack.isEmptyStack()){
      cout << "The original statck is not empty." << endl;
      cout << "The top element of the original stack: " << copyStack.top() << endl;
   }   
   
   dummyStack = stack;  //copy stack into dummyStack
   cout << "The elements of dummyStack: ";
   
   // print dummyStack
   while (!dummyStack.isEmptyStack()){   
      cout << dummyStack.top() << " ";
      dummyStack.pop();
   }
   cout << endl;
   
   // print Stack   
   cout << "The elements of Stack: ";
   while (!stack.isEmptyStack()){   
      cout << stack.top() << " ";
      stack.pop();
   }
   cout << endl;
   
      
   bool Equals = dummyStack==stack;
   cout << "Are they equal? (1 is true, 0 is false): ";
   cout << Equals << endl;

   return 0;
}

void testCopyConstructor(stackType<int> otherStack){
   if(!otherStack.isEmptyStack()){
      cout << "otherStack is not empty." << endl;
      cout << "The top element of otherStack: " << otherStack.top() << endl;
   }
}