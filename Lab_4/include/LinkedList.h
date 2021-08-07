/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 4
*/

#pragma once
#include <iostream>

class Vertex {
public:
    int info;
    Vertex *next;

    Vertex() : next(nullptr) {}
    Vertex(int info, Vertex *next) : info(info), next(nullptr){}
};



class LinkedList{

public:
    LinkedList();
    
    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Vertex *predecessor);
    int removeFromHead();
    int removeFromTail();
    void remove(int data);
    Vertex *retrieve(int data, Vertex *outputVertexPointer);
    bool search(int data);
    void traverse(char separator = ' ');

    Vertex* getHead();
    Vertex* getTail();
   
private: 
    Vertex * HEAD;
    Vertex * TAIL;
};