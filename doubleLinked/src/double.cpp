#include <iostream>
#include "double.h"

doublyLinkedList :: doublyLinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}


Node *doublyLinkedList :: getHead(){
    return HEAD;
}

Node *doublyLinkedList :: getTail(){
    return TAIL;
}


bool doublyLinkedList :: isEmpty()
{
    if( HEAD == nullptr && TAIL == nullptr){
        return true;
    }
    else{
        return false;
    }
}


void doublyLinkedList::addToHead(int data){
    Node *newNode = new Node;
    newNode -> info = data;
    newNode -> next = HEAD;
    newNode -> prev = NULL;

    //HEAD = newNode;
    if (TAIL == nullptr)
    {
        TAIL = HEAD;
    }
    else{
        HEAD->prev = newNode;
        HEAD = newNode;
    }
    std::cout << "Added to head: " << data << std::endl;
}


void doublyLinkedList::addToTail(int data){
    Node *newNode = new Node;
    newNode -> info = data;
    newNode -> next = NULL;
    newNode -> prev = TAIL;
    //TAIL->next = newNode;
    //TAIL = newNode;
    if(HEAD == nullptr)
    {
        HEAD = newNode;
        TAIL = newNode;
    }

    else{
        TAIL->next = newNode;
        TAIL = newNode;
    }
    std::cout << "Added to tail: " << data << std::endl;
}

void doublyLinkedList :: insertion(int data, Node *predecessor){
    Node *newNode = new Node;
    newNode -> info = data;
    newNode -> prev = predecessor;
    newNode -> next = predecessor -> next;    
    predecessor -> next = newNode;
    //predecessor -> prev = predecessor -> prev;
    if (newNode->next != NULL){
        newNode->next->prev = newNode;
    }

    if(TAIL == HEAD || predecessor == TAIL){
        TAIL = newNode;
    }

    std::cout << "Inserted at right: " << data << std::endl;
}

void doublyLinkedList :: insertionLeft(int data, Node *successor){
    Node *newNode = new Node;
    newNode -> info = data;
    newNode -> next = successor;
    newNode -> prev = successor -> prev;    
    successor -> prev = newNode;
    //successor -> next = successor -> next;
    if (newNode->prev != NULL){
        newNode->prev->next = newNode;
    }

    if(TAIL == HEAD || successor == TAIL){
        TAIL = newNode;
    }

    std::cout << "Inserted at left: " << data << std::endl;
}



int doublyLinkedList::removeFromHead(){
    if (!this->isEmpty())
    {
        Node *nodeToDelete = new Node;
        nodeToDelete = this -> HEAD;
        int data = nodeToDelete->info;
        nodeToDelete->next->prev = NULL;
        this->HEAD = nodeToDelete->next;
        

        delete nodeToDelete;

        if (HEAD == nullptr)
        {
            TAIL = nullptr;
        }
        std::cout << "Removed from head: " << data << std::endl;
        return data;
    }  
    else 
    {
        throw "The list is empty.";
        
    }
}


int doublyLinkedList :: removeFromTail(){
    if(!this->isEmpty()){
        Node *nodeToDelete = new Node;
        nodeToDelete = this -> TAIL;
        TAIL -> next = NULL;

        if(this->HEAD == this->TAIL){
            HEAD = NULL;
            TAIL = NULL;
        }

        else{
           /*  Node *secondlastNode = new Node;
            secondlastNode = this -> HEAD;
            while(secondlastNode -> next != TAIL){
                secondlastNode = secondlastNode -> next;
            } */
            TAIL = nodeToDelete -> prev;
            TAIL -> next = NULL;
        }
        std::cout << "Removed from tail: " << nodeToDelete -> info << std::endl;
        return nodeToDelete -> info;
        delete nodeToDelete;
    }

    else{
        throw "The list is empty.";
    }

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
        current -> next -> prev = current -> prev;
        delete current; 
    }

}


Node *doublyLinkedList :: retrieve(int data, Node *outputNodePointer){
    Node *temp = new Node;
    temp = HEAD;
    while(temp != NULL && temp -> info != data){
        temp = temp -> next;
    }

    if(temp==NULL){
        throw "The data is not present.";
    }

    else{
        outputNodePointer = temp;
        return outputNodePointer;
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

    else{
        throw "The list is empty.";
    }
}


void doublyLinkedList :: forwardTraverse(char separator){
    if(isEmpty()){
        std::cout<<"The list is empty. traversed"<<std::endl;
    }

    else{
        Node *temp = new Node;
        temp = HEAD;
        std :: cout << "Traversing in forward direction: "<< std ::endl;
        while (temp != nullptr){
            std :: cout << temp -> info << separator;
            temp = temp -> next;
        }
        //delete temp;
    }
    std::cout<<std::endl;
}




void doublyLinkedList :: reverseTraverse(char separator){
    if(isEmpty()){
        std::cout<<"The list is empty. traversed"<<std::endl;
    }

    else{
        Node *temp = new Node;
        temp = TAIL;
        
        
        std :: cout << "Traversing in reverse direction: "<< std ::endl;
        while (temp != nullptr){
            std :: cout << temp -> info << separator;
            temp = temp -> prev;
        } 
        //delete temp;
    }
    std::cout<<std::endl;
}



/* void doublyLinkedList :: setHead(int data){
    Node *newNode = new Node;
    newNode -> info = data;
    newNode -> next = HEAD;
    newNode ->prev = nullptr;
    HEAD = newNode;
    if (TAIL == nullptr)
    {
        TAIL = HEAD;
    }
} */



