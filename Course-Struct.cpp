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

int numCoursesInDepartment(course courseArray[], string department, int arraySize, int numCourses)
{
   

  for (int i = 0; i < arraySize; i++) // sets the department with which we are comparing the others to
  { 
    for (int j = 1; j < arraySize; j++) // iterates through all departments while i == a specific number
    { 
      if (courseArray[i].department == courseArray[j].department)
        {
           numCourses++;  
        }   

        // idea is to compare one department (i) with all the other ones (j) and add one to numCourse every time 
        // we find the same department
        // issue is numCourses is a variable, so it will change with each department, so the below return
        // cannot be placed at the very end, because all we'll get is the last i comparison
        // also I don't know hw to call this function to retunr a value at line 65 with a corresponding value (I tried calling
        // the numCoursesInDepartment(courseArray[i], coursearray[i].department, arraySize, &numCourses) but 
        // to no avail)


        return numCourses; 
        
    }
  }
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
   
   
    for (int i = 0; i < arraySize; i++) 
    {
     cout << "The department" << courseArray[i].department << "has" << numCourses << "courses" << endl;
    }
    

    return (0);
  
}
