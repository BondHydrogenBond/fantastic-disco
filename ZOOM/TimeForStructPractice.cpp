#include <iostream>
#include <string>
using namespace std;

struct tellTime
{
 string timeOfDay;
 int hour;
 int minute;
 int second;
};

// function number 1 - structs are passed by reference 
// value of at least one attribute is changed

void moveHourForward(tellTime &today)
{
  today.hour +=1;
}


//function number 2 - structs have to be passed by value 
//- function needs to return a value

int moveMinuteForward(tellTime tomorrow)
{
  tomorrow.minute +=1;

  return tomorrow.minute;
}

int main()
{

    //create an example instance of  the struct time
    tellTime t = { "PM", 4, 30, 50};

    int newMinute;

    //cout stuff from before functions are called
    cout << "time is" << t.hour << ":" << t.minute << ":" << t.second << ":" << t.timeOfDay << endl;
    

    moveHourForward(t);
    newMinute = moveMinuteForward(t);

    // cout stuff after functions are caled
    cout << "time is" << t.hour << ":" << t.minute << ":" << t.second << ":" << t.timeOfDay << endl;
    cout << "the minute of the time is" << newMinute << endl;
 
    return (0);
  
}
