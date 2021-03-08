#include <iostream>
#include <cstdlib>
#include "linkedlist.h"




int main() {

    LinkedList linkedlist;


    linkedlist.pushNode(3);
    linkedlist.pushNode(1);
    linkedlist.pushNode(2);
    linkedlist.pushNode(5);

    linkedlist.removeByValue(3);

    linkedlist.printList();

    return 0;
}
