// Meg Veitz
// 5/01/2021
// Write the definition of the function nodeCount, that returns the number of full nodes in the binary tree.
// Add this function to the binaryTreeType and create a program to test this function. 
// Resources: https://www.includehelp.com/data-structure-tutorial/find-the-number-of-nodes-in-a-binary-search-tree.aspx
// https://stackoverflow.com/questions/33228660/how-to-count-the-total-number-of-nodes-in-binary-tree
// D.S. Malik

#include <iostream>
#include <queue>
using namespace std;
  
struct binaryTreeType{
   int data;
   struct binaryTreeType* left, *right;
};

int nodeCount(struct binaryTreeType* node){
   // Check to see if tree is empty
   if (!node){
      cout << "Nothing, tree not established yet." << endl;
      return 0;
   }
   
   queue<binaryTreeType *> myqueue;
   // Traverse using level order traversing
   int result = 0;
   myqueue.push(node);
   while(!myqueue.empty()){
      struct binaryTreeType *temp = myqueue.front();
      myqueue.pop();
      if(temp->left && temp->right){
         result++;
      }
      if(temp->left != NULL){
         myqueue.push(temp->left);
      }
      if(temp->right != NULL){
         myqueue.push(temp->right);
      }
   }
   return result;
}// end nodeCount  
  

// allocates new Node with data and pointers  
struct binaryTreeType* newNode(int data){
   struct binaryTreeType* node = new binaryTreeType;
   node->data = data;
   node->left = node->right = NULL;
   return(node);
}  
  
  
// Test program  
int main(void){
/* Visual of Binary Tree nodes = 1 below

     10
     / \
   20    30
  / \     
 40  50   
   \   \  
    60 70 
*/
    struct binaryTreeType *root = newNode(10);
    root->left                 = newNode(20);
    root->right                = newNode(30);
    root->left->left           = newNode(40);
    root->left->right          = newNode(50);
    root->left->left->right    = newNode(60);
    root->left->right->right   = newNode(70);
    cout << "Frist  Tree Count is: " << nodeCount(root);
    
   
/* Visual of Binary Tree nodes = 3 below

        2
       / \
     7    5
      \    \
      6     9
     / \   / \
    1  11 4   3
*/
       
   struct binaryTreeType *root2 = newNode(2);
   root2->left               = newNode(7);
   root2->right              = newNode(5);
   root2->left->right        = newNode(6);
   root2->left->right->left  = newNode(1);
   root2->left->right->right = newNode(11);
   root2->right->right       = newNode(9);
   root2->right->right->left = newNode(4); 
   root2->right->right->right = newNode(3); 
   cout << "\nSecond Tree Count is: " << nodeCount(root2);
   
 /* Visual of Binary Tree nodes = 5 below
 
       20
      /   \
    29     33
   /  \    / \
 13   47  2   16
 / \     / \    \
7   8   4   9    5
*/
       
   struct binaryTreeType *root3 = newNode(20);
   root3->left               = newNode(29);
   root3->left->right        = newNode(47);
   root3->left->left         = newNode(13);
   root3->left->left->right  = newNode(8);
   root3->left->left->left   = newNode(7);

   root3->right              = newNode(33);
   root3->right->right       = newNode(16);
   root3->right->right->right = newNode(5); 
   root3->right->left        = newNode(2);
   root3->right->left->right = newNode(9); 
   root3->right->left->left  = newNode(4); 
   cout << "\nThird  Tree Count is: " << nodeCount(root3);

/* Visual of Binary Tree nodes = 0 below
 
       100
       /
      62   
*/

   struct binaryTreeType *root4 = newNode(100);
   root4->left             = newNode(62);
   cout << "\nFourth Tree Count is: " << nodeCount(root4);
   
/* Visual of Binary Tree nodes = Nothing below 

*/   
   struct binaryTreeType *root5;
   cout << "\nFifth  Tree Count is: " << nodeCount(root5);
   
   return 0;
}// end Main  
