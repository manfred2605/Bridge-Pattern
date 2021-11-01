//
// Created by xocyPC on 30/10/2021.
//
#include "Person.h"
#include <utility>

Person::Person(){}

Person::Person(int id, std::string  nombre,  std::string celular, std::string correo)
:documentId(id),name(std::move(nombre)),cellphone(std::move(celular)),mail(std::move(correo)){}

 Person::~Person() = default;

//Bidge Pattern
Person::Person(IMedicine* medicine1):medicine(medicine1){}

void Person::setDocumentId(int cedula) { Person::documentId = cedula; }
void Person::setName(std::string nombre) {Person::name = std::move(nombre);}
void Person::setCellPhone(std::string cell) { Person::cellphone = std::move(cell); }
void Person::setMail(std::string correo) { Person::mail = std::move(correo); }

int Person::getDocumentId() const { return Person::documentId; }
std::string Person::getName() const { return Person::name; }
std::string Person::getCellPhone() const { return Person::cellphone; }
std::string Person::getMail() const { return Person::mail; }


std::string Person::toString() {
std::stringstream output;
    output<<std::fixed;
    output<<"ID"<<documentId;
    output<<"Name"<<name;
    output<<"Cellphone"<<cellphone;
    output<<"Mail"<<mail;
    return output.str();
}