/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 1
*/

#include "LinkedList.h"
#include "Queue.h"

bool LinkedListQueue :: isEmpty()
{
    list.isEmpty();
}


void LinkedListQueue :: enqueue(int data)
{
    return list.addToTail(data);
}


int LinkedListQueue :: dequeue()
{
    return list.removeFromHead();
}

int LinkedListQueue :: front()
{
    Node *newNode = new Node;
    *newNode = list.getHead();
    delete newNode;
    return newNode -> info;
}


int LinkedListQueue :: rear()
{
    Node *newNode = new Node;
    *newNode = list.getTail();
    delete newNode;
    return newNode -> info;
}

void LinkedListQueue :: display(char separator){
    std :: cout << "Queue: ";
    list.traverse(',');
}

