#include <iostream>
#include <string>
using namespace std;

struct domino
{
  int setOne;
  int setTwo;
};

//Write code that prints the contents of the sorted dominoes array using asterisks (*) 

int drawAsterix(domino dominoArray[], int number, int arraySize){

  for (int index = 0; index < arraySize; index++){

  int row = 0;
  int column = 0;
  
  int number = 0;

    for (int i = 0; i < row; i++){

      for (int j = 0; j < column; j++){

        if (number == 0 || number == 0){
          // do nothing
        }

        else if (number == 1 || number == 1){
          if (row == 2 && column == 2){
            cout << "#" << endl;
          }
        }

        else if (number == 2 || number == 2){
          if ((row == 1 && column == 1) || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }

        else if (number == 3 || number == 3){
          if ((row == 1 && column == 1) || (row == 2 && column == 2) || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }

        else if (number == 4|| number == 4){
          if ((row == 1 && column == 1) || (row == 1 && column == 3) || (row == 3 && column == 1) 
            || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }

        else if (number == 5 || number == 5){
          if ((row == 1 && column == 1) || (row == 1 && column == 3) || (row == 2 && column == 2) 
          ||(row == 3 && column == 1) || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }

        else if (number == 6 || number == 6){
          if ((row == 1 && column == 1) || (row == 1 && column == 2) || (row == 1 && column == 3) 
          ||(row == 3 && column == 1) || (row == 3 && column == 2) || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }
      }
    }
  } 

  return number;

}

int main(){

  //declare array
  const int arraySize = 28;
  domino dominoArray[arraySize];

  //create array using loops (no matter the domino order)
  //the array is populated with the following logic:
  //setOne number stays the same until setTwo is populated 0-6 in line 107
  //when the setNumber is updated(++;) and setTwo starts with the same number in line 109

  const int maxTileNumber = 6;
  int i = 0; //fills first tile number(upper)
  int j = 0; //fills second tile number (lower)

  int index = 0; 
  while (index < arraySize) {
    //while loops as I need to control where i/j are updated 
    while (i <= 6){ 

      while (j <= 6){

        dominoArray[index].setOne = i;
        dominoArray[index].setTwo = j;

        j++; 
        //j == (maxTileNumberInRow + 1) accounts for the j update in this place

        if (j == (maxTileNumber+ 1) && i <= 6){
          i++; 
          j = i;
        }
        index++;
      }
    }
  }

  //write code to sort the array in a new order
  //stole the randomize code from the CS5 Memory assignment

  domino indexTemp;
  int randomDominoIndex = 0;

  for (int index = 0; index < arraySize; index++){
    indexTemp = dominoArray[index];
    randomDominoIndex  = (int) rand() % 27 + 0;
    dominoArray[index] = dominoArray[randomDominoIndex];
    dominoArray[randomDominoIndex]= indexTemp;
  }


  //this is supposed to print the newly sorted array with asterixes
  // by calling that function and printing the number
  
  for (int index = 0; index < arraySize; index++){

    cout << "       " << endl;
    cout << "-------" << endl;
    cout << drawAsterix(dominoArray, dominoArray[index].setOne, arraySize) << endl;
    cout << "-------" << endl;
    cout << drawAsterix(dominoArray, dominoArray[index].setTwo, arraySize) << endl;
    cout << "-------" << endl;
    cout << "       " << endl;
    
  }

  return(0);

}
