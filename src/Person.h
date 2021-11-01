//
// Created by xocyPC on 30/10/2021.
//
#ifndef BRIDGE_PATTERN_PERSON_H
#define BRIDGE_PATTERN_PERSON_H
#include<iostream>
#include<sstream>
#include"IMedicine.h"

class Person:public IMedicine {

private:
    int documentId{};
    std::string name;
    std::string cellphone;
    std::string mail;

protected:
    //Bridge Pattern
    IMedicine* medicine;

public:
    // Constructors
    Person();
    Person(int, std::string ,std::string, std::string);
    Person(IMedicine*);

    virtual ~Person();

    //Gets and Sets
    void setDocumentId(int);
    void setName(std::string);
    void setCellPhone(std::string);
    void setMail(std::string);

    int getDocumentId() const;
    std::string getName() const;
    std::string getCellPhone()const;
    std::string getMail()const;

    virtual void takeMedicine() = 0;
    virtual std::string toString();

};
#endif //BRIDGE_PATTERN_PERSON_H
