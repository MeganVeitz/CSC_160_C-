// Meg Veitz
// 4/10/21

#ifndef ADDRESSLIST_H 
#define ADDRESSLIST_H
#include <string>
#include <iostream>
using namespace std;


class AddressList{
   private:
      struct node{
         int data;
         node* next; //next node in the list
      };
      
      typedef struct node* nodePtr;
      
      nodePtr head;
      nodePtr curr;
      nodePtr temp;
   public:
      AddressList();
      void AddNode(int addData);
      void DeleteNode(int delData);
      void PrintAddressList();
      void SaveToFile(string addressfile);
};

#endif
