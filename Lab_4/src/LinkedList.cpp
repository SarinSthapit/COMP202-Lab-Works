/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 4
*/

#pragma once
#include <iostream>
#include "../include/LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}


template <typename T>
bool LinkedList<T>::isEmpty(){
    return HEAD == nullptr && TAIL == nullptr;
}


template <typename T>
void LinkedList<T>::addToHead(T data){
    Vertex<T> *newVertex = new Vertex<T>(data, HEAD);
    HEAD = newVertex;
    if (TAIL == nullptr)
    {
        TAIL = HEAD;
    }
    std::cout << "Added to head: " << data << std::endl;
}


template <typename T>
void LinkedList<T>::addToTail(T data){
    Vertex<T> *newVertex = new Vertex<T>(data, NULL);
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


template <typename T>
void LinkedList<T>::add(T data, Vertex<T> *predecessor){
    Vertex<T> *newVertex = new Vertex<T>(data, predecessor->next);
    predecessor -> next = newVertex;
    std::cout << "Added: " << data << std::endl;
}


template <typename T>
T LinkedList<T>::removeFromHead(){
    if (!this->isEmpty())
    {
        Vertex<T> *vertexToDelete = new Vertex<T>;
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


template <typename T>
T LinkedList<T>:: removeFromTail(){
    if(!this->isEmpty()){
        Vertex<T> *vertexToDelete = new Vertex<T>;
        vertexToDelete = this -> TAIL;
        TAIL -> next = NULL;

        if(this->HEAD == this->TAIL){
            HEAD = NULL;
            TAIL = NULL;
        }

        else{
            Vertex<T> *secondlastVertex = new Vertex<T>;
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


template <typename T>
void LinkedList<T>:: remove(T data){
    Vertex<T> *current = new Vertex<T>;
    Vertex<T> * previous = new Vertex<T>;
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


template <typename T>
Vertex<T> *LinkedList<T>::retrieve(T data, Vertex<T> *outputVertexPointer){
    Vertex<T> *temp = new Vertex<T>;
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


template <typename T>
bool LinkedList<T>::search(T data){
    if(!this -> isEmpty()){
        Vertex<T> *newVertex = new Vertex<T>;
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


template <typename T>
void LinkedList<T>::traverse(char separator){
    if(isEmpty()){
        std::cout << "The list is empty." << std::endl;
    }

    else{
        Vertex<T> *temp = HEAD;

        while (temp != nullptr){
            std :: cout << temp -> info << separator;
            temp = temp -> next;
        }
    }
    std::cout << std::endl;
}

template <typename T>
Vertex<T> *LinkedList<T>:: getHead(){
    return HEAD;
}

template <typename T>
Vertex<T> *LinkedList<T>:: getTail(){
    return TAIL;
}