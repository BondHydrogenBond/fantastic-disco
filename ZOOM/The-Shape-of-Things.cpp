//Marina Marot CS2 assignments 
//The Shape of things

//comments for Adrian


//#include <iostream>

using namespace std;


// a manual way of drawing this - I'm not sure this actually point to what you wanted us to learn and is a pass to the assignment
// note the character # drawn in a straight line in terminal and diagonally looks very different so I added columns
// on purpose to make it look as similar as possible to the drawing in the assignment

int main()
{

  for (int row = 1; row <= 10; row++)
  { 
    for (int column = 1; column <= 26 ; column ++)
       { 

        //I tried referencing rows and deducting the current row to recalculate both symmetrical rows/columns but it didnt work properly
        /* example (

        int maxColumn = 26;
        int maxRow = 10;

        if ((row == 1 || row == maxRowNUmber - (row-1)) && (column == row?this doesn't work as the row changes 
         || column == maxColumnNumber - (row - 1)))
         {cout << "#";}
        
        */

         if ((row == 1 || row == 10) && (column == 1 || column == 26))
         {cout << "#";}

         if ((row == 2 || row == 9) && ((column >= 2 && column <= 3) || (column >= 22 && column <= 23)))
         {cout << "#";}

         if ((row == 3 || row == 8) && ((column >= 3 && column <= 5) || (column >= 18 && column <= 20))) 
         {cout << "#";}
        
         if ((row == 4 || row == 7) && ((column >= 4 && column <= 7) || (column >= 14 && column <= 17)))
         {cout << "#";}

         if ((row == 5 || row == 6) && (column >= 5 && column <= 14))
         {cout << "# ";}
         
         else {cout << " ";}
       }
       

    cout << "\n";
  }

  return 0;
}
