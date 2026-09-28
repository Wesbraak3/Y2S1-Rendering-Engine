//
// Created by wesbr on 26/09/2026.
//

#include "student.h"

Student::Student(const string& name, const int& studentNumber, const int& modulesLen, const string* modules) {
    this->Name = name;
    this->StudentNumber = studentNumber;
    this->ModulesLen = modulesLen;
    this->Modules = new string[modulesLen];

    for (int i = 0; i < modulesLen; i++) {
        this->Modules[i] = modules[i];
    }
}

Student::~Student() {
    delete[] this->Modules;
}

void Student::UpdateName(const string& name) {
    this->Name = name;
}

void Student::AddModule(const string& moduleName, const int& position) {
    const int newModulesLen = this->ModulesLen + 1;
    auto* newModules = new string[newModulesLen];

    for (int i = 0; i < this->ModulesLen; i++) {
        newModules[i] = this->Modules[i];
    }

    delete[] this->Modules;
    this->ModulesLen = newModulesLen;
    this->Modules = newModules;

    for (int i = this->ModulesLen-1; i > position-1; i--) {
        this->Modules[i] = this->Modules[i-1];
    }
    newModules[position] = moduleName;
}

void Student::PrintStudent() const {
    printf("Name: %s\n", this->Name.c_str());
    printf("Student number: %d\n", this->StudentNumber);
    printf("Modules len: %d\n", this->ModulesLen);

    for (int i = 0; i < this->ModulesLen; i++) {
        printf("Module name: %s\n", this->Modules[i].c_str());
    }
}
