/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 4
*/

#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}


bool LinkedList::isEmpty(){
    return HEAD == nullptr && TAIL == nullptr;
}


void LinkedList::addToHead(int data){
    Vertex *newVertex = new Vertex(data, HEAD);
    HEAD = newVertex;
    if (TAIL == nullptr)
    {
        TAIL = HEAD;
    }
    std::cout << "Added to head: " << data << std::endl;
}


void LinkedList::addToTail(int data){
    Vertex *newVertex = new Vertex(data, NULL);
    if(HEAD == nullptr)
    {
        HEAD = newVertex;
        TAIL = newVertex;
    }

    else{
        TAIL->next = newVertex;
        TAIL = TAIL->next;
        TAIL -> next = nullptr;
    }
    //std::cout << "Added to tail: " << data << std::endl;
}


void LinkedList::add(int data, Vertex *predecessor){
    Vertex *newVertex = new Vertex(data, predecessor->next);
    predecessor -> next = newVertex;
    std::cout << "Added: " << data << std::endl;
}


int LinkedList::removeFromHead(){
    if (!this->isEmpty())
    {
        Vertex *vertexToDelete = new Vertex;
        vertexToDelete = this -> HEAD;
        int data = vertexToDelete->info;
        this->HEAD = vertexToDelete->next;

        delete vertexToDelete;

        if (HEAD == nullptr)
        {
            TAIL = nullptr;
        }
        std::cout << "Removed from head: " << data << std::endl;
        return data;
    }  
    else 
    {
        std::cout << "The list is empty." << std::endl;
        return 0;
    }
}


int LinkedList :: removeFromTail(){
    if(!this->isEmpty()){
        Vertex *vertexToDelete = new Vertex;
        vertexToDelete = this -> TAIL;
        TAIL -> next = NULL;

        if(this->HEAD == this->TAIL){
            HEAD = NULL;
            TAIL = NULL;
        }

        else{
            Vertex *secondlastVertex = new Vertex;
            secondlastVertex = this -> HEAD;
            while(secondlastVertex -> next != TAIL){
                secondlastVertex = secondlastVertex -> next;
            }
            TAIL = secondlastVertex;
            secondlastVertex -> next = NULL;
        }
        std::cout << "Removed from tail: " << vertexToDelete -> info << std::endl;
        return vertexToDelete -> info;
        delete vertexToDelete;
    }

    else{
        std::cout << "The list is empty." << std::endl;
        return 0;
    }

}


void LinkedList :: remove(int data){
    Vertex *current = new Vertex;
    Vertex * previous = new Vertex;
    current = HEAD -> next;
    previous = HEAD;

    while(current != NULL){
        if(current -> info == data ){
            break;
        }

        else{
            previous = current;
            current = current -> next;
        }
    }

    if(current == NULL){
        std::cout << "Data not found." << std::endl;         
    }

    else{
        //std::cout << "Removed from the Linked List: " << current -> info << std::endl;
        previous -> next = current -> next;
        delete current; 
    }

} 


Vertex *LinkedList::retrieve(int data, Vertex *outputVertexPointer){
    Vertex *temp = new Vertex;
    temp = HEAD;
    while(temp != NULL && temp -> info != data){
        temp = temp -> next;
    }

    if(temp == NULL){
        std::cout << data << " is not present." << std::endl;
    }

    else{
        outputVertexPointer = temp;
        return outputVertexPointer;
    }
    throw "Error!";
}


bool LinkedList::search(int data){
    if(!this -> isEmpty()){
        Vertex *newVertex = new Vertex;
        newVertex = HEAD;

        while(newVertex -> next != NULL){
            if(newVertex -> info == data){
                std::cout << "The searched data, " << data << " is present in the list." << std::endl;
                return true;
            }

            else{
                newVertex = newVertex -> next;
            }
        }
        std::cout << "The searched data, " << data << " is not present in the list." << std::endl;
        return false;
    }
    else{
        return false;
    }
}


void LinkedList::traverse(char separator){
    if(isEmpty()){
        std::cout << "The list is empty." << std::endl;
    }

    else{
        Vertex *temp = HEAD;

        while (temp != nullptr){
            std :: cout << temp -> info << separator;
            temp = temp -> next;
        }
    }
    std::cout << std::endl;
}

Vertex* LinkedList :: getHead(){
    return HEAD;
}

Vertex* LinkedList :: getTail(){
    return TAIL;
}