#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
comments for Adrian
I found the isupper function that does the same as my 
manual ist of all letters in uppercase - hope that's okay
*/


int main()
{
  const int testArraySize = 10;
  char testArray[testArraySize] = {'a', 'A', 'f', 'v', 'g', 'd', 'r', 'A', 'f', 'o'};
  char character;
  int upperCaseFound = 0;

  for(int i = 0; i < testArraySize; i++)
  {
    character = testArray[i];
    if (isupper(character)) 
    {upperCaseFound++;}
  }

  cout << "Number of upper case characters found is :" << upperCaseFound << endl;

  return 0;

}
