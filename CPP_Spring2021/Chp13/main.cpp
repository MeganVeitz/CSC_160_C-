// Meg Veitz

#include <iostream>
#include "rectangleType.cpp"

using namespace std;


int main(){
    rectangleType rec1 = rectangleType(9, 5);
    cout << "Rectangle 1 is: " << rec1 << endl;
    rectangleType rec2 = rectangleType(4, 3);
    cout << "Rectangle 2 is: " << rec2 << endl;
    
    
    rectangleType test = rec1 - rec2;
    cout << "Rectangle 1 is: " << rec1 << endl;
    cout << "Rectangle test is: " << test << endl;
    
    bool testRelationship = rec1 <= rec2;
    cout << "Is Rectangle 1 <= Rectangle 2: " << testRelationship << endl;
    
    testRelationship = rec1 < rec2;
    cout << "Is Rectangle 1 < Rectangle 2: " << testRelationship << endl;

    testRelationship = rec1 >= rec2;
    cout << "Is Rectangle 1 >= Rectangle 2: " << testRelationship << endl;

    testRelationship = rec1 > rec2;
    cout << "Is Rectangle 1 > Rectangle 2: " << testRelationship << endl;

    rec1++;
    cout << "Rectangle 1 new length and width is: " << rec1 << endl;
    rec2--;
    cout << "Rectangle 2 new length and width is: " << rec2 << endl;
    
    testRelationship = rec1 == rec2;
    cout << "Rectangle 1 == Rectangle 2: " << testRelationship << endl;
    testRelationship = rec1 != rec2;
    cout << "Rectangle 1 != Rectangle 2: " << testRelationship << endl;
   
    return 0;
}