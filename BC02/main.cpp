#include <cstdio>
#include <iostream>

#include <string>
typedef std::string string;

#include <Student.h>


/*  Exercise parameters
1. Create a struct named Student with the following members: name (string), studyNumber (int), modulesLen (int), modules (string* array)
2. Implement the following functionalities:
    1. Constructor: initialise the object with its name, studyNumber, and modulesLen. The modules array is dynamically allocated with a valid modulesLen.
    2. Update name: update the student name with the one given as a parameter.
    3. Add module: add a module with a given name and given index to the modules array.
    4. * Add more methods that you might deem necessary or helpful.
3. Create one Student object S1 in your main function and fill it with values (choose your own). Print the member variables from S1 using printf. Use the update name method to change S1’s name and then print it using printf. Finally, use the add module method to add at least 2 modules to the student and print them using printf.
4. Create an array of Student objects in your main function and fill them with values (choose your own). Create a Student pointer SP variable and use it to point to the 1st Student object in the array. Do the same tasks as question 3 with SP. Afterwards, create a Student reference SR variable and use it to point to the 2nd Student object in the array. Repeat the same operations that you have done with SP, but now with SR.
*/

int main() {
     Student newStudent = new Student("wes", 567849, 2, ["Rendering Engines", "Game Systems"]);

    return 0;
}
