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

class Stack
{
public:
    virtual bool isEmpty() = 0;
    virtual void push(int data) = 0;
    virtual int pop() = 0;
    virtual int peek() =0;
    virtual void display(char separator = ' ') = 0;
};


class LinkedListStack : public Stack
{
public:
    bool isEmpty();
    void push(int data);
    int pop();
    int peek();
    void display(char separator = ' ');

private:
    LinkedList list;
};
