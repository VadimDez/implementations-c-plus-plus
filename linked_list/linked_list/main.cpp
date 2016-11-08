//
//  main.cpp
//  linked_list
//
//  Created by Vadim Dez on 07/11/2016.
//  Copyright © 2016 Vadim Dez. All rights reserved.
//

#include <iostream>
#include "LinkedList.hpp"

void printLinkedList(LinkedList &list) {
    
    std::cout << "List: ";
    for (int i = 0;i < list.size(); i++) {
        std::cout << list.value_at(i) << " ";
    }
    
    std::cout << "\n";
}

int main(int argc, const char * argv[]) {
    
    LinkedList l = LinkedList();
    
    std::cout << "Size: " << l.size() << "\n";
    
    std::cout << "Empty: " << l.empty() << "\n";
    
    l.insert(0, 123);
    printLinkedList(l);
    
    l.push_front(1);
    
    std::cout << "Size: " << l.size() << "\n";
    printLinkedList(l);
    
    std::cout << "Pop front: " << l.pop_front() << "\n";
    std::cout << "Size: " << l.size() << "\n";
    
    l.push_back(0);
    l.push_back(1);
    printLinkedList(l);
    
    std::cout << "Get front: " << l.front() << "\n";
    std::cout << "Get back: " << l.back() << "\n";
    
    
    std::cout << "Pop back: " << l.pop_back() << "\n";
    std::cout << "Size: " << l.size() << "\n";
    
    return 0;
}
