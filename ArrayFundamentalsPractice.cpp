#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* comments for Adrian
this is very basic, I'm iterating through the array and looking for the highest value,
and comparing if this is the last value in the array (as it's ascending)
*/

const int testArraySize = 7;
int testArray[testArraySize] = {1, 2, 10, 4, 5, 7, 8};

bool isSorted(int testArray[], int testArraySize)
{
  bool isSorted = false;
  
  int highestValue = testArray[0];

  for (int i = 1; i < testArraySize; i++)
  { 
    if (testArray[i] > highestValue)
     {highestValue = testArray[i];} 
  }
  
  if (highestValue == testArray[testArraySize-1])
    {isSorted = true;}
   
  return isSorted;
}

int main()
{

cout << "isSorted returned " << isSorted(testArray, testArraySize) << endl;

return (0);

}
