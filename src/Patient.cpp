//
// Created by xocyPC on 31/10/2021.
//
#include "Patient.h"

#include <utility>
Patient::Patient(){}
Patient::Patient(int ced,std::string nom,std::string cel,std::string cor,std::string cadena)
:Person(ced,std::move(nom),std::move(cel),std::move(cor)),ADN(std::move(cadena)){}
Patient::~Patient() = default;

void Patient::setADN(std::string cade){Patient::ADN = std::move(cade); }
std::string Patient::getADN() const { return Patient::ADN; }

std::string Patient::toString() {
    std::stringstream output;
    output<<std::fixed;
    output<<Person::toString();
    output<<"ADN"<<ADN;
    return output.str();
}


