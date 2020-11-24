// Section CSC160 - Computer Science I: C++
// File Name:  Tri_DimEx_45.cpp
// Student: Meg Veitz
// Homework Number: Lab 5, Ex4.5
// Description: create a program that draws a diamond or a triangle ith a size that the user selets 
// using a specific character that will be entered at the keyboard.
// Last Changed: ability to print the bottom triangle 

#include <iostream>
#include <string>
using namespace std;


void instructions(){
   cout << "**********************************************************"<< endl;
   cout << "**               Welcome to Dimond Slayer               **"<< endl;
   cout << "**                                                      **"<< endl;
   cout << "** This game allows you to draw a triangle or a diamond **"<< endl;
   cout << "**                                                      **"<< endl;
   cout << "**   You will be prompted with a menu with 3 choices:   **"<< endl;
   cout << "**  Enter 1 for triangle, 2 for diamond, and 3 to quit  **"<< endl;
   cout << "**                                                      **"<< endl;
   cout << "**********************************************************"<< endl;
   return; 
}

int menu(){
   int input;
   cout << "**                                                      **"<< endl;
   cout << "**               Enter 1 to draw a Triangle             **"<< endl;
   cout << "**               Enter 2 to draw a Diamond              **"<< endl;
   cout << "**               Enter 3 to Quit                        **"<< endl;
   cout << "**                                                      **"<< endl;

  do{
   cin >> input;
   
   switch(input){
      case 3:
         cout << "Quit, goodbye!";
         return 3;        
      case 1:
         cout << "Triangle is a fantastic choice. \n" << endl;
         return 1;
      case 2:
         cout << "Diamond is a wonderful choice. \n" << endl;
         return 2;
      default:
         input = 0;
         cout << "Invalid selection"<<endl;
         cout << "\n\n please select a valid option!" << endl;
         
    }//end switch
  }while (input == 0); //end do while
  return 0;
} //end menu

int get_size(){
   int input;
   cout << "What size would you like your shape? " << endl;
   cin >> input;
   return input;
} //end get_size

char get_char(){
   char input;
   cout << "What character would you like your shape? " << endl;
   cin >> input;
   return input;
} //end get_char

void draw_triangle(int size, char c){
   int spaces;
   int center;
   int characters;
   center = size - 1;
   
   for (int i = 0; i < size; i++){
      //cout << i << " " << center << " " << size << endl;
      spaces = center - i;
      characters = i + 1 + i;
      for (int j = 0; j < spaces; j++){
         cout << " ";
      }
      for (int j = 0; j < characters; j++){
         cout << c;
      }
   cout << endl;
   }
} // end draw_triangle

void draw_bottom(int size, char c){
   int center = size -1;
   int spaces = 1;
   int triangle = (size-1) *2 +1;
   int characters = triangle - 2;
   //lines
   //cout << characters << " " << triangle << " " << spaces << endl;
   for (int i = 1; characters >= 0; i++){
      //spaces
      for (int j = 0; j < spaces; j++){
         cout << " ";
      }
      //characters
      for (int j = 0; j < characters; j++){
         cout << c;
      }
   cout << endl;
   characters = characters - 2;
   spaces = spaces + 1;
   }
} //end draw_bottom

int main( ){
   int menuinput;
   int sizeInput;
   char charInput;
   instructions();
   menuinput = menu();
      if (menuinput == 3){
         return 0;
      }
   sizeInput = get_size();
   charInput = get_char();
   cout << "You choose the character " << charInput << " with a size of " << sizeInput << endl;
   draw_triangle(sizeInput, charInput);
      if (menuinput == 2){
         draw_bottom(sizeInput, charInput);
      }
}

