#include <iostream>
#include <string>
using namespace std;

struct domino
{
  int setOne;
  int setTwo;
};


//it's manual again and I had to split the first and second number into 2 functions to draw correctly
// as the if conditions didn't work as intended (if One is something || Two is something ==> 
// in case both one and 2 were those numbers specified, the program would draw 4 numbers per domino

void drawDominoOne(int numberOne){

  if (numberOne == 0) {
    cout << "|     |" << endl;
    cout << "|     |" << endl;
    cout << "|     |" << endl;
  }

  if (numberOne == 1){ 
    cout << "|     |" << endl;
    cout << "|  #  |" << endl;
    cout << "|     |" << endl;
  }

  if (numberOne == 2) {
    cout << "|#    |" << endl;
    cout << "|     |" << endl;
    cout << "|    #|" << endl;
  }

  if (numberOne == 3) {
    cout << "|#    |" << endl;
    cout << "|  #  |" << endl;
    cout << "|    #|" << endl;
  }

  if (numberOne == 4) {
    cout << "|#   #|" << endl;
    cout << "|     |" << endl;
    cout << "|#   #|" << endl;
  }

  if (numberOne == 5) {
    cout << "|#   #|" << endl;
    cout << "|  #  |" << endl;
    cout << "|#   #|" << endl;
  }

  if (numberOne == 6){
    cout << "|#   #|" << endl;
    cout << "|#   #|" << endl;
    cout << "|#   #|" << endl;
  }

}

void drawDominoTwo(int numberTwo){

  if (numberTwo == 0) {
    // do nothing
  }

  if (numberTwo == 1){ 
    cout << "|     |" << endl;
    cout << "|  #  |" << endl;
    cout << "|     |" << endl;
  }

  if (numberTwo == 2) {
    cout << "|#    |" << endl;
    cout << "|     |" << endl;
    cout << "|    #|" << endl;
  }

  if (numberTwo == 3) {
    cout << "|#    |" << endl;
    cout << "|  #  |" << endl;
    cout << "|    #|" << endl;
  }

  if (numberTwo == 4) {
    cout << "|#   #|" << endl;
    cout << "|     |" << endl;
    cout << "|#   #|" << endl;
  }

  if (numberTwo == 5) {
    cout << "|#   #|" << endl;
    cout << "|  #  |" << endl;
    cout << "|#   #|" << endl;
  }

  if (numberTwo == 6){
    cout << "|#   #|" << endl;
    cout << "|#   #|" << endl;
    cout << "|#   #|" << endl;
  }

}

void drawDominoes(domino dominoArray[], int arraySize) {

  int numberOne;
  int numberTwo;

  for (int index = 0; index < arraySize; index++) {

    numberOne = dominoArray[index].setOne;
    numberTwo = dominoArray[index].setTwo;  

    //cout << "numberOne" << numberOne << endl;
    //cout << "numberTwo" << numberTwo << endl;

    cout << "       " << endl;
    cout << "-------" << endl;
    drawDominoOne (numberOne);
    cout << "-------" << endl;
    drawDominoTwo (numberTwo);
    cout << "-------" << endl;
    cout << "       " << endl;

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

  //drawDominoes calls the two above functions
  drawDominoes(dominoArray, arraySize);
  
  return(0);

}
