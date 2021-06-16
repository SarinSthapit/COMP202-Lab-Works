#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main(){
    std :: cout << "STACK OPERATIONS:" << std :: endl;
    Stack <int> *intStack = new ArrayStack<int>(10);
    intStack->push(98);
    intStack->push(5);
    intStack->push(33);
    intStack->push(25);
    intStack->push(1);
    intStack->push(32);
    intStack->push(4);
    intStack->push(5);
    intStack->push(6);

    intStack->display(',');

    intStack->pop();

    std :: cout << "TOP: ";
    std :: cout << intStack->top() << std :: endl;
    intStack->display(',');

    std :: cout << std :: endl;
    std :: cout << std :: endl;
    
    std :: cout << "QUEUE OPERATIONS:" << std :: endl;
    Queue <int> *intQueue = new ArrayQueue<int>(15);
    intQueue->enqueue(22);
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
    intQueue -> display(','); 
    
    
    
}
