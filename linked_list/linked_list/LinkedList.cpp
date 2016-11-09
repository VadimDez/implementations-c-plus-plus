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
        (*newNode).next = this->head;
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
    
    Node node = *this->head;
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
    
    if (this->size() == 1) {
        int value = (*node).value;
        
        this->head = NULL;
        
        return value;
    }
    
    for (i = 0;i < this->size() - 2;i++) {
        node = (*node).next;
    }
    
    int value = (*(*node).next).value;
    
    (*node).next = NULL;
    
    this->itemsAmount--;
    
    return value;
}

// get first value
int LinkedList::front() {
    if (this->empty()) {
        throw new std::exception ;//"Linked list is empty"
    }
    
    return (*this->head).value;
}

// get last value
int LinkedList::back() {
    if (this->empty()) {
        throw new std::exception;//"Linked list is empty"
    }
    
    Node node = *(this->head);
    
    while (node.next != NULL) {
        node = *(node.next);
    }
    
    return node.value;
}

// insert item at index
void LinkedList::insert(int index, int value) {
    // allow add at index 0 even if there's no elements
    if (index != 0 && index >= this->size()) {
        throw std::out_of_range("Index out of bounds");
    }
    
    Node *newNode = new Node;
    (*newNode).value = value;
    
    if (this->empty()) {
        this->head = newNode;
    } else if (index == 0) {
        (*newNode).next = this->head;
        this->head = newNode;
    } else {
        Node *node = this->head;
        for (int i = 0; i < index - 1; i++) {
            node = (*node).next;
        }
        
        (*newNode).next = (*node).next;
        (*node).next = newNode;
    }
    
    this->itemsAmount++;
}

// remove node at given index
void LinkedList::earse(int index) {
    if (index >= this->size()) {
        throw std::out_of_range("Index out of bounds");
    }
    
    if (index == 0) {
        this->head = (*this->head).next;
    } else {
        Node *node = this->head;
        
        for (int i = 0; i < index - 1; i++) {
            node = (*node).next;
        }
        
        (*node).next = (*(*node).next).next;
    }
    
    this->itemsAmount--;
}

int LinkedList::value_n_from_end(int n) {
    int index = this->size() - n;
    
    if (index < 0) {
        throw std::out_of_range("Index out of bounds");
    }
    
    return this->value_at(index);
}
