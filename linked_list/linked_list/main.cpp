//
//  main.cpp
//  linked_list
//
//  Created by Vadim Dez on 07/11/2016.
//  Copyright © 2016 Vadim Dez. All rights reserved.
//

#include <iostream>
#include "LinkedList.hpp"

int main(int argc, const char * argv[]) {
    
    LinkedList l = LinkedList();
    
    std::cout << "Size: " << l.size() << "\n";
    
    std::cout << "Empty: " << l.empty() << "\n";
    
    l.push_front(1);
    
    std::cout << "Get value at index 0: " << l.value_at(0) << "\n";
    
    std::cout << "Pop front: " << l.pop_front() << "\n";
    std::cout << "Size: " << l.size() << "\n";
    
    l.push_back(0);
    l.push_back(1);
    std::cout << "Get value at index 0: " << l.value_at(0) << "\n";
    std::cout << "Get value at index 1: " << l.value_at(1) << "\n";
    
    std::cout << "Get front: " << l.front() << "\n";
    std::cout << "Get back: " << l.back() << "\n";
    
    
    std::cout << "Pop back: " << l.pop_back() << "\n";
    std::cout << "Size: " << l.size() << "\n";
    
    return 0;
}
