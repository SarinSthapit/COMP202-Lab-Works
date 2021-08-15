/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 4
*/

//cd Lab_4
//cd build
//g++ ../src/main.cpp -I ../include/
//./a.exe

#include <iostream>
#include "../include/LinkedList.h"
#include "../include/graph.h"


int main(){
/*
DIRECTED GRAPH
*/ 
    Graph <char> g1(true);
    Vertex<char> *a = new Vertex<char>('a', nullptr);
    Vertex<char> *b = new Vertex<char>('b', nullptr);
    Vertex<char> *c = new Vertex<char>('c', nullptr);
    Vertex<char> *d = new Vertex<char>('d', nullptr);
    Vertex<char> *e = new Vertex<char>('e', nullptr);
    Vertex<char> *f = new Vertex<char>('f', nullptr);
    Vertex<char> *gh = new Vertex<char>('g', nullptr);
    Vertex<char> *h = new Vertex<char>('h', nullptr);
    Vertex<char> *i = new Vertex<char>('i', nullptr);
    Vertex<char> *j = new Vertex<char>('j', nullptr);   

    
    Graph <int> g2(false);
    Vertex<int> *k = new Vertex<int>(12, nullptr);
    Vertex<int> *l = new Vertex<int>(25, nullptr);
    Vertex<int> *m = new Vertex<int>(33, nullptr);
    Vertex<int> *n = new Vertex<int>(48, nullptr);
    Vertex<int> *o = new Vertex<int>(100, nullptr);
    try{
        std::cout << "DIRECTED GRAPH: "  << std::endl;
        if(g1.isEmpty()){
            std::cout << "The Graph is empty." << std::endl;
        }else{
            std::cout << "The Graph is not empty." << std::endl; 
        }

        if(g1.isDirected()){
            std::cout << "The Graph is directed." << std::endl;
        }else{
            std::cout << "The Graph is undirected." << std::endl;
        }
    
        g1.addVertex(a);
        g1.addVertex(b);
        g1.addVertex(c);
        g1.addVertex(d);
        g1.addVertex(e);
        g1.addVertex(f);
        g1.addVertex(gh);
        g1.addVertex(h);
        g1.addVertex(i);
        g1.addVertex(j);
        
        g1.addEdge(a, b);
        g1.addEdge(a, d);
        g1.addEdge(a, e);
        g1.addEdge(b, f);
        g1.addEdge(d, f);
        g1.addEdge(gh, h);
        g1.addEdge(b, c);
        g1.addEdge(f, a);
        g1.addEdge(j, e);
        g1.addEdge(e, f);
        g1.addEdge(d, b);
        g1.addEdge(gh, j);
        g1.addEdge(h, f);

        g1.removeVertex(e);

        g1.removeEdge(a, d);

        g1.indegree(a);
        g1.outdegree(a);
        g1.degree(a);
    
        g1.neighbours(a);
        g1.neighbour(a, b);
        g1.neighbour(a, c);  
    
        g1.numEdges();
        g1.numVertices();
    
        g1.traverse('-', '>'); 
        std::cout << std::endl;
        std::cout << std::endl;

/*
UNDIRECTED GRAPH
*/      std::cout << "UNDIRECTED GRAPH: "  << std::endl;
        if(g2.isEmpty()){
            std::cout << "The Graph is empty." << std::endl;
        }else{
            std::cout << "The Graph is not empty." << std::endl; 
        }

        if(g2.isDirected()){
            std::cout << "The Graph is directed." << std::endl;
        }else{
            std::cout << "The Graph is undirected." << std::endl;
        }
    
        g2.addVertex(k);
        g2.addVertex(l);
        g2.addVertex(m);
        g2.addVertex(n);
        g2.addVertex(o);

        if(g2.isEmpty()){
            std::cout << "The Graph is empty." << std::endl;
        }else{
            std::cout << "The Graph is not empty." << std::endl; 
        }
        
        
        g2.addEdge(k, l);
        g2.addEdge(m, n);
        g2.addEdge(k, n);
        g2.addEdge(k, m);

        g2.removeVertex(m);

        g2.removeEdge(k, l);

        g2.indegree(k);
        g2.outdegree(k);
        g2.degree(k);
    
        g2.neighbours(k);
        g2.neighbour(k, o);  
    
        g2.numEdges();
        g2.numVertices();
    
        g2.traverse('-', '>'); 
        std::cout << std::endl;


/*
RANDOM GRAPH
*/     
        Graph <int> g3(rand()%2);
        g3.randomGraph();
    }
    

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }
}