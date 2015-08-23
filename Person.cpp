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
    std::time_t ca = std::chrono::system_clock::to_time_t(createdAt);
    std::cout << "name: " << name << std::endl;
    std::cout << "uuid: " << uuid << std::endl;
    std::cout << "email: " << email << std::endl;
    std::cout << "gender: " << s << std::endl;
    std::cout << "created at: " << std::ctime(&ca);
    NO::print();
}

std::string Person::getUUID() const {
    return uuid;
};

std::string Person::getName() const {
    return name;
};

std::string Person::getEmail() const {
    return email;
};

Person::Gender Person::getGender() const {
    return gender;
};

std::chrono::system_clock::time_point Person::getCreatedAt() const {
    return createdAt;
}
