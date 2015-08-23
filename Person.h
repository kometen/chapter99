/*
 * File:   Person.h
 * Author: claus
 *
 * Created on 11. august 2015, 19:46
 */

#ifndef PERSON_H
#define	PERSON_H

#include <iostream>
#include <string>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

#include "countries/europe/NO.h"
#include "countries/europe/DK.h"

class Person : public NO, public DK {
public:
    Person() ;
    Person(const Person& orig);
    ~Person();

    enum class Gender { male, female, unspecified };

    // setters
    void setName(const std::string);
    void setEmail(const std::string);
    void setGender(const Gender);

    // getters
    std::string getUUID() const { return uuid; };
    std::string getName() const { return name; };
    std::string getEmail() const { return email; };
    Gender getGender() const { return gender; };
    
    // other functions
    virtual void print() const;

private:
//    static Person defaultPerson;
    std::string name;
    std::string email;
    Gender gender { Gender::unspecified };
    std::string uuid { generateUUID() };
    const std::string generateUUID();

protected:
};

#endif	/* PERSON_H */

