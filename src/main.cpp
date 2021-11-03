//
// Created by xocyPC on 30/10/2021.

#include <iostream>
#include "IngJunior.h"
#include "IncomeTax.h"
#include "CCSSTax.h"

int main() {
    std::cout << "Hello, Universidad Nacional!" << std::endl;

    auto* tax = new IncomeTax();
    auto* ing = new IngJunior(650000,tax);
    std::cout<<ing->payTaxes();

    return 0;
}