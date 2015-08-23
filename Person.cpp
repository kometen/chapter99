/*
 * File:   Person.cpp
 * Author: claus
 *
 * Created on 11. august 2015, 19:46
 */

#include "Person.h"

Person::Person() {
}

Person::Person(const Person& orig) {
}

Person::~Person() {
}

void Person::setName(const std::string name) {
    this->name = name;
}

void Person::setEmail(const std::string email) {
    this->email = email;
}

void Person::setGender(const Gender gender) {
    this->gender = gender;
}

const std::string Person::generateUUID() {
    boost::uuids::random_generator generator;
    
    boost::uuids::uuid u = generator();
    return boost::uuids::to_string(u);
}

void Person::print() const {
    auto s = "";
    if (gender == Gender::male) { s = "male"; }
    if (gender == Gender::female) { s = "female"; }
    if (gender == Gender::unspecified) { s = "unspecified"; }
    std::cout << "name: " << name << std::endl;
    std::cout << "uuid: " << uuid << std::endl;
    std::cout << "email: " << email << std::endl;
    std::cout << "gender: " << s << std::endl;
    NO::print();
}
