/* 
 * File:   NO.h
 * Author: claus
 *
 * Created on 16. august 2015, 23:18
 */

#ifndef NO_H
#define	NO_H

#include <iostream>
#include <string>

class NO {
public:
    NO();
    NO(const NO& orig);
    virtual ~NO();
    
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
    std::string countryCode { "no" };
    std::string countryNameEnglish { "Norway" };
    std::string countryNameNative { "Norge" };
    std::string address1;
    std::string address2;
    unsigned int postalCode;
    std::string city;

};

#endif	/* NO_H */

