//
//  name.cpp
//  ClassImports
//
//  Created by Brad Davis on 2/6/19.
//  Copyright © 2019 Brad Davis. All rights reserved.
//

#include "name.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Contact :: Contact( const string first, const string last, const string street, const string add, const string c, const string s, const int z)
    : firstName(first), lastName(last), streetNumber(street), streetAddress(add), city(c), state(s), zip(z)
{}

void Contact :: setAddress(const string first, const string last, const string street, const string add, const string c, const string s, const int z)
{
    firstName = first;
    lastName = last;
    streetNumber = street;
    streetAddress = add;
    city = c;
    state = s;
    zip = z;
}

void Contact :: print() const
{
    cout << firstName << " " << lastName << endl;
    cout << streetNumber << " " << streetAddress << endl;
    cout << city << ", " << state << " " << zip << "\n\n";
    
}


