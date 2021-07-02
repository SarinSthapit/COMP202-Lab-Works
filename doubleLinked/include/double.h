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
    Node *getHead();
    Node *getTail();

    bool isEmpty();
    void insertion(int data, Node *predecessor);
    void insertionLeft(int data, Node *successor);
    void addToHead(int data);
    void addToTail(int data);
    int removeFromHead();
    int removeFromTail();
    void deletion(int data);
    Node *retrieve(int data, Node *outputNodePointer);
    bool search(int data);
    void forwardTraverse(char separator = ' ');
    void reverseTraverse(char separator = ' ');

   

private: 
    Node * HEAD;
    Node * TAIL;
};