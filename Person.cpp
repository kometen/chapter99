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
    setUpdatedAt();
}

void Person::setEmail(const std::string email) {
    this->email = email;
    setUpdatedAt();
}

void Person::setGender(const Gender gender) {
    this->gender = gender;
    setUpdatedAt();
}

const std::string Person::generateUUID() {
    boost::uuids::random_generator generator;
    
    boost::uuids::uuid u = generator();
    return boost::uuids::to_string(u);
}

void Person::setUpdatedAt() {
    this->updatedAt = std::chrono::system_clock::now();
}


void Person::print() const {
    auto s = "";
    if (gender == Gender::male) { s = "male"; }
    if (gender == Gender::female) { s = "female"; }
    if (gender == Gender::unspecified) { s = "unspecified"; }
    std::time_t ca = std::chrono::system_clock::to_time_t(createdAt);
    std::time_t ma = std::chrono::system_clock::to_time_t(updatedAt);
    std::cout << "name: " << name << std::endl;
    std::cout << "uuid: " << uuid << std::endl;
    std::cout << "email: " << email << std::endl;
    std::cout << "gender: " << s << std::endl;
    std::cout << "created at: " << std::ctime(&ca);
    if (createdAt != updatedAt) {
        std::cout << "modified at: " << std::ctime(&ma);
    }
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
