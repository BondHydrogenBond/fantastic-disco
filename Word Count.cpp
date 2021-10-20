#include <iostream>
#include <vector>
#include <string>

using namespace std;

char inputChar; //the words that are input into the system
int charactersNumber = 0; //counts the number of characters in a word
int word = 0; //counts the number of words
int vowel = 0; //counts the number of vowels
int maxCharacters = 0; // counts the characters, resets if a bigger number is set
int maxVowels = 0; //counts the number of vowels, resets if a bigger number is set
bool lastCharIsSpace = false;
int totalCharacters = 0;


//this "returns" the bool to false after at the end of counting in the main function, 
//so I can track 2 spaces pressed together char entered and if this is true ignore the space
void lastCharWasSpace()
{

 if (inputChar == 32){
   lastCharIsSpace = true;
  } else {
    lastCharIsSpace = false;
  }
  
}
  

int main()
{
  cout << "Please enter text" << endl;

   //counting ALL characters incl space until the break line
   while (inputChar != 10)
  { 
    cin.get(inputChar); 
    totalCharacters++;

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

    if ((inputChar == 32) && (charactersNumber > 1) && (lastCharIsSpace == false)) // once there's a space, values per individual 
    //words reset and counting starts again
    // note maxVharacters and maxVowels stay the same, they're only changed if a higher value comes along
    {
      charactersNumber = 0; //this resets for each new word
      vowel = 0; //this resets for each new word
      word++;
    }
    

    if (inputChar == 10) 
   { 
     if ((totalCharacters == 1) || (lastCharIsSpace == true && totalCharacters == 2))
        {cout << "There was no text entered" << endl;}


     if (totalCharacters > 2){
       if (lastCharIsSpace == false){
         word = word+1;
        }

         cout << "The number of words is " << word << endl; 
         cout << "The longest word had " << maxCharacters << " characters\n"; //***
         cout << "The maximum number of vowels in a word was " << maxVowels << " vowels\n";

         return(0); 
     }
      

    }
      lastCharWasSpace();
  } 
  
}
