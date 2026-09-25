//
// Created by wesbr on 25/09/2026.
//

#pragma once

#include <string>
typedef std::string string;

class Student {
    Student(string name, int studyNumber, int modulesLen/*, string *modules[]*/);
    ~Student();

    public:
        string name;
        int studyNumber;
        int modulesLen;
        // string *modules[];

    void ChangeName(string newName);
    // void AddModule(string moduleName);
};