//
// Created by xocyPC on 31/10/2021.
//
#include "Pill.h"
Pill::~Pill(){}

std::string Pill::showMedicine(int value) {
    if(value < 38){
        return "needs a pill";
    }
    return "needs an injection";
}
