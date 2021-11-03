//
// Created by xocyPC on 2/11/2021.
//

#include "CCSSTax.h"

CCSSTax::~CCSSTax(){}

std::string CCSSTax::showTaxes(int value){
    int value2 = (value/100) * 10;
    std::stringstream output;
    output<<std::fixed;
    output<<"must pay 10% of your salary: "<<value2<<std::endl;
    return output.str();
}
