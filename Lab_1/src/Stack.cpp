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
#include "Stack.h"

bool LinkedListStack :: isEmpty()
{
    return list.isEmpty();
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
    delete newNode;
    return newNode -> info;
}

void LinkedListStack :: display(char separator){
    std :: cout << "Stack: ";
    list.traverse(',');
}

