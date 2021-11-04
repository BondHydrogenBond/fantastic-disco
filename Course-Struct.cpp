#include <iostream>
#include <string>
using namespace std;

struct course
{
  string department;
  int number;
  string title;
};

//funtion takes an array of course structs, and counts how many courses there are in 
// a department given as a parameter. 

int numCoursesInDepartment(course courseArray[], int arraySize, string department)
{
    int numCourses = 0;

      for (int i = 0; i < arraySize; i++) 
      { 
        if (courseArray[i].department == department)
        {
          numCourses++; 
        }     
      }
    
    return numCourses; 
}

int main()
{
    //initialize and declare array of 10 courses
    const int arraySize = 10;
    course courseArray[arraySize] =
    {
      {"MATH", 1000, "Applied Mathematics"},
      {"PHYS", 1002, "Applied Physics"},
      {"BIOL", 1004, "Bioengineering"},
      {"CHEM", 2005, "Chemistry and Chemical Biology"},
      {"COMP", 3006, "Computer Science"},
      {"BIOL", 8002, "Environmental Science & Engineering"},
      {"BIOL", 400, "Molecular and Cellular Biology"},
      {"BIOL", 6003, "Organismic and Evolutionary Biology"},
      {"MATH", 1001, "Statistics"},
      {"BIOL", 700, "Stem Cell and Regenerative Biology"},
    };
    
    for(int i= 0; i < arraySize; i++) 
    {

     cout << "The department" << courseArray[i].department << "has" 
     << numCoursesInDepartment(courseArray, arraySize, courseArray[i].department) << "courses" << endl;
     
    }

    return (0);
}
