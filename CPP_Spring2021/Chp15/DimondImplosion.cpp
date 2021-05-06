// Write a recursive function taht takes s a parameter a nonnegative integer and generates the following patern of stars. 
// If the nonnegative integer is 4, then the pattern generated is:
// ****
// ***
// **
// *
// *
// **
// ***
// ****
// Also, write a program taht promps the user ot enter the number of lines in the pattern and uses the recusive function to generate the pattern. 
// For esample, specifying 4 as the number of lines gernates the above pattern. 

#include <iostream>
#include <string>
using namespace std;

void instructions(){
   cout << "****************************************************************************"<< endl;
   cout << "**                       Welcome to Hourglass Implosion                   **"<< endl;
   cout << "**                                                                        **"<< endl;
   cout << "**             You will be prompted with a menu with two choices:         **"<< endl;
   cout << "**  Enter 1 to select you choice in charater type and length or 2 to quit **"<< endl;
   cout << "**                                                                        **"<< endl;
   cout << "****************************************************************************"<< endl;
   return; 
}

int menu(){
   int input;
   cout << "**                                                      **"<< endl;
   cout << "**               Enter 1 to draw a Hourglass            **"<< endl;
   cout << "**               Enter 2 to Quit                        **"<< endl;
   cout << "**                                                      **"<< endl;

  do{
   cin >> input;
   
   switch(input){
      case 2:
         cout << "Quit, goodbye!";
         return 2;        
      case 1:
         cout << "Hourglass Implosion time. \n" << endl;
         return 1;
      default:
         input = 0;
         cout << "Invalid selection"<<endl;
         cout << "\n\n please select a valid option!" << endl;
         
    }//end switch
  }while (input == 0); //end do while
  return 0;
} //end menu

int get_size(){
   while(true){
      int input;
      cout << "What size would you like your shape? " << endl;
      cin >> input;
      if (input > 0){
         return input;
      }
      cout << "Need a positive integer, try again." << endl;
   }
} //end get_size

char get_char(){
   char input;
   cout << "What character would you like your shape? " << endl;
   cin >> input;
   return input;
} //end get_char

int draw_hourglass(int size, char c){
   
   cout << string(size, c) << endl;
   if (size == 1){
      cout << c << endl;
      return 0;
   }
   draw_hourglass(size-1, c);
   cout << string(size, c) << endl;
   return 1;
} // end draw_hourglass


int main( ){
   int menuinput;
   int sizeInput;
   char charInput;
   
   while(true){
      instructions();
      menuinput = menu();
      if (menuinput == 2){
         return 0;
      }
      sizeInput = get_size();
      charInput = get_char();
      cout << "You choose the character " << charInput << " with a size of " << sizeInput << endl;
      draw_hourglass(sizeInput, charInput);
   }// end while
}// end main
