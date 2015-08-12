/*
 * File:   Person.cpp
 * Author: claus
 *
 * Created on 11. august 2015, 19:46
 */

#include "Person.h"

Person::Person(std::string name, std::string email, std::string uuid) {
    this->name = name.empty() ? defaultPerson.name : name;
    this->email = email.empty() ? defaultPerson.email : email;
    this->uuid = uuid.empty() ? defaultPerson.uuid : uuid;
}

/*Person::Person(const std::string name) {
    this->name = name;
}*/

Person::Person(const Person& orig) {
}

Person::~Person() {
}

Person& Person::setName(const std::string name) {
    this->name = name;
    return *this;
}

Person& Person::setEmail(const std::string email) {
    this->email = email;
    return *this;
}

const std::string Person::generateUUID() {
    boost::uuids::random_generator generator;
    
    boost::uuids::uuid u = generator();
    return boost::uuids::to_string(u);
}

Person Person::defaultPerson {"Claus", "claus@gnome.no", ""};
