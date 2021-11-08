#include <iostream>
#include <string>
using namespace std;

struct domino
{
  int setOne;
  int setTwo;
};

void drawAsterix(domino dominoArray[], int arraySize) {

  int row = 3;
  int column = 3;

  int numberOne;
  int numberTwo;

  for (int i = 0; i < row; i++) {

    for (int j = 0; j < column; j++) {

      for (int index = 0; index < arraySize; index++) {

        numberOne = dominoArray[index].setOne;
        numberTwo = dominoArray[index].setTwo;  

        cout << "numberOne" << numberOne << endl;
        cout << "numberTwo" << numberTwo << endl;

        cout << "       " << endl;
        cout << "-------" << endl;
        numberOne;
        cout << "-------" << endl;
        numberTwo;
        cout << "-------" << endl;
        cout << "       " << endl;

        if (numberOne == 0 || numberTwo == 0) {
          // do nothing
        }

        else if (numberOne == 1 || numberTwo == 1) {
          if (row == 2 && column == 2) {
            cout << "#" << endl;
          }
        }

        else if (numberOne == 2 || numberTwo == 2) {
          if ((row == 1 && column == 1) || (row == 3 && column == 3)) {
            cout << "#" << endl;
          }
        }

        else if (numberOne == 3 || numberTwo == 3) {
          if ((row == 1 && column == 1) || (row == 2 && column == 2) || (row == 3 && column == 3)) {
            cout << "#" << endl;
          }
        }

        else if (numberOne == 4|| numberTwo == 4) {
          if ((row == 1 && column == 1) || (row == 1 && column == 3) || (row == 3 && column == 1) 
            || (row == 3 && column == 3)) {
            cout << "#" << endl;
          }
        }

        else if (numberOne == 5 || numberTwo == 5) {
          if ((row == 1 && column == 1) || (row == 1 && column == 3) || (row == 2 && column == 2) 
          ||(row == 3 && column == 1) || (row == 3 && column == 3)) {
            cout << "#" << endl;
          }
        }

        else if (numberOne == 6 || numberTwo == 6){
          if ((row == 1 && column == 1) || (row == 1 && column == 2) || (row == 1 && column == 3) 
          ||(row == 3 && column == 1) || (row == 3 && column == 2) || (row == 3 && column == 3)){
            cout << "#" << endl;
          }
        }

        else {cout << " " << endl;}

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
  //setOne number stays the same until setTwo is populated 0-6 
  //when the setNumber is updated(++;) and setTwo starts with the same number 

  const int maxTileNumber = 6;
  int i = 0; //fills first tile number(upper)
  int j = 0; //fills second tile number (lower)

  int numberOne;
  int numberTwo;

  int index = 0; 
  while (index < arraySize) {
    //while loops as I need to control where i/j are updated 
    while (i <= 6) { 

      while (j <= 6) {

        dominoArray[index].setOne = i;
        dominoArray[index].setTwo = j;

        j++; 
        //j == (maxTileNumberInRow + 1) accounts for the j update in this place

        if (j == (maxTileNumber + 1) && i <= 6){
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

  for (int index = 0; index < arraySize; index++) {
    indexTemp = dominoArray[index];
    randomDominoIndex  = (int) rand() % 27 + 0;
    dominoArray[index] = dominoArray[randomDominoIndex];
    dominoArray[randomDominoIndex]= indexTemp;
  }

  //this is supposed to print the newly sorted array with asterixes
  //Write code that prints the contents of the sorted dominoes array using asterisks (*) 
  drawAsterix(dominoArray, arraySize);
  
  return(0);

}
