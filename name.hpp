//
//  name.hpp
//  ClassImports
//
//  Created by Brad Davis on 2/6/19.
//  Copyright © 2019 Brad Davis. All rights reserved.
//

#ifndef name_hpp
#define name_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Contact
{
    private :
    string firstName;
    string lastName;
    string streetNumber;
    string streetAddress;
    string city;
    string state;
    int zip;
    public :

    Contact(const string first = "First", const string last = "Last", const string street = "123", const string add = "Test Street", const string c = "City", const string s = "State", const int z = 12345);

    void setAddress(const string first, const string last, const string street, const string add, const string c, const string s, const int z);

    void print() const;

};

#endif /* name_hpp */
