#include <iostream>
#include "double.h"

int main()
{
    
    doublyLinkedList list;

    list.addToHead(9);

    
    int a = 5689;
    Node * predecessor = new Node;

    *predecessor = list.getHead();
    std :: cout << predecessor-> info;
    
   
    std :: cout << predecessor -> info;
    list.insertion(a, predecessor);


    list.traverse(',');


}