#pragma once
#include <iostream>


class Queue{
public:

    Queue(int maxQueueSize);
    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    int dequeue();
    int getFront();
    int getRear();
    void display(char separator = ' ');
    int getn();

    int maxQueueSize;
    int front;
    int rear;
    int n;

    int *data;
};