//
// Created by xocyPC on 31/10/2021.
//
#ifndef BRIDGE_PATTERN_GENERALMANAGER_H
#define BRIDGE_PATTERN_GENERALMANAGER_H
#include <vector>
#include <cassert>
#include <iostream>
#include <sstream>
#include"Patient.h"
using namespace std;

template<typename G>
Class GeneralManager{
private:
    Gen element{};
    vector<G>elementList;
public:
    //generic methods
    void setElement(G const&);
    void addElement(G const&);

    G getElement()const;
    vector<G> getElementList()const;

    string toString();
};








#endif //BRIDGE_PATTERN_GENERALMANAGER_H
