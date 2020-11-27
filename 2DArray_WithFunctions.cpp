//Displays data from orders per region and month.
//File Name: 2DArrayOrdersWithForLoops.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void displayArray(int nums[][3], int numRegions);

int main()
{
	//declare and initialize array
	
	int const ROW_COUNT = 4;
	int const COLUMN_COUNT = 3;
	
	int orders[ROW_COUNT][COLUMN_COUNT] = {0};
	int total = 0;
	
	//enter data into the array
		for(int region =0; region < 4; region++)
			//nest for loop to do columns
			for(int month = 0; month < 3; month++)
			{
				cout << "Number of orders for Region " 
			  		 << region + 1 << ", Month "
			  	     << month + 1 << ": ";
				cin >> orders[region][month];
		
			} //end for

	
	displayArray(orders, 4);
	
	
	return 0;
}

//funciton defintion

void displayArray(int nums[][3], int numRegions)
{
	for (int region = 0; region < numRegions; region++)
	{
		cout << "Region:" << region + 1 << ": " << endl;
		for (int month =0; month < 3; month++)
		{
			cout << "     Month " << month + 1 << ": ";
			cout << nums[region][month] << endl;
		}// end inner for
	}// end outer for	
}// end displayArray

double rowTotal(int table[][3], int row){
   int total = 0;
   for (int j = 0; j < 3; j++){
      total = total + table [row][j];
   }
   return total;
}