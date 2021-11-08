#include <iostream>
#include <string>
using namespace std;

struct domino
{
  int setOne;
  int setTwo;
};

//Write code that prints the contents of the sorted dominoes array using asterisks (*) 

void drawAsterix(domino dominoArray[], int arraySize){

  int index = 0;

  while(index < arraySize){

    int row = 0;
    int column = 0;

    for (int i = 0; i < row; i++){

      for (int j = 0; j < column; j++){

        if (dominoArray[index].setOne == 0 || dominoArray[index].setTwo == 0){
          // do nothing
        }

        else if (dominoArray[index].setOne == 1 || dominoArray[index].setTwo == 1){
          if (row == 2 && column == 2){
            cout << "#" << endl;
          }
        }

        else if (dominoArray[index].setOne == 2 || dominoArray[index].setTwo == 2){
          if ((row == 1 && column == 1) || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }

        else if (dominoArray[index].setOne == 3 || dominoArray[index].setTwo == 3){
          if ((row == 1 && column == 1) || (row == 2 && column == 2) || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }

        else if (dominoArray[index].setOne == 4|| dominoArray[index].setTwo == 4){
          if ((row == 1 && column == 1) || (row == 1 && column == 3) || (row == 3 && column == 1) 
            || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }

        else if (dominoArray[index].setOne == 5 || dominoArray[index].setTwo == 5){
          if ((row == 1 && column == 1) || (row == 1 && column == 3) || (row == 2 && column == 2) 
          ||(row == 3 && column == 1) || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }

        else if (dominoArray[index].setOne == 6 || dominoArray[index].setTwo == 6){
          if ((row == 1 && column == 1) || (row == 1 && column == 2) || (row == 1 && column == 3) 
          ||(row == 3 && column == 1) || (row == 3 && column == 2) || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }

        cout << "       " << endl;
        cout << "-------" << endl;
        dominoArray[index].setOne;
        cout << "-------" << endl;
        dominoArray[index].setTwo;
        cout << "-------" << endl;
        cout << "       " << endl;

        index++;

      }
    }
  }
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

  drawAsterix(dominoArray, arraySize); 

  return(0);

}
