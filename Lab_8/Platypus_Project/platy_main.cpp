// Section CSC160 - Computer Science I: C++
// File Name:  plat_main.cpp
// Student: Meg Veitz
// Homework Number: Lab 8
// Description: Mr. Burns is trying to cover up his tracks and needs our help to save his reputation and his  money.
//              To accomplish this goal we will be looking at attributes of the platyuses to determinr if Mr. Burns is
//              breaking any note worth environmental concerns. 
// Last Changed: 

#include <iostream>
#include <random>
#include "platyclass1.h" 

using namespace std;

int main(){
   Platypus Sammy;
      Sammy.set_alive(1);
      Sammy.set_gender('F');
      Sammy.set_Age(5);
      Sammy.set_mutant(0);
      Sammy.set_nameString("Sammy");
      Sammy.set_weight(8);
      Sammy << Sammy << endl;
      Sammy.eat();
      Sammy.age_me();
      
      cout << Sammy << endl;

   
   Platypus Tommy;
      Tommy.set_alive(1);
      Tommy.set_gender('M');
      Tommy.set_Age(3);
      Tommy.set_mutant(0);
      Tommy.set_nameString("Tommy");
      Tommy.set_weight(4);
      Tommy << Tommy << endl;
      Tommy.eat();
      Tommy.age_me();
      
      cout << Tommy << endl;

   
   Platypus Bobby;
      Bobby.set_alive(1);
      Bobby.set_gender('M');
      Bobby.set_Age(1);
      Bobby.set_mutant(0);
      Bobby.set_nameString("Bobby");
      Bobby.set_weight(0.6);
      Bobby << Bobby << endl;
      Bobby.eat();
      Bobby.age_me();
      
      cout << Bobby << endl;
      
   Platypus Meggy;
      Meggy.set_alive(1);
      Meggy.set_gender('F');
      Meggy.set_Age(15);
      Meggy.set_mutant(0);
      Meggy.set_nameString("Meggy");
      Meggy.set_weight(6);
      Meggy << Meggy << endl;
      Meggy.eat();
      Meggy.age_me();
      
      cout << Meggy << endl;
     
     
   return 0;
}