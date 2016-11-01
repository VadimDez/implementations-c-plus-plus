//
//  Vector.cpp
//  vector
//
//  Created by Vadim Dez on 01/11/2016.
//  Copyright © 2016 Vadim Dez. All rights reserved.
//

#include "Vector.hpp"
#include <iostream>

Vector::Vector() {
    int array[this->arrayCapacity];
    this->pointer = array;
}

// get number of items in vector
int Vector::size() {
    return this->arraySize;
}

// get number of items vector can hold
int Vector::capacity() {
    return this->arrayCapacity;
}

// check if vector is empty
bool Vector::is_empty() {
    return this->size() == 0;
}

// get item at index
int Vector::at(int index) {
    if (index < 0 || index >= this->capacity()) {
        throw std::out_of_range("index out of bounds");
    }
    
    return *(this->pointer + index);
}

// add item to the end of vector
void Vector::push(int value) {
    // check if vector is full
    if (this->size() == this->capacity()) {
        this->resize(this->arrayCapacity * 2);
    }
    
    int * p = this->pointer + this->size();
    
    *p = value;
    this->arraySize++;
}

// resize vector
void Vector::resize(int new_capacity) {
    this->arrayCapacity = this->arrayCapacity * 2;
    int array[this->arrayCapacity];
    
    // copy all items to bigger array
    for (int i = 0; i < this->size(); i++) {
        array[i] = *(this->pointer + i);
    }
    
    this->pointer = array;
}

void Vector::insert(int index, int value) {
    
}
