#include <iostream>
#include "circularLinkedList.h"

circularLinkedList::circularLinkedList(int maxQueueSize)
{
    HEAD = nullptr;
    TAIL = nullptr;
    this -> maxQueueSize = maxQueueSize;
    n = 0;
}

bool circularLinkedList::isEmpty(){
    if(n != maxQueueSize){
        return true;
    }
    else{
        return false;
    }
}


bool circularLinkedList::isFull(){
    if(n == maxQueueSize){
        return true;
    }
    else{
        return false;
    }
}


void circularLinkedList::addToHead(int data){
    Node *newNode = new Node;
    newNode -> info = data;
    HEAD = newNode;
    if (HEAD == nullptr){
        newNode -> next = HEAD;
        HEAD = newNode;
        n = n + 1;
    }
    else{
        newNode -> next = HEAD;
        HEAD = newNode;
        TAIL -> next = newNode;
        HEAD = newNode;
        n = n + 1;
    }

    std::cout << "Added to head: " << data << std::endl;
}


int circularLinkedList::removeFromHead(){
    if(isEmpty()){
        throw"The Stack is empty.";
    }
    else{
        Node *newNode = new Node;
        newNode = HEAD;

        int data;
        data = newNode -> info;

        TAIL -> next = newNode -> next;
        newNode -> next = newNode -> next;
        HEAD = newNode -> next;

        if(HEAD == TAIL){
            TAIL = nullptr;
        }

        delete newNode;
        return data;
        /* HEAD = TAIL -> next;
        int data;
        data = HEAD -> info;

        if(HEAD == TAIL){
            TAIL = NULL;
        }
        else{
            TAIL -> next = HEAD -> next;
        }
        delete HEAD;
        return data; */
    }
}



void circularLinkedList::traverse(char separator){
    if(isEmpty()){
        std::cout << "The list is empty." << std::endl;
    }

    else{
        Node *temp = HEAD;

        while (temp != nullptr){
            std :: cout << temp -> info << separator;
            temp = temp -> next;
        }
    }
    std::cout << std::endl;
}



Node circularLinkedList::getHead(){
    return *HEAD;
}


Node circularLinkedList::getTail(){
    return *TAIL;
}