//
// Created by xocyPC on 31/10/2021.
//
#ifndef BRIDGE_PATTERN_PATIENT_H
#define BRIDGE_PATTERN_PATIENT_H
#include "Person.h"
class Patient:public Person {
private:
    std::string ADN;
public:
    Patient();
    Patient(int,std::string,std::string,std::string,std::string);
    ~Patient() override;

    void setADN(std::string);
    std::string getADN()const;

    std::string toString()override;
};


#endif //BRIDGE_PATTERN_PATIENT_H
