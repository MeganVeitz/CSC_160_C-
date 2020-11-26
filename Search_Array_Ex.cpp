//search an array
# include <iostream>
using namespace std;

int main(){
   int pollResults[15] = {35 ,120, 46, 87, 69, 48, 25, 65, 43, 37, 36, 48, 94, 51, 62};
   
   int minutes = 0;
   int numOver = 0;
   
   cout << "Search for minutes over: " ;
   cin >> minutes;
   
   //search the array
   for (int sub = 0; sub < 15; sub++){
      if (pollResults[sub] > minutes)
      
         numOver ++;
   }

   cout << endl << "Number who spend more that " << minutes << " minutes" << endl;
   cout <<  "per day on Facebook " << numOver << endl;
   
return 0; 
}// end main