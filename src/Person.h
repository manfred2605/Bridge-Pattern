//
// Created by xocyPC on 30/10/2021.
//
#ifndef BRIDGE_PATTERN_PERSON_H
#define BRIDGE_PATTERN_PERSON_H
#include<iostream>
#include<sstream>
#include"Itaxes.h"

class Person {

private:
    std::string name;
    int salary;

public:
    // Constructors
    Person();
    Person(std::string,int);

    virtual ~Person();

    //Gets and Sets
    void setName(std::string);
    std::string getName() const;

    void setSalary(int);
    int getSalary() const;

    virtual std::string toString();

};
#endif //BRIDGE_PATTERN_PERSON_H
