//
// Created by xocyPC on 3/11/2021.
//
#include "IngSenior.h"
#include <utility>

IngSenior::IngSenior(int salario, Itaxes *taxi)
:Person(salario,taxi){}

std::string IngSenior::payTaxes() {
    return tax->showTaxes(IngSenior::getSalary());
}
