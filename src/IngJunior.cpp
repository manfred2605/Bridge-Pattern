//
// Created by xocyPC on 1/11/2021.
//

#include "IngJunior.h"
#include <utility>

IngJunior::IngJunior(int sal,Itaxes* taxi) : Person(sal,taxi)
{}

std::string IngJunior::payTaxes(){
    return tax->showTaxes(IngJunior::getSalary());
}
