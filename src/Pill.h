//
// Created by xocyPC on 31/10/2021.
//
#ifndef BRIDGE_PATTERN_PILL_H
#define BRIDGE_PATTERN_PILL_H
#include "IMedicine.h"

class Pill: public IMedicine{
public:
    virtual ~Pill();
    std::string showMedicine(int)override;
};

#endif //BRIDGE_PATTERN_PILL_H