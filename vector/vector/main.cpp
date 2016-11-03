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
    std::cout << "item at index 3 is: " << v.at(3) << "\n";
    v.push(104);
    std::cout << "item at index 4 is: " << v.at(4) << "\n";
    v.push(105);
    v.push(106);
    v.push(107);
    std::cout << "item at index 7 is: " << v.at(7) << "\n";
    std::cout << "Size is " << v.size() << "\n";
    std::cout << "Capacity is " << v.capacity() << "\n";
    v.push(108);
    std::cout << "Size is " << v.size() << "\n";
    std::cout << "Capacity is " << v.capacity() << "\n";
    std::cout << "item at index 0 is: " << v.at(0) << "\n";
    
    // test insert
    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << "\n";
    
    v.insert(1, 1);
    v.insert(0, 0);
    v.prepend(-1);
    
    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << "\n";
    
    // test pop
    std::cout << "Test pop\n";
    
    std::cout << "last item: " << v.pop() << "\n";
    
    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << "\n";
    
    // test deleteAt
    std::cout << "Test deleteAt\n";
    
    v.deleteAt(2);
    
    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << "\n";
    
    
    // test find
    std::cout << "Test find\n";
    
    std::cout << "Index of value 106 is: " << v.find(106) << "\n";
    
    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << "\n";
    
    // test remove
    std::cout << "Test Remove\n";
    
    v.insert(5, 101);
    v.remove(101);
    
    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << "\n";
    
    return 0;
}
