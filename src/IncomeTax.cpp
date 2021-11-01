//
// Created by xocyPC on 1/11/2021.
//

#include "IncomeTax.h"

IncomeTax::~IncomeTax() {}

std::string IncomeTax::showTaxes(int value) {
    if(value > 500000){
        return "15% tax";
    }
    return "Does not pay the tax";
}
