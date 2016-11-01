//
//  Vector.hpp
//  vector
//
//  Created by Vadim Dez on 01/11/2016.
//  Copyright © 2016 Vadim Dez. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <stdio.h>

#endif /* Vector_hpp */

#define INIT_CAPACITY 8

class Vector
{
public:
    Vector();
    int size();
    int capacity();
    bool is_empty();
    int at(int index);
    void push(int value);
    void insert(int index, int value);  
protected:
    int arrayCapacity = 8;
    int * pointer;
    int arraySize = 0;
    void resize(int new_capacity);
};
