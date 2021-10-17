#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* comments for Adrian
- the only thing I'm not sure I did right was if a space/break is pressed first 
before a letter character, does the program need to return an instruction (text) 
AND still take the input, or is it okay we run the program again as I have it now?
- this program also doesn't account for any other special characters (example / . , etc)

- the constraints of the assignment are done manily with if statements wih various conditions
from the below variables
- I've tried to TL;DR as shortly as I could above the if conditions
*/


char inputChar; //characters that are input into the system from the keyboard
int charactersNumber = 0; //counts the number of characters 
int word = 0; //counts the number of words
int vowel = 0; //counts the number of vowels
int maxCharacters = 0; // tracks the max number of characters, resets if a bigger number is set
int maxVowels = 0; //tracks the max number of vowels, resets if a bigger number is set
bool lastCharIsSpace = false; //is true if the enteres character is space - summary of the function below
int totalCharacters = 0; //counts characters entered with spaces, determines if first character entered was break


//this is set to true/false at the end of the counting "loop" in the main function 
//depending on if the char is a space. it's not tracking the previous space per se, but more
//is delayed updating so I can compare the current entered character with the previous 
//character value before it's updated

void lastCharWasSpace()
{

 if (inputChar == 32)
 {lastCharIsSpace = true;}
 else if (inputChar != 32)
 {lastCharIsSpace = false;}
  
}
  

int main()
{
  cout << "Please enter text" << endl;

   //inputting ALL characters incl space until the break line
   while (inputChar != 10)
  { 
    cin.get(inputChar); 
    totalCharacters++;

    //characters is increased (counted) if there's no break or space (within a word)
    if (inputChar != 32 && inputChar != 10)
    {charactersNumber++;}

    if (inputChar == 'a' || inputChar == 'e' || inputChar == 'i' || inputChar == 'o' 
    || inputChar == 'u' || inputChar == 'A' || inputChar == 'E' || inputChar == 'I' 
    || inputChar == 'O' || inputChar == 'U')
    {vowel++;}
    
    if (vowel > maxVowels)
    {maxVowels = vowel;}

    if (charactersNumber > maxCharacters)
    {maxCharacters = charactersNumber;}

    //once space is pressed, values reset to count a new word
    //tracks if there was no space pressed just before and there's at least one character 
    //counted - so we dont count a single space as a word
    if ((inputChar == 32) && (charactersNumber >= 1) && (lastCharIsSpace == false)) // once there's a space, values per individual 
    {
    charactersNumber = 0; 
    vowel = 0; 
    word++;
    }
    
    // once a break is pressed
    if (inputChar == 10) 
   { 
     // if breaks is the first character
     if (totalCharacters == 1)
     {cout << "There was no text entered" << endl;}

     //is break is the second character and the one entered before was a space
     if (lastCharIsSpace == true && totalCharacters == 2)
     {cout << "There was no text entered" << endl;}

     //this tracks if a word (letters) were entered and the space was not pressed at the end (but break was)
     //this last word will not update the "word" count as this requires a space to be pressed - this accounts for the update
     if (lastCharIsSpace == false && totalCharacters > 2)
     {word = word + 1;
     
     cout << "The number of words is " << word << endl; 
     cout << "The longest word had " << maxCharacters << " characters\n"; //***
     cout << "The maximum number of vowels in a word was " << maxVowels << " vowels\n";

     return(0); 
     }
     
     //if a space was pressed before the break, but there was a letter character entered before that
     //(that would count as a word)
     else if (lastCharIsSpace == true && totalCharacters > 2)
     {
     cout << "The number of words is " << word << endl; 
     cout << "The longest word had " << maxCharacters << " characters\n"; //***
     cout << "The maximum number of vowels in a word was " << maxVowels << " vowels\n";

     return(0);
     }

    }
    // this function updates the lastCharIsSpace value at the end of the "loop" here, so the above comparisons 
    //could be made with the value for the previous character
    lastCharWasSpace();
  } 
  
}

