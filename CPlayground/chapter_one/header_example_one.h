//
//  TestHeader.h
//  CPlayground
//
//  Created by Rui Almeida on 23/11/2019.
//  Copyright © 2019 Rui Almeida. All rights reserved.
//

#ifndef header_example_one_h
#define header_example_one_h

#include <iostream>

class header_example_one {
    
public:
    void do_something();
    int x_public = 5;
private:
    void do_something_in_private();
    int x_private = 5;
};

#endif /* header_example_one_h */
