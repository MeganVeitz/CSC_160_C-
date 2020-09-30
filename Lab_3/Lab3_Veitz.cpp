// Section CSC160 - Computer Science I: C++
// File Name: Lab_3
// Student: Meg Veitz
// Homework Number: lab3
// Description: Write a math equation for a painter to solve how much paint to buy for a specific job
// N = ((P * Nc * S) + W) * ( 1 + 1 / Nd)
// Last Changed: figured out the calculation error due to not having a static_cast<double> in the equation and final result
 

#include <iostream>
using namespace std;

int main( )
{
   int N;                     //N
	float numGallons;          //N converted to float 
   const float IPFEE = 0.004; //P
   int numChildren;           //Nc 
   float surfaceArea;         //S
   const double WASTE = 1.20; //W
   int daysToComplete;        //Nd 
  
  
  
  
   
   cout<<"Welcome to the IPU calculator where buying the correct amount of paint has never been easier!\n";
   cout<<"\n";
   
   //enter in Nc
   cout<<"Enter the number of children who live at the vicinity to be painted:\n";
   cin>>numChildren;
   
   //enter in S
   cout<<"Enter the surface area to be painted:\n";
   cin>>surfaceArea;
   
   //enter in Nd
   cout<<"Enter the number of days expected to complete a job:\n";
   cin>>daysToComplete;
   
   //need this if statement, because if the number of children is 0 it will result in a zero. 
   //If you multiply anything by 0 it's going to be 0 and mess up computing how much paint you'll need for the surface area you are inputing.
   //So, creating an if statement to examine a statement of: if the input is less than 1, make input equal to one.
   //This will ensure it computes the equation with the surface area correctly.
   if (numChildren < 1)
      { 
      numChildren = 1;
      }

   //added casting so the equation would compute correctly (Every decimal counts)
   numGallons = ((IPFEE * numChildren * surfaceArea) + WASTE) * (1 + 1 / static_cast<double>(daysToComplete));
  

   //added casting to the final result to show correct amount of paint and round up for safety sake
   N = static_cast<double>(numGallons + .5);
   
   //display the total
   //added plus one to the end of N to make up for the possible rounding error
   cout<<"The number of gallons of paint to buy for this job is " <<N<<endl;
   
   cout<<"\n";
   cout<<"Thanks for using the IPU calculator. Wasn't that easy!"<<endl;
   
 
    //system("Pause");
    return 0;
}