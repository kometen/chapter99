/* 
 * File:   NO.cpp
 * Author: claus
 * 
 * Created on 16. august 2015, 23:18
 */

#include "NO.h"

NO::NO() {
}

NO::NO(const NO& orig) {
}

NO::~NO() {
}

void NO::SetCity(std::string city) {
    this->city = city;
}

std::string NO::GetCity() const {
    return city;
}

void NO::SetPostalCode(unsigned int postalCode) {
    this->postalCode = postalCode;
}

unsigned int NO::GetPostalCode() const {
    return postalCode;
}

void NO::SetAddress2(std::string address2) {
    this->address2 = address2;
}

std::string NO::GetAddress2() const {
    return address2;
}

void NO::SetAddress1(std::string address1) {
    this->address1 = address1;
}

std::string NO::GetAddress1() const {
    return address1;
}

const std::string NO::GetCountryNameNative() {
    return countryNameNative;
}

const std::string NO::GetCountryNameEnglish() {
    return countryNameEnglish;
}

const std::string NO::GetCountryCode() {
    return countryCode;
}

void NO::print() const {
    std::cout << "countryCode: " << countryCode << std::endl;
}