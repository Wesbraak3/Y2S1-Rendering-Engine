//
// Created by wesbr on 26/09/2026.
//

#pragma once

#include <string>
typedef std::string string;

struct Student {
public:
    string Name;
    int StudentNumber;
    int ModulesLen;
    string* Modules;

    Student(const string& name, const int& studentNumber, const int& modulesLen, const string* modules);
    ~Student();

    void UpdateName(const string& name);
    void AddModule(const string& moduleName, const int& position);
    void PrintStudent() const;
};
