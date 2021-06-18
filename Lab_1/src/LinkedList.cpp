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
    Node *newNode = new Node;
    newNode -> info = data;
    newNode -> next = HEAD;
    HEAD = newNode;
    if (TAIL == nullptr)
    {
        TAIL = HEAD;
    }
}


void LinkedList::addToTail(int data){
    Node *newNode = new Node;
    newNode -> info = data;
    newNode -> next = NULL;
    if(HEAD == nullptr)
    {
        HEAD = newNode;
        TAIL = newNode;
    }

    else{
        TAIL->next = newNode;
        TAIL = TAIL->next;
    }
}


void LinkedList::add(int data, Node *predecessor){

    std :: cout << predecessor -> next << std :: endl;
    Node *newNode = new Node;
    newNode -> info = data;
    newNode -> next = predecessor -> next;
    predecessor -> next = newNode;
    std :: cout << predecessor->info << "," << predecessor -> next << std :: endl;
    std :: cout << newNode->info << "," << newNode -> next << std :: endl;
    std :: cout << newNode -> next -> info << std :: endl;
}


int LinkedList::removeFromHead(){
    if (!this->isEmpty())
    {
        Node *nodeToDelete = new Node;
        nodeToDelete = this -> HEAD;
        int data = nodeToDelete->info;
        this->HEAD = nodeToDelete->next;

        delete nodeToDelete;

        if (HEAD == nullptr)
        {
            TAIL = nullptr;
        }

        return data;
    }  
    else 
    {
        std :: cout << "The list is empty. removed from head" << std :: endl;
        return 0;
    }
}


int LinkedList :: removeFromTail(){
    if(!this->isEmpty()){
        Node *nodeToDelete = new Node;
        nodeToDelete = this -> TAIL;
        TAIL -> next = NULL;

        if(this->HEAD == this->TAIL){
            HEAD = NULL;
            TAIL = NULL;
        }

        else{
            Node *secondlastNode = new Node;
            secondlastNode = this -> HEAD;
            while(secondlastNode -> next != TAIL){
                secondlastNode = secondlastNode -> next;
            }
            TAIL = secondlastNode;
            secondlastNode -> next = NULL;
        }
        return nodeToDelete -> info;
        delete nodeToDelete;
    }

    else{
        std::cout<<"The list is empty. removed from tail"<<std::endl;
        return 0;
    }

}


void LinkedList :: remove(int data){
    Node *current = new Node;
    Node * previous = new Node;
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
        std :: cout << "Data not found." << std :: endl;         
    }

    else{
        std :: cout << "Removed from the Linked List: " << current -> info << std :: endl;
        previous -> next = current -> next;
        delete current; 
    }

} 


Node *LinkedList::retrieve(int data, Node *outputNodePointer){
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
        return outputNodePointer;
    }
}


bool LinkedList::search(int data){
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


void LinkedList::traverse(char separator){
    if(isEmpty()){
        std::cout<<"The list is empty. traversed"<<std::endl;
    }

    else{
        Node *temp = HEAD;

        while (temp != nullptr){
            std :: cout << temp -> info << separator;
            temp = temp -> next;
        }
    }
    std::cout<<std::endl;
}

Node LinkedList :: getHead(){
    return *HEAD;
}

Node LinkedList :: getTail(){
    return *TAIL;
}