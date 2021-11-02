//
// Created by xocyPC on 1/11/2021.
//

#ifndef BRIDGE_PATTERN_INGJUNIOR_H
#define BRIDGE_PATTERN_INGJUNIOR_H
#include "Person.h"
class IngJunior:public Person{

public:
IngJunior(std::string,int);

std::string payTaxes()override;
std::string toString()override;
};


#endif //BRIDGE_PATTERN_INGJUNIOR_H
