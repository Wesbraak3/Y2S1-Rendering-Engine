//
// Created by wesbr on 25/09/2026.
//

#ifndef BC02_STUDENT_H
#define BC02_STUDENT_H

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

#endif //BC02_STUDENT_H
