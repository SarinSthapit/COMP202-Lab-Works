#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

int main()
{
    std :: cout << "Linked List Operations: " << std :: endl;
    LinkedList list;

    list.addToTail(21);
    list.addToTail(19);
    list.addToTail(16);
    list.addToTail(18);
    list.addToHead(10);
    list.addToHead(11);
    list.addToHead(11);
    list.addToHead(03);
    list.addToHead(03);
    list.addToHead(05);
    list.addToHead(05);
    list.addToHead(03);

    int a = 5689;
    Node * predecessor = new Node;
    *predecessor = list.getHead();
    Node * b = new Node;
    b = predecessor -> next -> next;
    list.add(a, b);

    list.remove(5);
    list.remove(11);
    list.traverse(',');

    std :: cout << std :: endl;

    list.search(54);
    list.search(599);

    std :: cout << std :: endl;

    Node * output = new Node;
    *output = list.retrieve(19, output);
    std :: cout << "Data Retrieval: " <<  "Data = " << output -> info << " and next Node = " << output -> next << std :: endl;

    list.removeFromHead();
    list.removeFromTail();


    std :: cout << "Linked List: ";
    list.traverse(',');


    std :: cout << std :: endl;


    std :: cout << "Stack Operations: " <<  std :: endl;
    LinkedListStack s;

    s.push(55);
    s.push(56);
    s.push(58);

    s.display(',');
    std :: cout << "TOP: " <<  s.peek() << std :: endl;

    std::cout << "Deleted from Stack: " << s.pop() << ", " << s.pop() << std::endl;

    std :: cout << std :: endl;


    std :: cout << "Queue Operations: " <<  std :: endl;
    LinkedListQueue q;

    q.enqueue(11);
    q.enqueue(112);
    q.enqueue(3);
    q.enqueue(19);
    q.enqueue(21);

    
    q.display(',');
    std :: cout << "FRONT: " <<  q.front() << std :: endl;
    std :: cout << "REAR: " <<  q.rear() << std :: endl;
    
    std:: cout << "Deleted from Queue: " << q.dequeue() << ", " << q.dequeue() <<std::endl;

}