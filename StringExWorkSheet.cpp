// Process is to go through a set of directions and minipulate each input and output sightly each time. 
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main( )
{
	const char STUDENT[25] = "CSC160 Student Again";
	//char firstName[15];
   //int age;
   
   string name;
   string age;
   
		//cout << "This program was written by CSC 160 Student.";
      cout << "This program was written by CSC160 Student.\n";
		//cout << " This program was written by " << STUDENT;
      cout << "This program was written by " << STUDENT << endl;
		cout << " Enter your first name: \n";
		//cin >> firstName;
      getline(cin, name);
		cout << "Enter your age: \n";
		//cin >> age;
      getline(cin, age);
		//cout << "Hello " << firstName << " How does it feel to be "
		 //<< age << " years old?";
      //cout << "Hello " <<firstName << " How does it feel to be" << setw(4) << age << " years old?";
      cout << "Hello " << name << " How does it feel to be" << setw(4) << age << " years old?";
}
//output commet #1
// The ouput displays "This program was written by CSC 160 Student." and displays 
// "This program was written by CSC 160 Student again" because 
// we are getting that info from the constant char array above.

//output comment #2
// The comments are displayed on seperate lines in the terminal. 

//output comment #3
// divided up the comments to display on seperate lines and additionally
// ask the user for input on a seperate line.

//output comment #4
// the setw(4) doesn't seem to making a different in the output statement.

//output #5
// used getline to input data from user and created two string variables to use with the getline.