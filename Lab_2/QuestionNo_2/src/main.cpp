/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 2
Question No. 2
*/

#include <iostream>
#include "Queue.h"

int main()
{
    std::cout << std::endl;
    std ::cout << "QUEUE OPERATIONS:" << std ::endl;
    Queue<int> *intQueue = new ArrayQueue<int>(20);

    try
    {
        intQueue->enqueue(220);
        intQueue->enqueue(23);
        intQueue->enqueue(24);
        intQueue->enqueue(56);
        intQueue->enqueue(57);
        intQueue->enqueue(58);
        intQueue->enqueue(59);
        intQueue->enqueue(88);
        intQueue->enqueue(99);
        std ::cout << std ::endl;

        intQueue->display(',');
        std ::cout << std ::endl;

        if(intQueue->isEmpty()){
            std::cout << "The Queue is empty." << std::endl;
        }else{
            std::cout << "The Queue is not empty." << std::endl;
        }

        if(intQueue->isFull()){
            std::cout << "The Queue is full." << std::endl;
        }else{
            std::cout << "The Queue is not full." << std::endl;
        }

        std ::cout << std ::endl;

        std ::cout << intQueue->getFront() << std ::endl;

        std ::cout << intQueue->getBack() << std ::endl;
        std ::cout << std ::endl;

        intQueue->dequeue();
        intQueue->dequeue();
        intQueue->dequeue();
        intQueue->dequeue();
        intQueue->dequeue();
        std ::cout << std ::endl;

        intQueue->display(',');
        std ::cout << std ::endl;
        delete intQueue;
    }

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }

    std ::cout << std ::endl;
    std ::cout << std ::endl;

    std ::cout << "QUEUE OPERATIONS:" << std ::endl;
    Queue<char> *charQueue = new ArrayQueue<char>(10);

    try
    {
        charQueue->enqueue('a');
        charQueue->enqueue('b');
        charQueue->enqueue('c');
        charQueue->enqueue('d');
        charQueue->enqueue('e');
        charQueue->enqueue('f');

        std ::cout << std ::endl;

        charQueue->display(',');
        std ::cout << std ::endl;

        if(charQueue->isEmpty()){
            std::cout << "The Queue is empty." << std::endl;
        }else{
            std::cout << "The Queue is not empty." << std::endl;
        }

        if(charQueue->isFull()){
            std::cout << "The Queue is full." << std::endl;
        }else{
            std::cout << "The Queue is not full." << std::endl;
        }

        std ::cout << std ::endl;

        std ::cout << charQueue->getFront() << std ::endl;

        std ::cout << charQueue->getBack() << std ::endl;
        std ::cout << std ::endl;

        charQueue->dequeue();
        charQueue->dequeue();
        charQueue->dequeue();
        charQueue->dequeue();
        charQueue->dequeue();
        std ::cout << std ::endl;

        charQueue->enqueue('g');

        std ::cout << std ::endl;

        charQueue->display(',');
        std ::cout << std ::endl;
        delete charQueue;
    }

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }

    std ::cout << std ::endl;
}
