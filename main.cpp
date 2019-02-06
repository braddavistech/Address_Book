//
//  main.cpp
//  PythonIntegration
//
//  Created by Brad Davis on 2/6/19.
//  Copyright © 2019 Brad Davis. All rights reserved.
//

#include <iostream>
using namespace std;
#include "name.hpp"

int main()
{
//  Creates contact and assigns values
    cout << "\n\n\nSimple Address Book \n\n";
    Contact c1("Brad", "Davis", "432", "My Street", "Spring Hill", "TN", 37174);
//  Prints info to console
    c1.print();
//  Creates default contact
    Contact c2;
//  Assigns specific values to c2
    c2.setAddress("Jessica", "Davis", "321", "My Avenue", "Spring Hill", "TN", 37174);
//  Prints info to console
    c2.print();
    
    return 0;
}
