/*
 * File:   main.cpp
 * Author: claus
 *
 * Created on 11. august 2015, 19:18
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    cout << "Blåbærsyltetøj!" << endl;
    Person me {};
    me.print();
    me.setName("Claus Guttesen");
    me.setEmail("kometen@gmail.com");
    me.setGender(Person::Gender::male);
    me.NO::SetAddress1("Hovden B");
    me.NO::SetPostalCode(6827);
    me.NO::SetCity("Breim");
    me.print();
    return 0;
}

