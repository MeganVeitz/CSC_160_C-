// Meg Veitz
// 4/10/21

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include "addressList.h"
using namespace std;


AddressList::AddressList(){
   if (head!= NULL){
        curr = head;
        temp = head;
        
        if (head->next==head){
            delete head;
        }else {
            do {
                curr = curr->next;
                delete temp;
                temp = curr;
            }
            while (curr != head);
            delete head;
        }
        curr = NULL;
        temp = NULL;
        head = NULL;
    }
}


void AddressList::AddNode(int addData){
   cout << "Adding: " << addData << endl;

   nodePtr n = new node;   //n point to new node
   n->next = NULL;         //Find n and make new node null
   n->data = addData;
   if(head != NULL){       //if a list already exsists
      cout << "We have a node already" << endl;
      curr = head;
      while(curr->next != NULL){ //seek to the end node
         curr = curr->next;
      }                          
      curr->next = n;            // set the next pointer to the node just made
   }else{                        // if no head, then set it to new node made
      cout << "No head node yet" << endl;
      head = n;
   }
}


void AddressList::PrintAddressList(){
   curr = head;
   //cout << "Printing"<< endl;
   while(curr != NULL){
      cout << "Node's data: " << curr->data << " Pointer: " << curr->next << endl;
      curr = curr->next;   //advance pointer
   }
}


void AddressList::SaveToFile(string addressfile){
   curr = head;
   ofstream outfile;

   while(curr != NULL){
      outfile.open("addressfile.txt", ios_base::app); //append mode
      outfile << "your data: " << curr->data << endl;
      outfile.close();
      curr = curr->next;   //advance pointer
   }
}


void AddressList::DeleteNode(int delData){
   nodePtr delPtr = NULL;
   temp = head;
   curr = head;
   
   if(head->data == delData){
      if(head->next != NULL){
         head = head->next;
         return;
      }
      head = NULL;
      return;
   }
   
   while(curr->next != NULL){ //seek to the end node
      curr = curr->next;
      if(curr->data == delData){ // found what we want to delete
         if(curr->next != NULL){
            temp->next = curr->next;
            return;
         }
         temp->next = NULL;
         return;
      }
      temp = curr;
   } 
}
