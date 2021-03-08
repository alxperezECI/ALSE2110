#include "linkedlist.h"
#include <iostream>

LinkedList::LinkedList(){
    head = nullptr;
    tail = nullptr;
}

void LinkedList::createNode(int value){
        Node *temp = new Node;
        temp->value = value;
        temp->next = nullptr;

        if (head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

void LinkedList::pushNode(int value) {
    Node * new_node;
    new_node = new Node;

    new_node->value = value;
    new_node->next = head;

    head = new_node;
}

int LinkedList::pop() {
    int retval = 0;
    Node * next_node = nullptr;

    next_node = head->next;
    retval = head->value;
    delete head;
    head = next_node;

    return retval;
}

void LinkedList::removeByValue(int value) {
    /* Add your implementation here */
    Node *ptr1,*ptr2;

    ptr1 = ptr2 = head;
    while( ptr1 != nullptr && ptr1->value != value ){
        ptr2 = ptr1;
        ptr1 = ptr1->next;
    }

    if( ptr1 != nullptr ){
        ptr2->next = ptr1->next;
        delete ptr1;
    }
}

void LinkedList::printList() {
    Node * current = head;

    while (current != nullptr) {
        std::cout << current->value << std::endl;
        current = current->next;
    }
}
