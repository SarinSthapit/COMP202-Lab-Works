#include <iostream>
#include "double.h"

int main()
{

    doublyLinkedList list;
    std::cout << "Doubly Linked List Operations." << std::endl;
    std::cout << std::endl;

    
    try
    {
        list.addToHead(9);
        list.addToHead(1);
        list.addToHead(2);
        list.addToHead(20);
        list.addToHead(21); 
        std::cout << std::endl;
        list.addToTail(3);
        list.addToTail(4);
        list.addToTail(14);
        list.addToTail(41);
        std::cout << std::endl;

        Node *predecessor = new Node;
        predecessor = list.getHead();
        list.insertion(5689, predecessor);
        list.insertion(53, predecessor);
        list.insertion(5323, predecessor);
        std::cout << std::endl;

        Node *output3 = new Node;
        output3 = list.retrieve(5323, output3);
        list.insertionLeft(309, output3);

        list.deletion(53);
        std::cout << std::endl;

        std::cout << "Tail: ";
        std::cout << list.getTail()->info << std::endl;
        std::cout << std::endl;

        if(list.isEmpty()){
            std::cout << "The list is empty." << std::endl;
        }else{
            std::cout << "The list is not empty." << std::endl;
        }
        std::cout << std::endl;
        
        list.forwardTraverse(',');
        list.reverseTraverse(',');
        std::cout << std::endl;

        list.removeFromHead();
        list.removeFromHead();

        list.removeFromTail();
        list.removeFromTail();
        std::cout << std::endl;

        list.forwardTraverse(',');
        list.reverseTraverse(',');

        std::cout << std::endl;
        std::cout << list.getHead() -> info;
    }

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }

   
/* 
    int n = 0;
    doublyLinkedList list2;

    std::cout << "USER INPUT:" << std::endl;
    std::cout << "Choose your option: " << std::endl;
    std::cout << "Doubly Linked List Operations: " << std::endl;
    std::cout << "1. Empty or not\n2. Insertion\n3. Deletion\n4. Retrieve\n5. Search\n6. Traverse\n7. Head\n8. Tail" << std::endl;

    std::cout << std::endl;
    std::cout << "Choose your option: ";
    std :: cin >> n;

    list2.setHead(0);
    Node *predecessor2 = new Node;
    predecessor2 = list2.getHead();

    list2.insertion(745, predecessor2);

    list2.insertion(123, predecessor2);
    list2.insertion(365, predecessor2);


    if(n==1){
        if(list2.isEmpty()){
            std::cout << "The list is empty." << std::endl;
        }else{
            std::cout << "The list is not empty." << std::endl;
        }
    }

    else if (n==2){
        int num;
        int num2;
        std::cout << "Doubly Linked List: ";
        list2.traverse(',');
        std::cout << "Enter the predecessing data: ";
        std::cin >> num;

        std::cout << "Enter the data to insert: ";
        std::cin >> num2;

        Node * outputnode = new Node;
        outputnode = list2.retrieve(num, outputnode);
        std::cout << "Data Retrieval: " <<  "Data = " << outputnode -> info << " and next Node = " << outputnode -> next << std::endl;

        list2.insertion(num2, outputnode);
        std::cout << "Doubly Linked List: ";
        list2.traverse(',');
    }

    else if(n==3){
        int num;
        std::cout << "Doubly Linked List (Before): ";
        list2.traverse(',');

        std::cout << std::endl;

        std :: cout << "Enter the data remove: ";
        std :: cin >> num;
        list2.deletion(num);
        std::cout << "Doubly Linked List (After): ";
        list2.traverse(',');
    }

    else if(n==4){
         int num;
        std::cout << "Doubly Linked List (Before): ";
        list2.traverse(',');

        std::cout << std::endl;

        std :: cout << "Enter the data to retrieve: ";
        std :: cin >> num;
        Node * output2 = new Node;
        output2 = list2.retrieve(num, output2);
        std::cout << "Data Retrieval: " <<  "Data = " << output2 -> info << " and next Node = " << output2 -> next << std::endl;
        std::cout << "Doubly Linked List: ";
        list2.traverse(',');
    }

    else if(n==5){
        int num;
        std::cout << "Doubly Linked List: ";
        list2.traverse(',');
        std::cout << std::endl;
        std::cout << "Enter the data: ";
        std::cin >> num;
        list2.search(num);
    }

    else if(n==6){
        std::cout << "Doubly Linked List: ";
        list2.traverse(',');
    }

    else if (n==7){
        std::cout << "HEAD: ";
        std::cout << list2.getHead() -> info <<std::endl;
    }

    else if (n==8){
        std::cout << "TAIL: ";
        std::cout << list2.getTail() ->info <<std::endl;
    }

    else{
        std :: cout << "Invalid Operation." << std :: endl;
    } */
}