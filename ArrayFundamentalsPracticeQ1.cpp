#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int testArraySize = 7;
int testArray[testArraySize] = {1, 2, 10, 4, 10, 7, 8};

bool isSorted(int testArray[], int testArraySize)
{
  bool isSorted = false;
  
  int arrayCount = 0;

  for (int i = 1; i < testArraySize; i++)
  { 
    if (testArray[i] > testArray[i-1])
     {arrayCount++;}

  }
  
  
  if (arrayCount== testArraySize-1)
     {isSorted = true;}
   
  return isSorted;
}

int main()
{

 cout << "isSorted returned " << isSorted(testArray, testArraySize) << endl;

 return (0);

}
