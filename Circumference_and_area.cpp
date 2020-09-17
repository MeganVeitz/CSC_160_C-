//Finding circumference and area with the radius
#include <iostream>

using namespace std;
const double PI = 3.14;
int main()
{
  //Variable Declarations
  double radius;
  double area;
  double circumference;

  //Variable Initializations
  

  //Manipulating of variables
  cout << "Enter the radius: ";
  cout << endl;
  cin >> radius;
  area = PI * radius * radius;
  circumference = 2 * PI * radius;


  cout << "Circumference = " << circumference << endl;
  cout << "Area = " << area << endl;

return 0;
}
