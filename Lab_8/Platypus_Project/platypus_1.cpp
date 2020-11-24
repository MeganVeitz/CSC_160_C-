// Section CSC160 - Computer Science I: C++
// File Name:  platypus_1.cpp
// Student: Meg Veitz
// Homework Number: Lab 8
// Description: Mr. Burns is trying to cover up his tracks and needs our help to save his reputation and his  money.
//              To accomplish this goal we will be looking at attributes of the platyuses to determinr if Mr. Burns is
//              breaking any note worth environmental concerns. 
// Last Changed: 

#include <iostream>
#include <cctype>
#include <random>
#include <string>
#include <locale>
//#include "platyclass1.h" 

using namespace std;

//constructor that makes dead platypus
// Platypus(){
//    :alive(0){
//       cout << "Platypus Made" << endl;
//    }
// }

class Platypus{
   public:
      int count;
      float weight;
      short age; //months
      string name;
      char gender; //male/fem
      bool alive; //1=y, 0=n
      bool mutant;//1=y, 0=n
      string nameString;

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

};


class plat: Platypus{
    public:
    plat(char initGender, float initWeight, short initAge, string initNameString){
   if((initGender == 'M'|| initGender == 'm' || initGender == 'F' || initGender == 'f')
      && initWeight >= 0
      && initAge >= 0){
      
      weight = initWeight;
      gender = initGender;
      age = initAge;
      nameString = initNameString;
      
      alive = 1;
      mutant = 0;
      
      cout << nameString << "Platypus Made" << endl;
      cout << "Gender: " << gender << endl;
      cout << "Weight: " << weight << endl;
      cout << "Age: " << age << " months" << endl;
      cout << "Alive: " << alive << endl;
      cout << "Mutant: " << mutant << endl;
      }
      else{
         cout << "Invalid Data" << endl;
      }
}


void print(){
   cout << "Name:  " << nameString << endl;
   cout << "Gender:  " << gender << endl;
   cout << "Age:  " << age << " months" <<endl;
   cout << "Weight:  " << weight << " lbs" << endl;
   cout << "Alive:  " << alive << "  (1=Yes 0=No)" << endl;
   cout << "Mutant:  " << mutant << "  (1=Yes 0=No)" << endl;
}


void age_me(){
   if (alive == 0){
      cout << "The platypus has died, poor fella." << endl;
      return;
   }
   
   cout << "Platpus is aging!" << endl;
      int chance;
      int weight_percent;
      int death_rand;
      
      age += 1;
      
      //possiblity of becoming mutant (by 2%)
      chance = (rand() % 50) +1;
      if(chance == 2){
         mutant = 1;
         cout << "Platypus has mutated!" << endl;
      }
      
      if (weight >= 10){
         cout << "The aged platypus has died, poor fella." << endl;
         alive = false;
      }
      
      //10% of weight = Death
      weight_percent = weight * 10;
      
      //rand num 1-100
      death_rand = (rand() % 100) + 1;
      
      //if rand num less or equal to weight time 10 = Death
      if(death_rand <= weight_percent){
         alive = 0;
         cout << "The aged platypus has died, poor fella." << endl;
      }  
}//end age_me


void fight(Platypus & p2){
   if(alive == 0){
      cout << "Your Platypus can fight" << endl;
      return;
   }
   
   if(p2.get_alive()==0){
      cout << "That Platypus is dead." << endl; 
   }
   
   cout << "Platypus fight!" << endl;
   float p2_weight = p2.get_weight();
   float fight_ratio = (weight / p2_weight) * 50;
   int chance = (rand() % 100)-1; //fuck idk
   if (chance  < fight_ratio){
      p2.make_dead();
      cout << "The second platypus has died in the fight." << endl;
   }
   else{
      alive = 0;
      cout << "Your platypus died in the fight." << endl;
   }
}//end fight


void eat(){
   if(alive == 0){
      cout <<"Platypus is already dead." << endl;
      return;
   }
   cout << "Stuffing face ..." << endl;
   
   //rand num 1-50
   float chance = (rand()%50)+1;
   chance = chance/1000; 
   weight = (weight*chance) + weight;
   cout << "New weight is: " << weight << endl;
}// end eat


void hatch(){
   string new_name;
   // rand gender
   int chance = (rand()%2);
   if (chance == 0) {
      set_gender('M');
   }
   else{
      set_gender('F');
   }
   
   cout << "New Platypus gender is: " << get_gender() << endl;
   cout << "Choose name: " << endl;
   cin >> new_name;
   
   set_nameString(new_name);
   //weight chance
   float new_weight = ((rand()%100)+1)/100;
   set_weight(new_weight);
   set_age(0);
   cout << "New platypus made" << endl;
}//end hatch

void make_dead(){
   set_alive(0);
}

//Access
float get_weight()const{
   return weight;
}

bool get_age()const{
   return age;
}

bool get_alive()const{
   return alive;
}

string get_nameString()const{
   return nameString;
}

char get_gender()const{
   return gender;
}

bool get_mutant()const{
   return mutant;
}

//Sets
void set_weight(float newWeight){
   weight=newWeight;
}

void set_age(short newAge){
   age=newAge;
}

void set_nameString(string newString){
   nameString=newString;
}

void set_gender(char newGender){
   gender = newGender;
}

void set_mutant(bool newMutant){
   mutant = newMutant;
}

void set_alive(bool newAlive){
   alive = newAlive;
}
};