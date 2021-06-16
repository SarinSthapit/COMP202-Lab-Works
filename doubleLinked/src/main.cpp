#include <iostream>
#include "double.h"

int main()
{
    
    doublyLinkedList list;


    int a = 5689;
    Node * predecessor = new Node;
    *predecessor = list.getHead();
    Node * b = new Node;
    predecessor -> prev = nullptr;
    b = predecessor -> next;
    list.insertion(a, b);



    Node *tail = new Node;
    *tail = list.getTail();

    //std :: cout << tail;

   
    /*list.insertion(5, head->prev);
    list.insertion(8, head);
    list.insertion(12, a);
    list.insertion(33, a);
    list.deletion(8); */

    list.traverse(',');


}