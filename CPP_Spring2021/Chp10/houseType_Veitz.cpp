// Meg Veitz 2/27/21
// 6th Edition, Chp 10, Programming Excersice 1
// Define the class houseType with the same components as the struct houseType in chapter 9, 
// and add member funtions to manipulate the data memebers.  
// Write a program to illustrate how to use the class houseType.

#include <iostream>
#include <string>
using namespace std;

class houseType{
public:
   void set();
   void display();
   float add_sqrft(houseType home1, houseType home2);
   
private:
   string style;
   int numOfBedrooms;
   int numOfBathrooms;
   int numOfCarsGarage;
   int yearBuilt;
   int finishedSquareFootage;
   double price;
   double tax;
};


int main(){
   float total_sqrft = 0; 
   houseType home1, home2;
   
   home1.set();
   home1.display();
   
   home2.set();
   home2.display();
   
   total_sqrft = home1.add_sqrft(home1 , home2);
   cout << "The total square footage for both the houses is: " << total_sqrft << " sq ft." << endl;
}

void houseType::set(){
   cout << "Enter the house style \n";
   cin >> style;
   
   cout << "Enter the number of bedrooms \n";
   cin >> numOfBedrooms;
   
   cout << "Enter the number of bathrooms \n";
   cin >> numOfBathrooms;
   
   cout << "Enter the number of cars spots in the garage \n";
   cin >> numOfCarsGarage;
   
   cout << "Enter the year the house was built \n";
   cin >> yearBuilt;
   
   cout << "Enter the finished square footage \n";
   cin >> finishedSquareFootage;
   
   cout << "Enter the price of the house \n";
   cin >> price;
   
   cout << "Enter the tax percentage of the house \n";
   cin >> tax; 
}


float houseType::add_sqrft(houseType home1, houseType home2){
    float total_sqrft = 0; 
    total_sqrft = home1.finishedSquareFootage + home2.finishedSquareFootage;
    return total_sqrft;
}


void houseType::display(){
   cout << "The house style is: " << style << endl;
   cout << "The number of bedrooms is: " << numOfBedrooms << endl;
   cout << "The number of bathrooms is: " << numOfBathrooms << endl;
   cout << "The number of car spots in the garage is: " << numOfCarsGarage << endl;
   cout << "The year the house was built is: " << yearBuilt << endl;
   cout << "The finished square footage is: " << finishedSquareFootage << endl;
   cout << "The price of the house is: " << price << endl;
   cout << "The tax percent is: " << tax << "%" << endl;
}