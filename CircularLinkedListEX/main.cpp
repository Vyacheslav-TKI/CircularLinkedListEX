#include "..\Solver\Node.h"
#include "..\Solver\CircularLinkedList.h"
#include <iostream>

int main() {
    CircularLinkedList<int> list;

    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);

    std::cout << "Circular Linked List contents: ";
    list.display();

    std::cout << "Removing the front element..." << std::endl;
    list.removeFront();

    std::cout << "Updated list: ";
    list.display();

    return 0;
}