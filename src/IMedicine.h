//
// Created by xocyPC on 31/10/2021.
//
#ifndef BRIDGE_PATTERN_IMEDICINE_H
#define BRIDGE_PATTERN_IMEDICINE_H
#include <sstream>

class IMedicine {

public:
    virtual std::string showMedicine(int) = 0;
};

#endif //BRIDGE_PATTERN_IMEDICINE_H
