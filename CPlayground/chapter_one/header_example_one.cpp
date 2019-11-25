//
//  TestClass.cpp
//  CPlayground
//
//  Created by Rui Almeida on 23/11/2019.
//  Copyright © 2019 Rui Almeida. All rights reserved.
//

#include <stdio.h>
#include "header_example_one.h"

void header_example_one::do_something() {
    std::cout << "I am executing something public: " << header_example_one::x_public << std::endl;
}

void header_example_one::do_something_in_private() {
    std::cout << "I am not visible to other members: " <<
    header_example_one::x_private << std::endl;
}


