#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int value;
    struct Node * next;
};


class LinkedList
{
public:
    LinkedList();

    void createNode(int value);

    void pushNode(int value);

    int pop() ;

    void removeByValue(int value) ;

    void printList() ;

private:
    Node *head;
    Node *tail;
};

#endif // LINKEDLIST_H
