//
// Created by xocyPC on 1/11/2021.
//

#ifndef BRIDGE_PATTERN_INCOMETAX_H
#define BRIDGE_PATTERN_INCOMETAX_H
#include "Itaxes.h"

class IncomeTax:public Itaxes {

public:
    ~IncomeTax();
    std::string showTaxes(int)override;

};


#endif //BRIDGE_PATTERN_INCOMETAX_H
