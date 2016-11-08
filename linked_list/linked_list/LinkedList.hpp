//
//  LinkedList.hpp
//  linked_list
//
//  Created by Vadim Dez on 07/11/2016.
//  Copyright © 2016 Vadim Dez. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

#endif /* LinkedList_hpp */

struct Node {
    int value;
    Node * next;
};

class LinkedList
{
public:
    LinkedList();
    int size();
    bool empty();
    void push_front(int value);
    int value_at(int index);
    int pop_front();
    void push_back(int value);
    int pop_back();
    int front();
    int back();
    void insert(int index, int value);
protected:
    int itemsAmount = 0;
    Node * head;
};
