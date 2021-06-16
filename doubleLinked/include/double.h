#pragma once
#include <iostream>

class Node{
public:
    int info;
    Node *next;
    Node *prev;

    Node() : next(nullptr), prev(nullptr){}
    Node(int info, Node *next, Node *prev): info(info), next(next), prev(prev){}
     
};


class doublyLinkedList{

public:
    doublyLinkedList();

    bool isEmpty();
    void insertion(int data, Node *predecessor);
    void deletion(int data);
    Node retrieve(int data, Node *outputNodePointer);
    bool search(int data);
    void traverse(char separator = ' ');

    Node getHead();
    Node getTail();


private: 
    Node * HEAD;
    Node * TAIL;
};