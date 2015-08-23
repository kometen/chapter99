/* 
 * File:   DK.h
 * Author: claus
 *
 * Created on 16. august 2015, 23:18
 */

#ifndef DK_H
#define	DK_H

#include <iostream>
#include <string>

class DK {
public:
    DK();
    DK(const DK& orig);
    virtual ~DK();
    
    void SetCity(std::string city);
    void SetPostalCode(unsigned int postalCode);
    void SetAddress2(std::string address2);
    void SetAddress1(std::string address1);

    std::string GetCity() const;
    unsigned int GetPostalCode() const;
    std::string GetAddress2() const;
    std::string GetAddress1() const;

    const std::string GetCountryNameNative();
    const std::string GetCountryNameEnglish();
    const std::string GetCountryCode();
    
    // other functions
    virtual void print() const;

private:
    std::string countryCode { "dk" };
    std::string countryNameEnglish { "Denmark" };
    std::string countryNameNative { "Danmark" };
    std::string address1;
    std::string address2;
    unsigned int postalCode;
    std::string city;

};

#endif	/* DK_H */

