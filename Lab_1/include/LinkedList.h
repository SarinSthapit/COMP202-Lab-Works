#pragma once
#include <iostream>

class Node{
public:
    int info;
    Node *next;

    Node() : next(nullptr){}
    Node(int info, Node *next): info(info), next(next){}

     
};


class LinkedList{

public:
    LinkedList();

    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node *predecessor);
    int removeFromHead();
    int removeFromTail();
    void remove(int data);
    Node retrieve(int data, Node *outputNodePointer);
    bool search(int data);
    void traverse(char separator = ' ');

    Node getHead();
    Node getTail();


private: 
    Node * HEAD;
    Node * TAIL;
};