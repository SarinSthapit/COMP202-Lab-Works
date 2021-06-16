#include "LinkedList.h"
#include "Queue.h"

bool LinkedListQueue :: isEmpty()
{
    list.isEmpty();
}


void LinkedListQueue :: enqueue(int data)
{
    list.addToTail(data);
}


int LinkedListQueue :: dequeue()
{
    return list.removeFromHead();
}

int LinkedListQueue :: front()
{
    Node *newNode = new Node;
    *newNode = list.getHead();
    return newNode -> info;
}


int LinkedListQueue :: rear()
{
    Node *newNode = new Node;
    *newNode = list.getTail();
    return newNode -> info;
}

void LinkedListQueue :: display(char separator){
    std :: cout << "Queue: ";
    list.traverse(',');
}

