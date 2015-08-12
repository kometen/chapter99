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
    cout << "name: " << me.getName() << endl;
    cout << "uuid: " << me.getUUID() << endl;
    cout << "email: " << me.getEmail() << endl;
    me.setName("Claus Guttesen").setEmail("kometen@gmail.com");
    cout << "name: " << me.getName() << endl;
    cout << "uuid: " << me.getUUID() << endl;
    cout << "email: " << me.getEmail() << endl;
    return 0;
}

