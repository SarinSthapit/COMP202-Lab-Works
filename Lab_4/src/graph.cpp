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
#include "../include/graph.h"
#include "../include/LinkedList.h"

template <typename T>
bool Graph<T>::isEmpty() {
   if(vectorOfList.empty()){
       return true;
   }else{
       return false;
   }
}


template <typename T>
bool Graph<T>::isDirected() {
    if(isDirectedGraph){
        return true;
    }else{
        return false;
    }
}


template <typename T>
void Graph<T>::addVertex(Vertex<T> *newVertex) {
   if(this->isVertex(newVertex)){
       throw "The Vertex already exists.";
   } 

   LinkedList<T> *list = new LinkedList<T>;
   list->addToTail(newVertex->info);
   vectorOfList.emplace_back(list);
   numV++;
   std::cout << "Vertex added: " << newVertex -> info << std::endl; 
}


template <typename T>
void Graph<T>::addEdge(Vertex<T> *vertex1, Vertex<T> *vertex2) {
    if(!this->isVertex(vertex1)){
       throw "The first vertex does not exists.";
    } 

    if(!this->isVertex(vertex2)){
       throw "The second vertex does not exists.";
    } 

    for(auto vectorPointer : vectorOfList){
    Vertex<T> *tempVertex1 =new Vertex<T>;
    tempVertex1 = vectorPointer->getHead();

    Vertex<T> *tempVertex2 =new Vertex<T>;
    tempVertex2 = vectorPointer->getHead();

        if(tempVertex1->info == vertex1->info){
            vectorPointer->addToTail(vertex2->info);
            numE++;
            std::cout<<"Edge added from: " << vertex1->info << "-->" << vertex2->info << "\n" << std::endl;
        }

        if(!this->isDirected()){
            if(tempVertex2->info == vertex2->info){
            vectorPointer->addToTail(vertex1->info);
            numE++;
            std::cout<<"Edge added from: " << vertex2->info << "-->" << vertex1->info << "\n" << std::endl;
            }
        } 
    }   
}


template <typename T>
void Graph<T>::removeVertex(Vertex<T> *vertexToRemove) {
    int count = 0;

    if(!this->isVertex(vertexToRemove)){
        
       throw "The vertex does not exists.\n";
    }else if(isEmpty()){
        
        throw"The Graph is empty.\n";
    }else{
        typename std::vector<LinkedList<T> *>::iterator vectorPointer;
        for(vectorPointer = vectorOfList.begin(); vectorPointer !=vectorOfList.end(); vectorPointer++){
            Vertex<T> *tempVertex =new Vertex<T>;
            tempVertex = (*vectorPointer)->getHead();

            if(tempVertex->info == vertexToRemove->info){
                vectorOfList.erase(vectorPointer);
            }
        }
        for(auto vectorPointer : vectorOfList){
            
            Vertex<T> *tempVertex2 = new Vertex<T>;
            tempVertex2 = vectorPointer->getHead();
            while(tempVertex2 != NULL){
                if(tempVertex2->info == vertexToRemove->info){
                    vectorPointer->remove(vertexToRemove->info);
                    break;
                }
                tempVertex2 = tempVertex2 -> next;
            }
        }
    }
    numV--;
}


template <typename T>
void Graph<T>::removeEdge(Vertex<T> *vertex1, Vertex<T> *vertex2) {
    if(!this->isVertex(vertex1)){
       throw "The first vertex does not exists.\n";
    } 

    if(!this->isVertex(vertex2)){
       throw "The second vertex does not exists.\n";
    } 

    for(auto vectorPointer : vectorOfList){
        Vertex<T> *tempVertex =new Vertex<T>;
        tempVertex = vectorPointer->getHead();

        if(tempVertex->info == vertex1->info){
            Vertex<T> *newVertex =new Vertex<T>;
            newVertex = vectorPointer->getHead();
            while(newVertex != nullptr){
                if(newVertex->info == vertex2->info){
                    vectorPointer->remove(vertex2->info);
                    std::cout << "Removed Edge from " << vertex1->info <<" to " << vertex2->info << "\n" << std::endl;
                    numE--;
                    break;
                }
                newVertex = newVertex -> next;
            }
        }

        if(!this->isDirected()){
            if(tempVertex->info == vertex2->info){
            Vertex<T> *newVertex =new Vertex<T>;
            newVertex = vectorPointer->getHead();
            while(newVertex != nullptr){
                if(newVertex->info == vertex1->info){
                    vectorPointer->remove(vertex1->info);
                     std::cout << "Removed Edge between " << vertex1->info <<" to " << vertex2->info << "\n" << std::endl;
                    numE--;
                    break;
                }
                newVertex = newVertex -> next;
            }
        }
        }
    }
}


template <typename T>
int Graph<T>::numEdges() {
    std::cout << "The number of edges are: " << numE << std::endl;
    return numE; 
}

template <typename T>
int Graph<T>::indegree(Vertex<T> *vertex) {
    if(!this->isVertex(vertex)){
       throw "The vertex does not exists.";
    }
    if(!this->isDirected()){
        int count = 0;
        for(auto vectorPointer: vectorOfList){
        Vertex<T> *tempVertex = new Vertex<T>;
        tempVertex = vectorPointer->getHead();
            if(tempVertex->info == vertex->info){
                while(tempVertex != nullptr){
                    tempVertex = tempVertex -> next;
                    count++;
                }
            }
        }
        std::cout << "The indegree of " << vertex->info << " is: " << count << "\n" << std::endl;
        return count;
    }else{
        int count = -1;
        for(auto vectorPointer: vectorOfList){
            Vertex<T> *tempVertex = new Vertex<T>;
            tempVertex = vectorPointer->getHead();
            while(tempVertex != nullptr){
                if(tempVertex->info == vertex->info){
                    count++;
                }    
                tempVertex = tempVertex -> next;
            }
        }
        std::cout << "The indegree of " << vertex->info << " is: " << count << "\n" << std::endl;
        return count;
    }
}


template <typename T>
int Graph<T>::outdegree(Vertex<T> *vertex) {
    if(!this->isVertex(vertex)){
       throw "The vertex does not exists.";
    }

    int count =0;
    for(auto vectorPointer: vectorOfList){
        Vertex<T> *tempVertex = new Vertex<T>;
        tempVertex = vectorPointer->getHead();
        if(tempVertex->info == vertex->info){
            while(tempVertex != nullptr){
                tempVertex = tempVertex -> next;
                count++;
            }
        }
    }
    std::cout << "The outdegree of " << vertex->info << " is: " << count << "\n" << std::endl;
    return count;
}


template <typename T>
int Graph<T>::degree(Vertex<T> *vertex) {
    if(!this->isVertex(vertex)){
       throw "The vertex does not exists.";
    }

    if(!this->isDirected()){
        int count = 0;
        count = this->outdegree(vertex);
        std::cout << "The degree of " << vertex->info << " is: " << count << "\n" << std::endl;
        return count;
    }else{
        int count = 0;
        count = this->indegree(vertex) + this->outdegree(vertex);
        std::cout << "The degree of " << vertex->info << " is: " << count << "\n" << std::endl;
        return count;
    }
}


template <typename T>
void Graph<T>::neighbours(Vertex<T> *vertex) {
    if(!this->isVertex(vertex)){
       throw "The vertex does not exists.";
    }

    for(auto vectorPointer : vectorOfList){
        Vertex<T> *tempVertex =new Vertex<T>;
        tempVertex = vectorPointer->getHead();

        Vertex<T> *tempVertex2 =new Vertex<T>;
        tempVertex2 = vectorPointer->getHead();

        if(tempVertex->info == vertex->info){
            std::cout << "The neighbours of the given vertex are: "; 
            while(tempVertex->next != nullptr){
                tempVertex = tempVertex -> next;
                std::cout << tempVertex->info << ",";
            }
            

        }

        if(!this->isDirected()){
            while(tempVertex2->next != nullptr){
                if(tempVertex2->info == vertex->info){
                    std::cout << tempVertex2->info << std::endl;
                }
                tempVertex2 = tempVertex2 -> next;
            }
        }
    } 
    std::cout << std::endl;

}


template <typename T>
bool Graph<T>::neighbour(Vertex<T> *vertex1, Vertex<T> *vertex2) {
    if(!this->isVertex(vertex1)){
       throw "The first vertex does not exists.";
    } 

    if(!this->isVertex(vertex2)){
       throw "The second vertex does not exists.";
    } 
    for(auto vectorPointer : vectorOfList){
        Vertex<T> *tempVertex =new Vertex<T>;
        tempVertex = vectorPointer->getHead();

        Vertex<T> *tempVertex2 =new Vertex<T>;
        tempVertex2 = vectorPointer->getHead();
        if(tempVertex->info == vertex1->info){
            while(tempVertex != nullptr){
                if(tempVertex->info == vertex2->info){
                     std::cout << "The given vertices are neighbours. \n" << std::endl;
                    return true;
                }
                tempVertex = tempVertex -> next;
            }
        }

        if(tempVertex2->info == vertex2->info){
            while(tempVertex2 != nullptr){
                if(tempVertex2->info == vertex1->info){
                     std::cout << "The given vertices are neighbours.\n" << std::endl;
                    return true;
                }
                tempVertex2 = tempVertex2 -> next;
            }
        }
    }
    std::cout << "The given vertices are not neighbours.\n" << std::endl;
    return false;
}


template <typename T>
int Graph<T>::numVertices() {
    std::cout << "The number of vertices are: " << numV << "\n" << std::endl;
    return numV; 
}


template <typename T>
bool Graph<T>::isVertex(Vertex<T> *vertex){
    for(auto vectorPointer : vectorOfList){
        Vertex<T> *temp = new Vertex<T>;
        temp = vectorPointer->getHead();
        if(temp->info == vertex->info){
            return true;
        }
    }

    return false;
}


template <typename T>
void Graph<T>::traverse(char separator1, char separator2){
    if(isEmpty()){
        throw"The Graph is empty.";
    }

    std::cout << "GRAPH:" << std::endl;
    for(auto vectorPointer : vectorOfList){
        Vertex<T> *temp = new Vertex<T>;
        temp = vectorPointer -> getHead();
        while(temp != nullptr){
            if(this->isDirected()){
                std::cout << " " << temp->info << " " << separator1 << separator2;
            }else{
                std::cout << " " << temp->info << " " << separator1;
            }
            
            temp = temp -> next;
        }
        std::cout << std::endl;
    }

}


template <typename T>
void Graph<T>::randomGraph(){
    std::cout << "\nRANDOM GRAPH:" << std::endl;
    
    int t = rand()%20;
    int count = 0;
    int repeat = 0;
    Vertex<T> *randomtemp1 = new Vertex<T>;
    Vertex<T> *randomtemp2 = new Vertex<T>;
    for(int i = 1; i < t; i++){
        Vertex<T> *a = new Vertex<T>(i, nullptr);
        if(!isVertex(a)){
            this->addVertex(a);
            count++;
        } 
    }

    for(int j= 1; j<count; j++){
        Vertex<T> *temp1 = new Vertex<T>;
        Vertex<T> *temp2 = new Vertex<T>;

        for(auto vectorPointer : vectorOfList){   
            temp1 = vectorPointer->getHead();
            if(temp1->info == rand()%10){
                randomtemp1 = temp1;
            }
        }

        for(auto vectorPointer : vectorOfList){
            temp2 = vectorPointer->getHead();
            if(temp2->info == rand()%11){
                randomtemp2 = temp2;
                while(temp2 != nullptr){
                    if(randomtemp1->info == temp2->info){
                        repeat++;
                    }
                    temp2 = temp2 -> next;
                }   
            }
        }

        if(repeat <=2){
            this->addEdge(randomtemp1, randomtemp2);
        }
        
    }
    this->traverse('-', '>');
}


