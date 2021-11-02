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

int numCoursesInDepartment(course courseArray[], string department, int arraySize, int numCourses, int course)
{
  while (int i = course) //what I want is a fixed number (one course) here to compare against other courses
  { 
    for (int j = 1; j < arraySize; j++) // iterates through all departments while i == specific number (course)
    { 
      if (courseArray[i].department == courseArray[j].department)
      {
        numCourses++; 
      }     
    }
  }
  return numCourses; 
}

int main()
{
    //initialize and declare array of 10 courses
    int numCourses = 1;
    
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
   
    
    for(int course = 0; course < arraySize; course++) 
    {
     cout << "The department" << courseArray[course].department << "has" 
     << numCoursesInDepartment(courseArray[], courseArray[course].department, 
     arraySize, numCourses, course) << "courses" << endl;

     //what I'm trying to do here is get the specific count per each course variable
     //by calling the function with a course that updates here
     //I'm getting an error I have no idea what is 
     
    }

    return (0);
}
