//
// Created by xocyPC on 1/11/2021.
//

#include "IngJunior.h"

#include <utility>

IngJunior::IngJunior(std::string nom, int sal) : Person(std::move(nom),sal)
{}

std::string IngJunior::payTaxes(){
    tax->showTaxes(IngJunior::getSalary());
        return "tax: ";
}

std::string IngJunior::toString() {
    return Person::toString();
}
