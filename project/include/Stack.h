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
#include "circularLinkedList.h"

class Stack
{
public:
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void push(int data) = 0;
    virtual int pop() = 0;
    virtual int top() =0;
    virtual void display(char separator = ' ') = 0;
};


class LinkedListStack : public Stack
{
public:
    LinkedListStack(int maxQueueSize);
    bool isEmpty();
    bool isFull();
    void push(int data);
    int pop();
    int top();
    void display(char separator = ' ');

    int maxQueueSize;

private:
    circularLinkedList list(int maxQueueSize);
};
