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
#include "Stack.h"

int main(){
    std :: cout << "QUEUE OPERATIONS:" << std :: endl;
    Queue <int> *intQueue = new ArrayQueue<int>(15);
    intQueue->enqueue(220);
    intQueue->enqueue(23);
    intQueue->enqueue(24);
    intQueue->enqueue(56);
    intQueue->enqueue(57);
    intQueue->enqueue(58);
    intQueue->enqueue(59);
    intQueue->enqueue(88);
    intQueue->enqueue(99);

    intQueue -> display(',');

    std :: cout << "FRONT: ";
    std :: cout << intQueue -> getFront() << std :: endl;

    std :: cout << "BACK: ";
    std :: cout << intQueue -> getBack() << std :: endl;

    intQueue -> dequeue();
    intQueue -> dequeue();
    intQueue -> dequeue();
    intQueue -> display(','); 
    
    std :: cout << std :: endl;
    std :: cout << std :: endl; 
    
}
