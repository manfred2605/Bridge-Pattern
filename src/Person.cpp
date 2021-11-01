//
// Created by xocyPC on 30/10/2021.
//
#include "Person.h"
#include <utility>

Person::Person(){}
Person::~Person() = default;

Person::Person(std::string nom, int sal)
:name(std::move(nom)),salary(sal){}

//Bidge Pattern


void Person::setName(std::string nombre) {Person::name = std::move(nombre);}
std::string Person::getName() const { return Person::name; }

void Person::setSalary(int sal) {Person::salary = sal;}
int Person::getSalary() const { return Person::salary; }

std::string Person::toString() {
std::stringstream output;
    output<<std::fixed;
    output<<"Name: "<<name;
    output<<"Salary: "<<salary;
    return output.str();
}






