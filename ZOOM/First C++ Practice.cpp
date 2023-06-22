// Marina Marot CS2 assignment "First C++ Practice"

// comments for Adrian  
// 1. unsure if this is correct way to submit the assignments via GutHub
// 2. unsure if the MAIN function in C++ is the equivalent to DRAW/SETUP in Processing or just a regular method we use to do something - figured it out
// 3. this took more time to think of something for the function to do than to actually do it

//code begins
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int doubleTheNumber(int number)
{
  int doubleNumber = number * 2;

  return doubleNumber;

}

int main()
{
  int number = 3; 
  int doubleNumber;

   // depending on what the variable, system prints a diiferent statement
   
  cout << "number is " <<  number << endl;
  doubleNumber = doubleTheNumber(number);
  cout << "double number is " << doubleNumber << endl;

  return 0;
}
