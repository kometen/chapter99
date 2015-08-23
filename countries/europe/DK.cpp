/* 
 * File:   DK.cpp
 * Author: claus
 * 
 * Created on 16. august 2015, 23:18
 */

#include "DK.h"

DK::DK() {
}

DK::DK(const DK& orig) {
}

DK::~DK() {
}

void DK::SetCity(std::string city) {
    this->city = city;
}

std::string DK::GetCity() const {
    return city;
}

void DK::SetPostalCode(unsigned int postalCode) {
    this->postalCode = postalCode;
}

unsigned int DK::GetPostalCode() const {
    return postalCode;
}

void DK::SetAddress2(std::string address2) {
    this->address2 = address2;
}

std::string DK::GetAddress2() const {
    return address2;
}

void DK::SetAddress1(std::string address1) {
    this->address1 = address1;
}

std::string DK::GetAddress1() const {
    return address1;
}

const std::string DK::GetCountryNameNative() {
    return countryNameNative;
}

const std::string DK::GetCountryNameEnglish() {
    return countryNameEnglish;
}

const std::string DK::GetCountryCode() {
    return countryCode;
}

void DK::print() const {
    std::cout << "countryCode: " << countryCode << std::endl;
}