//
// Created by xocyPC on 30/10/2021.

#include <iostream>
#include "IngJunior.h"
#include "IncomeTax.h"
#include "IngSenior.h"

//#include "CCSSTax.h"

int main() {
    std::cout << "Hello, Universidad Nacional!" << std::endl;

    auto* tax = new IncomeTax();
    auto* ing = new IngJunior(350000,tax);
    std::cout<<ing->payTaxes();
    std::cout<<std::endl;

    /*
    auto* sen = new IngSenior(1300000,tax);
    std::cout<<sen->payTaxes();
*/



    return 0;
}