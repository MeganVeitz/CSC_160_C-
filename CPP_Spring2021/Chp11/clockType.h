// Meg Veitz 3/09/21
// 6th Edition, Chp 11, Programming Excersice 1
// clockType.h, sepcification file

// Base Class ~ parent
class clockType
{
public:
   void setTime(int hours, int minutes, int seconds);// already set times.
   void setTime();// user input
   void getTime(int& hours, int& minutes, int& seconds) const;// returns time
   void printTime() const; // print time
   void incrementSeconds();// increase by 1 sec or incement minutes by one, if seconds is >59.
   void incrementMinutes();// increase by 1 min or incement hours by one, if minutes is >59.
   void incrementHours();  // increase by 1 hour or set to zero, if hours is >23.
   bool equalTime(const clockType&) const; // compairing times, alarm functionality.
   clockType(); //default constructor
private:
   int hr;
   int min;
   int sec;
};
