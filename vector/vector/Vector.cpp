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
    this->pointer = new int [this->arrayCapacity];
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
    if (this->isFull()) {
        this->resize(this->arrayCapacity * 2);
    }
    
    std::cout << "ARRAY AT IS : " << *(this->pointer) << "\n";
    
    
    *(this->pointer + this->size()) = value;
    
    this->arraySize++;
}

// resize vector
void Vector::resize(int new_capacity) {
    this->arrayCapacity = new_capacity;
    int * array = new int [this->arrayCapacity];
    
    // copy all items to bigger array
    for (int i = 0; i < this->size(); i++) {
        *(array + i) = *(this->pointer + i);
    }
    
    this->pointer = array;
}

// insert value at index, shift everything after
void Vector::insert(int index, int value) {
    if (this->isFull()) {
        this->resize(this->arrayCapacity * 2);
    }
    
    // increment size
    this->arraySize++;
    
    int i = this->size();
    
    while (i > index) {
        *(this->pointer + i) = *(this->pointer + i - 1);
        i--;
    }
    
    *(this->pointer + index) = value;
}

bool Vector::isFull() {
    return this->size() == this->capacity();
}

void Vector::prepend(int value) {
    this->insert(0, value);
}

int Vector::pop() {
    int value = *(this->pointer + this->size() - 1);
    
    this->arraySize--;
    
    if (this->size() == this->capacity() / 4) {
        this->resize(this->capacity() / 2);
    }
    
    return value;
}

// delete item at index
void Vector::deleteAt(int index) {
    this->arraySize--;
    int length = this->size();
    
    while (index < length) {
        *(this->pointer + index) = *(this->pointer + index + 1);
        index++;
    }
}

// find item, return its index
int Vector::find(int value) {
    bool found = false;
    int length = this->size();
    int i = 0;
    
    while(i < length && !found) {
        if (*(this->pointer + i) == value) {
            found = true;
            i--;
        }
        
        i++;
    }
    
    return found ? i : -1;
}

// remove all items with value
void Vector::remove(int value) {
    int i;
    do {
        i = this->find(value);
        
        if (i != -1) {
            this->deleteAt(i);
        }
    } while (i != -1);
}
