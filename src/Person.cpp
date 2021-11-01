//
// Created by xocyPC on 30/10/2021.
//
#include "Person.h"
#include <utility>

Person::Person(){}
Person::~Person() = default;

//Bidge Pattern

void Person::setName(std::string nombre) {Person::name = std::move(nombre);}
std::string Person::getName() const { return Person::name; }


std::string Person::toString() {
std::stringstream output;
    output<<std::fixed;
    output<<"Name"<<name;

    return output.str();
}