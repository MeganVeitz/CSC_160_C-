#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

char current;

class Person{
   public:
      Person(string newName){
          name = newName;
          nextPerson = 0;
      }
      
      string name;
      string IDNumb;
      Person *nextPerson;
};


Person* pHeadNode;


void DrawMenu()
{
cout << "------------Menu-------------" << endl;
cout << "1. Enter a Person to the List" << endl;
cout << "2. Delete a Person from the List"  << endl;
cout << "3. Change a Person's name in the List" << endl;
cout << "4. Display Entries" << endl;
cout << "5. Locate Person by ID Number" << endl;
cout << "6. Locate Person by Name" << endl;
cout << "7. Exit the program"  << endl;
cout << "" << endl;
cout << "Your choice: ";
}

Person* FindName(string name){
if (pHeadNode){
    Person *pCurrentNode = pHeadNode;
    while(pCurrentNode && pCurrentNode-> name != name){
        if (pCurrentNode->name==name)
            return pCurrentNode;

        pCurrentNode = pCurrentNode-> nextPerson;
    }
}
return 0;
}


void InsertNewNode(Person* pNewNode){
  if (!pHeadNode || (pNewNode->name < pHeadNode->name)){
    pNewNode->nextPerson = pHeadNode;
    pHeadNode = pNewNode;
} else {
    Person *pCurrentNode = pHeadNode;
    Person *pPrevNode = pCurrentNode;
    while(pCurrentNode && pCurrentNode->name < pNewNode->name){
        pPrevNode = pCurrentNode;
        pCurrentNode = pCurrentNode->nextPerson;
    }
    pNewNode->nextPerson = pPrevNode->nextPerson;
    pPrevNode->nextPerson = pNewNode;
}
}

void AddNewEntry(){
string name;
string IDNumb;
cout << "Enter name of new Entry: ";
getline(cin, name);
cin.clear();
cin.sync();

getline(cin, name);

if (pHeadNode){
    if (FindName(name)){
        cout << "" << endl;
        cout << "Name already exists";
        cout << "" << endl;
        return;
    }
}

cout << "Enter ID Number for new Entry: ";
getline(cin, IDNumb);

if (pHeadNode){
    Person* pNewNode = new Person(name);
    pNewNode->IDNumb = IDNumb;

    InsertNewNode(pNewNode);
} else {
    pHeadNode = new Person(name);
    pHeadNode->IDNumb = IDNumb;

}

cout << "" << endl;
cout << "New Entry is added" << endl;
cout << "" << endl;
}

void DeleteEntry(){
string name;

if (pHeadNode){
    cin.clear();
    cin.sync();

    cout << "Enter name of Entry you want to delete: ";
    getline(cin, name);

    Person *pCurrentNode = pHeadNode;
    Person *pPrevNode = pCurrentNode;
    while(pCurrentNode && pCurrentNode->name!=name){
        if (pCurrentNode->name==name){
            break;
        }
        pCurrentNode = pCurrentNode->nextPerson;
    }

    if (pCurrentNode){
        if (pCurrentNode==pHeadNode){
            pHeadNode = pCurrentNode->nextPerson;
        } else {
            pPrevNode->nextPerson = pCurrentNode->nextPerson;
        }
        delete pCurrentNode;
    } else {
        cout << "" << endl;
        cout << "Entry is not found" << endl;
        cout << "" << endl;
    }
} else {
    cout << "" << endl;
    cout << "Address book is empty already" << endl;
    cout << "" << endl;
    return;
}
}

void ChangeEntry(){
string name;
string IDNumb;

if (pHeadNode){
    cin.clear();
    cin.sync();

    cout << "Enter name of Entry you want to edit: ";
    getline(cin, name);

    Person *pCurrentNode = pHeadNode;
    Person *pPrevNode = pCurrentNode;
    while(pCurrentNode && pCurrentNode->name!=name){
        if (pCurrentNode->name==name)
            break;

        pCurrentNode = pCurrentNode->nextPerson;
    }

    if (pCurrentNode){
        cin.clear();
        cin.sync();
        cout << "Enter name of new Entry: ";
        getline(cin, name);

        if (pHeadNode){
            if (FindName(name)){
                cout << "" << endl;
                cout << "Name already exists";
                cout << "" << endl;
                return;
            }
        }

        if (pCurrentNode==pHeadNode){
            pHeadNode = pCurrentNode->nextPerson;
        } else {
            pPrevNode->nextPerson = pCurrentNode->nextPerson;
        }
        delete pCurrentNode;

        cout << "Enter ID Number for new Entry: ";
        getline(cin, IDNumb);


        Person* pNewNode = new Person(name);
        pNewNode->IDNumb = IDNumb;


        cout << "" << endl;
        cout << "Entry is changed" << endl;
        cout << "" << endl;
    } else {
        cout << "" << endl;
        cout << "Entry is not found" << endl;
        cout << "" << endl;
    }
} else {
    cout << "" << endl;
    cout << "Address book is empty " << endl;
    cout << "" << endl;
    return;
}
}

void DisplayEntries()
{
    string getcontent;
    ifstream openfile ("list.txt");
    if(openfile.is_open()){
        while(! openfile.eof()){
            getline(openfile, getcontent);
            cout << getcontent << endl;
        }
    }
}

void SearchEntriesName(){
string name;
string IDNumb;

if (pHeadNode){
    cin.clear();
    cin.sync();

    cout << "Enter name of Entry you want to Search: ";
    getline(cin, name);

    Person *pCurrentNode = pHeadNode;
    Person *pPrevNode = pCurrentNode;
    while(pCurrentNode && pCurrentNode->name!=name){
        if (pCurrentNode->name==name){
            break;
        }
        pCurrentNode = pCurrentNode->nextPerson;
    }

    cout << pCurrentNode->name << endl;
    cout << pCurrentNode->IDNumb << endl;

}
}

void SearchEntriesIDNumb(){
string name;
string IDNumb;

if (pHeadNode){
    cin.clear();
    cin.sync();

    cout << "Enter the ID Number of the entry you want to search: ";
    getline(cin, IDNumb);

    Person *pCurrentNode = pHeadNode;
    Person *pPrevNode = pCurrentNode;
    while(pCurrentNode && pCurrentNode->IDNumb!=IDNumb){
        if (pCurrentNode->IDNumb==IDNumb)
            break;

        pCurrentNode = pCurrentNode->nextPerson;
    }

    cout << pCurrentNode->name << endl;
    cout << pCurrentNode->IDNumb << endl;

}
}


void SaveListToFile(){
ofstream outfile;

outfile.open("list.txt");

Person* pCurrentNode = pHeadNode;
while(pCurrentNode){
    Person* pNode = pCurrentNode;
    pCurrentNode = pCurrentNode->nextPerson;
    outfile << pNode->name << endl;
    outfile << pNode->IDNumb << endl;
}

outfile.close();
}

void LoadListFromFile(){
ifstream infile;

infile.open("list.txt");

string name;

while (getline(infile, name)){
    string IDNumb;
    getline(infile, IDNumb);

    if (!pHeadNode){
        pHeadNode = new Person(name);
        pHeadNode->IDNumb = IDNumb;

    } else {
        Person *pCurrentNode = pHeadNode;
        Person *pPrevNode = pCurrentNode;
        while(pCurrentNode){
            pPrevNode = pCurrentNode;
            pCurrentNode = pCurrentNode->nextPerson;
        }
        pPrevNode->nextPerson = new Person(name);
        pPrevNode->nextPerson->IDNumb = IDNumb;

    }

}


infile.close();
}
int main()
{
int choice;
bool stop = false;

LoadListFromFile();
do{
    do{
        DrawMenu();
        cin >> choice;
        if (choice<1 || choice>7)
            cout << "Incorrect choice. Try again" << endl << endl;
    }while(choice<1 || choice>7);

    switch(choice){
        case 1:
            AddNewEntry();
            break;
        case 2:
            DeleteEntry();
            break;
        case 3:
            ChangeEntry();
            break;
        case 4:
            DisplayEntries();
            break;
        case 5:
            SearchEntriesIDNumb();
            break;
        case 6:
            SearchEntriesName();
            break;
        case 7:
            cout << "Thank you for using the program" << endl;
            stop = true;
            break;
        default:

            break;
    }

}while(!stop);
SaveListToFile();

Person* pCurrentNode = pHeadNode;
while(pCurrentNode)
{
    Person* pNode = pCurrentNode;
    pCurrentNode = pCurrentNode->nextPerson;
    delete pNode;
}

return 0;
}

int main(){
   int choice;
   bool stop = false;

LoadListFromFile();
do{
    do{
        DrawMenu();
        cin >> choice;
        if (choice<1 || choice>7)
            cout << "Incorrect choice. Try again" << endl << endl;
    }while(choice<1 || choice>7);

    switch(choice){
        case 1:
            AddNewEntry();
            break;
        case 2:
            DeleteEntry();
            break;
        case 3:
            ChangeEntry();
            break;
        case 4:
            DisplayEntries();
            break;
        case 5:
            SearchEntriesIDNumb();
            break;
        case 6:
            SearchEntriesName();
            break;
        case 7:
            cout << "Thank you for using the program" << endl;
            stop = true;
            break;
        default:

            break;
    }

}while(!stop);
SaveListToFile();

Person* pCurrentNode = pHeadNode;
while(pCurrentNode){
    Person* pNode = pCurrentNode;
    pCurrentNode = pCurrentNode->nextPerson;
    delete pNode;
}

return 0;
}