//
// Created by xocyPC on 30/10/2021.
//
#ifndef BRIDGE_PATTERN_PERSON_H
#define BRIDGE_PATTERN_PERSON_H
#include<iostream>
#include<sstream>
#include "Itaxes.h"
class Itaxes;

class Person{
private:
    int salary{};
protected:
    Itaxes* tax;
public:
    Person();
    Person(int,Itaxes*);

    virtual ~Person();

    //Gets and Sets
    void setSalary(int);
    int getSalary() const;

    virtual std::string payTaxes() = 0;

};
#endif //BRIDGE_PATTERN_PERSON_H
