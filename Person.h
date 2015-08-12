/*
 * File:   Person.h
 * Author: claus
 *
 * Created on 11. august 2015, 19:46
 */

#ifndef PERSON_H
#define	PERSON_H

#include <string>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

class Person {
public:
    Person(std::string name="", std::string email="");
    Person(const Person& orig);
    virtual ~Person();
    static void setDefaultPerson(std::string name, std::string email);
    
    // setters
    Person& setName(const std::string);
    Person& setEmail(const std::string);

    // getters
    std::string getUUID() const { return uuid; };
    std::string getName() const { return name; };
    std::string getEmail() const { return email; };

private:
    static Person defaultPerson;
    const std::string generateUUID();

protected:
    std::string name; // { "Claus Guttesen" } default if empty constructor
    std::string email;
    std::string uuid { generateUUID() };
};

#endif	/* PERSON_H */

