/*
 * File:   Person.h
 * Author: claus
 *
 * Created on 11. august 2015, 19:46
 */

#ifndef PERSON_H
#define	PERSON_H

#include <chrono>
#include <iostream>
#include <string>
#include <ctime>
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
    std::string getUUID() const;
    std::string getName() const;
    std::string getEmail() const;
    Gender getGender() const;
    std::chrono::system_clock::time_point getCreatedAt() const;
    
    // other functions
    virtual void print() const;

private:
    std::string name;
    std::string email;
    Gender gender { Gender::unspecified };
    std::string uuid { generateUUID() };
    std::chrono::system_clock::time_point createdAt { std::chrono::system_clock::now() };
    const std::string generateUUID();

protected:
};

#endif	/* PERSON_H */
