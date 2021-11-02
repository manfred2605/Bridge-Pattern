//
// Created by xocyPC on 1/11/2021.
//

#ifndef BRIDGE_PATTERN_INGJUNIOR_H
#define BRIDGE_PATTERN_INGJUNIOR_H
#include "Person.h"
class IngJunior:public Person{

public:
    IngJunior(int,Itaxes&);
    std::string payTaxes()override;

};


#endif //BRIDGE_PATTERN_INGJUNIOR_H
