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
#include "../include/graph.h"
#include "../include/LinkedList.h"


bool Graph::isEmpty() {
   if(vectorOfList.empty()){
       return true;
   }else{
       return false;
   }
}


bool Graph::isDirected() {
    if(isDirectedGraph){
        return true;
    }else{
        return false;
    }
}


void Graph::addVertex(Vertex *newVertex) {
   if(this->isVertex(newVertex)){
       throw "The Vertex already exists.";
   } 

   LinkedList *list = new LinkedList;
   list->addToTail(newVertex->info);
   vectorOfList.emplace_back(list);
   numV++;
   std::cout << "Vertex added: " << newVertex -> info << std::endl; 
}


void Graph::addEdge(Vertex *vertex1, Vertex *vertex2) {
    if(!this->isVertex(vertex1)){
       throw "The first vertex does not exists.";
    } 

    if(!this->isVertex(vertex2)){
       throw "The second vertex does not exists.";
    } 

    for(auto vectorPointer : vectorOfList){
    Vertex *tempVertex1 =new Vertex;
    tempVertex1 = vectorPointer->getHead();

    Vertex *tempVertex2 =new Vertex;
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


void Graph::removeVertex(Vertex *vertexToRemove) {
    int count = 0;

    if(!this->isVertex(vertexToRemove)){
        
       throw "The vertex does not exists.\n";
    }else if(isEmpty()){
        
        throw"The Graph is empty.\n";
    }else{
        std::vector<LinkedList *>::iterator vectorPointer;
        for(vectorPointer = vectorOfList.begin(); vectorPointer !=vectorOfList.end(); vectorPointer++){
            Vertex *tempVertex =new Vertex;
            tempVertex = (*vectorPointer)->getHead();

            if(tempVertex->info == vertexToRemove->info){
                vectorOfList.erase(vectorPointer);
            }
        }
        for(auto vectorPointer : vectorOfList){
            
            Vertex *tempVertex2 = new Vertex;
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


void Graph::removeEdge(Vertex *vertex1, Vertex *vertex2) {
    if(!this->isVertex(vertex1)){
       throw "The first vertex does not exists.\n";
    } 

    if(!this->isVertex(vertex2)){
       throw "The second vertex does not exists.\n";
    } 

    for(auto vectorPointer : vectorOfList){
        Vertex *tempVertex =new Vertex;
        tempVertex = vectorPointer->getHead();

        if(tempVertex->info == vertex1->info){
            Vertex *newVertex =new Vertex;
            newVertex = vectorPointer->getHead();
            while(newVertex != nullptr){
                if(newVertex->info == vertex2->info){
                    vectorPointer->remove(vertex2->info);
                    std::cout << "Removed Edge from" << vertex1->info <<" to " << vertex2->info << "\n" << std::endl;
                    numE--;
                    break;
                }
                newVertex = newVertex -> next;
            }
        }

        if(!this->isDirected()){
            if(tempVertex->info == vertex2->info){
            Vertex *newVertex =new Vertex;
            newVertex = vectorPointer->getHead();
            while(newVertex != nullptr){
                if(newVertex->info == vertex1->info){
                    vectorPointer->remove(vertex1->info);
                     std::cout << "Removed Edge between" << vertex1->info <<" to " << vertex2->info << "\n" << std::endl;
                    numE--;
                    break;
                }
                newVertex = newVertex -> next;
            }
        }
        }
    }
}


int Graph::numEdges() {
    std::cout << "The number of edges are: " << numE << std::endl;
    return numE; 
}


int Graph::indegree(Vertex *vertex) {
    if(!this->isVertex(vertex)){
       throw "The vertex does not exists.";
    }
    if(!this->isDirected()){
        int count = 0;
        for(auto vectorPointer: vectorOfList){
        Vertex *tempVertex = new Vertex;
        tempVertex = vectorPointer->getHead();
            if(tempVertex->info == vertex->info){
                while(tempVertex != nullptr){
                    tempVertex = tempVertex -> next;
                    count++;
                }
            }
        }
        std::cout << "The indegree of given vertex is: " << count << "\n" << std::endl;
        return count;
    }else{
        int count = -1;
        for(auto vectorPointer: vectorOfList){
            Vertex *tempVertex = new Vertex;
            tempVertex = vectorPointer->getHead();
            while(tempVertex != nullptr){
                if(tempVertex->info == vertex->info){
                    count++;
                }    
                tempVertex = tempVertex -> next;
            }
        }
        std::cout << "The indegree of given vertex is: " << count << "\n" << std::endl;
        return count;
    }
}


int Graph::outdegree(Vertex *vertex) {
    if(!this->isVertex(vertex)){
       throw "The vertex does not exists.";
    }

    int count =0;
    for(auto vectorPointer: vectorOfList){
        Vertex *tempVertex = new Vertex;
        tempVertex = vectorPointer->getHead();
        if(tempVertex->info == vertex->info){
            while(tempVertex != nullptr){
                tempVertex = tempVertex -> next;
                count++;
            }
        }
    }
    std::cout << "The outdegree of given vertex is: " << count << "\n" << std::endl;
    return count;
}


int Graph::degree(Vertex *vertex) {
    if(!this->isVertex(vertex)){
       throw "The vertex does not exists.";
    }

    if(!this->isDirected()){
        int count = 0;
        count = this->outdegree(vertex);
        std::cout << "The degree of given vertex is: " << count << "\n" << std::endl;
        return count;
    }else{
        int count = 0;
        count = this->indegree(vertex) + this->outdegree(vertex);
        std::cout << "The degree of given vertex is: " << count << "\n" << std::endl;
        return count;
    }
}

void Graph::neighbours(Vertex *vertex) {
    if(!this->isVertex(vertex)){
       throw "The vertex does not exists.";
    }

    for(auto vectorPointer : vectorOfList){
        Vertex *tempVertex =new Vertex;
        tempVertex = vectorPointer->getHead();

        Vertex *tempVertex2 =new Vertex;
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


bool Graph::neighbour(Vertex *vertex1, Vertex *vertex2) {
    if(!this->isVertex(vertex1)){
       throw "The first vertex does not exists.";
    } 

    if(!this->isVertex(vertex2)){
       throw "The second vertex does not exists.";
    } 
    for(auto vectorPointer : vectorOfList){
        Vertex *tempVertex =new Vertex;
        tempVertex = vectorPointer->getHead();

        Vertex *tempVertex2 =new Vertex;
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

int Graph::numVertices() {
    std::cout << "The number of vertices are: " << numV << "\n" << std::endl;
    return numV; 
}

bool Graph::isVertex(Vertex *vertex){
    for(auto vectorPointer : vectorOfList){
        Vertex *temp = new Vertex;
        temp = vectorPointer->getHead();
        if(temp->info == vertex->info){
            return true;
        }
    }

    return false;
}

void Graph::traverse(char separator1, char separator2){
    if(isEmpty()){
        throw"The Graph is empty.";
    }

    std::cout << "GRAPH:" << std::endl;
    for(auto vectorPointer : vectorOfList){
        Vertex *temp = new Vertex;
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



void Graph::randomGraph(){
    std::cout << "\nRANDOM GRAPH:" << std::endl;
    
    int t = rand()%20;
    int count = 0;
    int repeat = 0;
    Vertex *randomtemp1 = new Vertex;
    Vertex *randomtemp2 = new Vertex;
    for(int i = 1; i < t; i++){
        Vertex *a = new Vertex(i, nullptr);
        if(!isVertex(a)){
            this->addVertex(a);
            count++;
        } 
    }

    for(int j= 1; j<count; j++){
        Vertex *temp1 = new Vertex;
        Vertex *temp2 = new Vertex;

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


