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
