//
// Created by xocyPC on 30/10/2021.
//
#include "Person.h"
#include <utility>

Person::Person(){}
Person::~Person() = default;

Person::Person(int sal,Itaxes& taxi)
:salary(sal){*tax = taxi;}

void Person::setSalary(int sal) {Person::salary = sal;}
int Person::getSalary() const { return Person::salary; }








