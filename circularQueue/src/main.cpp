#include <iostream>
#include "Queue.h"

int main(){
    Queue q(5);
    q.enqueue(0);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    std :: cout << "FRONT = ";
    std :: cout << q.getFront() << std :: endl;

    std :: cout << "REAR = ";
    std :: cout << q.getRear() << std :: endl; 

    q.display(',');

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    std :: cout << "FRONT = ";
    std :: cout << q.getFront() << std :: endl;

    std :: cout << "REAR = ";
    std :: cout << q.getRear() << std :: endl; 

    //std :: cout << q.getn();
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);

    //std :: cout << q.getn();
    q.enqueue(9);

    std :: cout << "FRONT = ";
    std :: cout << q.getFront() << std :: endl;

    std :: cout << "REAR = ";
    std :: cout << q.getRear() << std :: endl; 


    q.display(',');
}
