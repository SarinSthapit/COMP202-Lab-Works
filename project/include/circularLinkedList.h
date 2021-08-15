/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Mini-Project
*/

#pragma once
#include <iostream>

class Node{
public:
    int info;
    Node *next;

    Node():next(nullptr){}
    Node(int info, Node *next): info(info), next(next){}

     
};


class circularLinkedList{

public:
    circularLinkedList(int maxQueueSize);

    bool isEmpty();
    bool isFull();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node *predecessor);
    int removeFromHead();
    int removeFromTail();
    void remove(int data);
    Node *retrieve(int data, Node *outputNodePointer);
    bool search(int data);
    void traverse(char separator = ' ');

    Node getHead();
    Node getTail();
    int maxQueueSize;
    int n;

private: 
    Node * HEAD;
    Node * TAIL;
};