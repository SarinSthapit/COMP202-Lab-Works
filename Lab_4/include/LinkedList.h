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

template <typename T>
class Vertex {
public:
    T info;
    Vertex<T> *next;

    Vertex() : next(nullptr) {}
    Vertex(T info, Vertex *next) : info(info), next(nullptr){}
};



template <typename T>
class LinkedList{

public:
    LinkedList();
    
    bool isEmpty();
    void addToHead(T data);
    void addToTail(T data);
    void add(T data, Vertex<T> *predecessor);
    T removeFromHead();
    T removeFromTail();
    void remove(T data);
    Vertex<T> *retrieve(T data, Vertex<T> *outputVertexPointer);
    bool search(T data);
    void traverse(char separator = ' ');

    Vertex<T> *getHead();
    Vertex<T> * getTail();
   
private: 
    Vertex<T> *HEAD;
    Vertex<T> *TAIL;
};

#include "../src/LinkedList.cpp"