#include <iostream>
#include "double.h"

doublyLinkedList :: doublyLinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}


bool doublyLinkedList :: isEmpty()
{
    return HEAD == nullptr && TAIL == nullptr;
}

void doublyLinkedList :: insertion(int data, Node *predecessor){
    Node *newNode = new Node;
    newNode -> info = data;
    newNode -> prev = predecessor;
    newNode -> next = predecessor -> next;
    predecessor -> next = newNode;
    newNode -> next -> prev = newNode;
    predecessor -> prev = predecessor -> prev;

    std :: cout << predecessor -> info;
    std :: cout << newNode -> info;
}


void doublyLinkedList :: deletion(int data){
    Node *current = new Node;
    current = HEAD -> next;

    while(current != NULL){
        if(current -> info == data ){
            break;
        }

        else{
            current = current -> next;
        }
    }

    if(current == NULL){
        std :: cout << "Data not found." << std :: endl;         
    }

    else{
        std :: cout << "Removed from the Linked List: " << current -> info << std :: endl;
        current -> prev -> next = current -> next;
        delete current; 
    }

}


Node doublyLinkedList :: retrieve(int data, Node *outputNodePointer){
    Node *temp = new Node;
    temp = HEAD;
    while(temp != NULL && temp -> info != data){
        temp = temp -> next;
    }

    if(temp==NULL){
        std:: cout << data << " is not present." << std :: endl;
    }

    else{
        outputNodePointer = temp;
        return *outputNodePointer;
    }
}


bool doublyLinkedList :: search(int data){
    if(!this -> isEmpty()){
        Node *newNode = new Node;
        newNode = HEAD;

        while(newNode -> next != NULL){
            if(newNode -> info == data){
                std:: cout << "The searched data " << data << " is present in the list." << std :: endl;
                return true;
            }

            else{
                newNode = newNode -> next;
            }
        }
        std:: cout << "The searched data " << data << " is not present in the list." << std :: endl;
        return false;
    }
}


void doublyLinkedList :: traverse(char separator){
    if(isEmpty()){
        std::cout<<"The list is empty. traversed"<<std::endl;
    }

    else{
        Node *temp = HEAD;
        
        //std :: cout << "Traversing in forward direction: "<< std ::endl;
        while (temp != nullptr){
            std :: cout << temp -> info << separator;
            temp = temp -> next;
        }

        /* std :: cout << "Traversing in reverse direction: "<< std ::endl;
        while (temp != nullptr){
            std :: cout << temp -> info << separator;
            temp = temp -> prev;
        } */
    }
    std::cout<<std::endl;
}

Node doublyLinkedList :: getHead(){
    return *HEAD;
}

Node doublyLinkedList :: getTail(){
    return *TAIL;
}