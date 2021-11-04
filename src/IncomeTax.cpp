//
// Created by xocyPC on 1/11/2021.
//

#include "IncomeTax.h"

IncomeTax::~IncomeTax() {}

std::string IncomeTax::showTaxes(int value) {
    if(value > 500000){
        return "must pay 15% tax \n";
    }
    return "Does not pay the tax \n";
}
