//
// Created by xocyPC on 31/10/2021.
//
#include "Injection.h"
Injection::~Injection(){}

std::string Injection::showMedicine(int value) {
 if(value > 38){
     return " needs an injection";
 }
    return " needs a pill";
}
