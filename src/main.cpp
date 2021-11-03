//
// Created by xocyPC on 30/10/2021.

#include <iostream>
#include "IngJunior.h"
#include "Itaxes.h"
#include"Person.h"
#include "IncomeTax.h"

int main() {
    std::cout << "Hello, Universidad Nacional!" << std::endl;


    IncomeTax* tax = new IncomeTax();
    IngJunior* ing = new IngJunior(3500,tax);

    std::cout<<ing->payTaxes();
    return 0;
}