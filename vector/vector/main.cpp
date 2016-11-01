//
//  main.cpp
//  vector
//
//  Created by Vadim Dez on 01/11/2016.
//  Copyright © 2016 Vadim Dez. All rights reserved.
//

#include <iostream>
#include "Vector.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Vector v = Vector();
    
    std::cout << "Size is " << v.size() << "\n";
    
    std::cout << "Capacity is " << v.capacity() << "\n";
    
    // test at()
    // check out of bounds
    //std::cout << "Item at index -1 is: " << v.at(-1) << "\n";
    
    std::cout << "Item at index 0 is: " << v.at(0) << "\n";
    
    // test push()
    v.push(100);
    std::cout << "item at index 0 is: " << v.at(0) << "\n";
    v.push(101);
    std::cout << "item at index 1 is: " << v.at(1) << "\n";
    v.push(102);
    std::cout << "item at index 2 is: " << v.at(2) << "\n";
    
    std::cout << "item at index 0 is: " << v.at(0) << "\n";
    
    // test resizing
    v.push(103);
    v.push(104);
    v.push(105);
    v.push(106);
    v.push(107);
    std::cout << "Size is " << v.size() << "\n";
    std::cout << "Capacity is " << v.capacity() << "\n";
    v.push(108);
    std::cout << "Size is " << v.size() << "\n";
    std::cout << "Capacity is " << v.capacity() << "\n";
    
    //
    
    return 0;
}
