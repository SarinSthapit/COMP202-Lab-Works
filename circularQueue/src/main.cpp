#include <iostream>
#include "Queue.h"

int main()
{
    Queue q(5);
    try
    {
        std::cout << std::endl;
        std::cout << "CIRCULAR QUEUE OPERATIONS:" << std::endl;
        q.enqueue(0);
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);

        std::cout << std::endl;
        std ::cout << "FRONT = ";
        std ::cout << q.getFront() << std ::endl;

        std ::cout << "REAR = ";
        std ::cout << q.getRear() << std ::endl;
        std::cout << std::endl;

        q.display(',');
        std::cout << std::endl;

        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        std::cout << std::endl;

        std ::cout << "FRONT = ";
        std ::cout << q.getFront() << std ::endl;

        std ::cout << "REAR = ";
        std ::cout << q.getRear() << std ::endl;
        std::cout << std::endl;

        q.enqueue(5);
        q.dequeue();
        std::cout << std::endl;

        q.enqueue(6);
        q.enqueue(7);
        q.enqueue(8);
        q.enqueue(9);
        std::cout << std::endl;

        std ::cout << "FRONT = ";
        std ::cout << q.getFront() << std ::endl;

        std ::cout << "REAR = ";
        std ::cout << q.getRear() << std ::endl;
        std::cout << std::endl;

        q.display(',');
        std::cout << std::endl;
    }

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }
}
