/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 4
*/

//g++ -std=c++11  ../src/main.cpp ../src/graph.cpp ../src/LinkedList.cpp -I ../include/
//./a.exe

#include <iostream>
#include "../include/LinkedList.h"
#include "../include/graph.h"

int main(){
    Graph g(1);
    Vertex *a = new Vertex(1, nullptr);
    Vertex *b = new Vertex(2, nullptr);
    Vertex *c = new Vertex(3, nullptr);
    Vertex *d = new Vertex(4, nullptr);
    Vertex *e = new Vertex(5, nullptr);
    Vertex *f = new Vertex(6, nullptr);
    Vertex *gh = new Vertex(7, nullptr);
    Vertex *h = new Vertex(8, nullptr);
    Vertex *i = new Vertex(9, nullptr);
    Vertex *j = new Vertex(10, nullptr);    
    try{
        if(g.isEmpty()){
            std::cout << "The Graph is empty." << std::endl;
        }else{
            std::cout << "The Graph is not empty." << std::endl; 
        }

        if(g.isDirected()){
            std::cout << "The Graph is directed." << std::endl;
        }else{
            std::cout << "The Graph is undirected." << std::endl;
        }
    
        g.addVertex(a);
        g.addVertex(b);
        g.addVertex(c);
        g.addVertex(d);
        g.addVertex(e);
        g.addVertex(f);
        g.addVertex(gh);
        g.addVertex(h);
        g.addVertex(i);
        g.addVertex(j);

        g.addEdge(a, b);
        g.addEdge(a, d);
        g.addEdge(a, e);
        g.addEdge(b, f);
        g.addEdge(d, f);
        g.addEdge(gh, h);
        g.addEdge(b, c);
        g.addEdge(f, a);
        g.addEdge(j, e);
        g.addEdge(e, f);
        g.addEdge(d, b);
        g.addEdge(gh, j);
        g.addEdge(h, f);

        g.removeEdge(a, d);
        

        g.removeVertex(e);
    
        g.indegree(a);
        g.outdegree(a);
        g.degree(a);
    
        g.neighbours(a);
        g.neighbour(a, b);
        g.neighbour(a, c);  
    
        g.numEdges();
        g.numVertices();
    
        g.traverse('-', '>'); 
        std::cout << std::endl;
    
    
        Graph g2(rand()%2);
        g2.randomGraph();
    }
    

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }
}