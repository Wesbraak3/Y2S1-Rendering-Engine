//
// Created by wesbr on 25/09/2026.
//

#include "Student.h"
#include <iostream>

#include <string>
typedef std::string string;

Student::Student(string name, int studyNumber, int modulesLen/*, string *modules[]*/) {
    this->name = name;
    this->studyNumber = studyNumber;
    this->modulesLen = modulesLen;

    /*this->modules = new string[this->modulesLen];
    for (int i = 0; i < this->modulesLen; i++) {
        this->modules[i] = modules[i];
    }*/
}

Student::~Student() {
    /*delete[] modules;*/
}

// Student::ChangeName(string newName) {
//     name = newName;
// }


// Student::AddModule(string moduleName) {
//     modulesLen++;
//     string* newModules = new string[modulesLen];
//
//     for (int i = 0; i < modulesLen; i++) {
//         newModules[i] = modules[i];
//     }
// };


