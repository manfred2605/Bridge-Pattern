//
// Created by xocyPC on 31/10/2021.
//
#ifndef BRIDGE_PATTERN_INJECTION_H
#define BRIDGE_PATTERN_INJECTION_H
#include "IMedicine.h"

class Injection:public IMedicine{
public:
    virtual ~Injection();
    std::string showMedicine(int)override;
};
#endif //BRIDGE_PATTERN_INJECTION_H
