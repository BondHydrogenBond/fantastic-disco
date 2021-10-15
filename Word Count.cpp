#include <iostream>
#include <vector>
#include <string>

using namespace std;

char inputChar; //the words that are input into the system
int charactersNumber; //counts the number of characters in a word
int word = 0; //counts the number of words
int vowel = 0; //counts the number of vowels
int maxCharacters = 0; // counts the characters, resets if a bigger number is set
int maxVowels = 0; //counts the number of vowels, resets if a bigger number is set



int main()
{

 cout << "Please enter text" << endl;

 //while there's no break we count characters
 while (inputChar != 10)
  { 
    cin.get(inputChar);

    charactersNumber ++;

    if (inputChar == 'a' || inputChar == 'e' || inputChar == 'i' || inputChar == 'o' 
    || inputChar == 'u' || inputChar == 'A' || inputChar == 'E' || inputChar == 'I' 
    || inputChar == 'O' || inputChar == 'U')
    {vowel++;}
    
    if (vowel > maxVowels)
    {maxVowels = vowel;}

    if (charactersNumber > maxCharacters)
    {maxCharacters = charactersNumber;}
   
    // once there's a space, values per individual words reset and counting starts again
    // note maxVharacters and maxVowels stay the same, they're only changed if a higher value comes along
    if (inputChar == 32) 
    {
    charactersNumber = -1; //this resets for each new word (-1 accounts for space that's counted as a character)
    vowel = 0; //this resets for each new word, space is not a vowel
    word ++; // counting words with spaces
    }

  }
    cout << "The number of words is " << word + 1 << "\n"; //there's no space after the last word, accounting for that 
    cout << "The longest word had " << maxCharacters << " characters\n";
    cout << "The maximum number of vowels in a word was " << maxVowels << " vowels\n";

    return(0);
}

