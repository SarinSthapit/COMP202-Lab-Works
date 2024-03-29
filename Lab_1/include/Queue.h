/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 1
*/

#pragma once
#include "LinkedList.h"

class Queue
{
public:
    virtual bool isEmpty() = 0;
    virtual void enqueue(int data) = 0;
    virtual int dequeue() = 0;
    virtual int front() =0;
    virtual int rear() =0;
    virtual void display(char separator = ' ') = 0;
};


class LinkedListQueue : public Queue
{
public:
    bool isEmpty();
    void enqueue(int data);
    int dequeue();
    int front();
    int rear();
    void display(char separator = ' ');

private:
    LinkedList list;
};
