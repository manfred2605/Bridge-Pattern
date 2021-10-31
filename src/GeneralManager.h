//
// Created by xocyPC on 31/10/2021.
//
#ifndef BRIDGE_PATTERN_GENERALMANAGER_H
#define BRIDGE_PATTERN_GENERALMANAGER_H
#include"Patient.h"
#include <vector>
#include <cassert>
#include <iostream>
#include <sstream>
using namespace std;

template<typename T>
Class GeneralManager{
private:
    Gen element{};
    vector<T>elementList;
public:
    //generic methods
    void setElement(T const&);
    void addElement(T const&);

    T getElement()const;
    vector<T> getElementList()const;

    string toString();
};

template<typename T>
void GeneralManager::setElement(const T& elem){GeneralManager<T>::element = elem;}

template<typename T>
T GeneralManager<T>::getElement(){ return element; }


#endif //BRIDGE_PATTERN_GENERALMANAGER_H
