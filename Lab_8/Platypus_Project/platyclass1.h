// Section CSC160 - Computer Science I: C++
// File Name:  platy_class1.cpp
// Student: Meg Veitz
// Homework Number: Lab 8
// Description: Mr. Burns is trying to cover up his tracks and needs our help to save his reputation and his  money.
//              To accomplish this goal we will be looking at attributes of the platyuses to determinr if Mr. Burns is
//              breaking any note worth environmental concerns. 
// Last Changed: 

#include <iostream>
#include <random>


#ifndef PLATY_PROG2_H_INCLUDED
#define PLATY_PROG2_H_INCLUDED


using namespace std;


class Platypus{
   public:
      int count;
      float weight;
      short age; //months
      string name;
      char gender; //male/fem
      bool alive; //1=y, 0=n
      bool mutant;//1=y, 0=n
      

      //Display
      void print(ostream & out)const;
      
      //Main Funcitons
      void age_me();
      void fight(Platypus & p2);
      void eat();
      void hatch();
      
      //Access
      short get_age()const;
      char get_nameString()const;
      char get_gender()const;
      float get_weight()const;
      bool get_alive()const;
      bool get_mutant()const;
      
      //Set
      void make_dead();
      void set_age(short newAge);
      void set_nameString(string newString);
      void set_gender(char newGender);
      void set_weight(float newWeight);
      void set_alive(bool newAlive);
      void set_mutant(bool newMutant);

   private:
      float weight = 0;
      short age = 0;
      char nameString = '\0';
      char gender = '\0';
      bool alive=0;
      bool mutant = 0;
      
};//end class

//   ostream & operator<<(ostream & out, const Platypus & p);
   
//   #endif


   