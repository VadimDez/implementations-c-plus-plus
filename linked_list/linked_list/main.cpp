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
    
    
    std::cout << "Insert at index 0 value 100: \n";
    printLinkedList(l);
    l.insert(0, 100);
    printLinkedList(l);
    
    std::cout << "Insert at index 1 value 101: \n";
    l.insert(1, 101);
    printLinkedList(l);
    
    std::cout << "Insert at index 3 value 103: \n";
    l.insert(3, 103);
    printLinkedList(l);
    
    std::cout << "Earse item at index 0: \n";
    l.earse(0);
    printLinkedList(l);
    
    std::cout << "Earse item at index 3: \n";
    l.earse(3);
    printLinkedList(l);
    
    std::cout << "Value n from end where n = 2: " << l.value_n_from_end(2) << "\n";
    
    
    std::cout << "Remove valye: 123: \n";
    l.remove_value(123);
    printLinkedList(l);
    
    
    std::cout << "Reverse list: \n";
    l.reverse();
    printLinkedList(l);
    
    
    std::cout << "Add few elements: \n";
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    printLinkedList(l);
    
    
    std::cout << "Reverse list: \n";
    l.reverse();
    printLinkedList(l);
    
    return 0;
}
