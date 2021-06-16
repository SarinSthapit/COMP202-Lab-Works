#include "LinkedList.h"
#include "Stack.h"

bool LinkedListStack :: isEmpty()
{
    list.isEmpty();
}


void LinkedListStack :: push(int data)
{
    list.addToHead(data);
}


int LinkedListStack :: pop()
{
    return list.removeFromHead();
}

int LinkedListStack :: peek()
{
    Node *newNode = new Node;
    *newNode = list.getHead();
    return newNode -> info;
}

void LinkedListStack :: display(char separator){
    std :: cout << "Stack: ";
    list.traverse(',');
}

