//
//  LinkedList.cpp
//  linked_list
//
//  Created by Vadim Dez on 07/11/2016.
//  Copyright © 2016 Vadim Dez. All rights reserved.
//

#include <iostream>
#include "LinkedList.hpp"

LinkedList::LinkedList() {
    
}

int LinkedList::size() {
    return this->itemsAmount;
}

bool LinkedList::empty() {
    return this->itemsAmount == 0;
}

// add item to the front of list
void LinkedList::push_front(int value) {
    Node *newNode = new Node;
    (*newNode).value = value;
    
    if (!this->empty()) {
        (*newNode).next = this->head->next;
    } else {
        (*newNode).next = NULL;
    }
    
    this->head = newNode;
    
    this->itemsAmount++;
}

// Get value at index
int LinkedList::value_at(int index) {
    if (this->empty()) {
        throw new std::exception; //"Linked list is empty";
    }
    
    if (index < 0 || index > this->size() -1) {
        throw std::out_of_range("Index out of bounds");
    }
    
    struct Node node = *this->head;
    int i = 0;
    
    for (; i < index; i++) {
        node = *node.next;
    }
    
    return node.value;
}

// remove firt item and return its value
int LinkedList::pop_front() {
    if (this->empty()) {
        throw new std::exception ;//"Linked list is empty"
    }
    
    int value = (*this->head).value;
    
    this->head = (*this->head).next;
    
    this->itemsAmount--;
    
    return value;
}

// add item to the end
void LinkedList::push_back(int value) {
    Node * newNode = new Node;
    (*newNode).value = value;
    
    if (this->head != NULL) {
        Node * node = this->head;
    
        while ((*node).next != NULL) {
            node = (*node).next;
        }
    
        (*node).next = newNode;
    } else {
        this->head = newNode;
    }
    
    this->itemsAmount++;
}

// pop last item

int LinkedList::pop_back() {
    if (this->empty()) {
        throw new std::exception ;//"Linked list is empty"
    }
    
    int i;
    Node * node = this->head;
    
    for (i = 0;i < this->size() - 1;i++) {
        
    }
    
}
