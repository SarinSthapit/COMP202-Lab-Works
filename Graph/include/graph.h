#pragma once
#include <iostream>

class Node{
public :
    int a, b, value;
    Node *down , *right;
    Node ( ) : down (nullptr), right(nullptr) {}
};


class Vertex{
public:
    int data;
    Vertex(int data) :data(data) {}
};


class Graph{
public:
    /* Graph(int na, int nb);
    void insert( int i , int j , int data ) ;
    void display( ) ; */

    bool isEmpty();
    bool isDirected();
    void addVertex(Vertex newVertex);
    void addEdge(Vertex v1,Vertex v2);
    void removeVertex(Vertex vertexToRemove);
    void removeEdge(Vertex v1, Vertex v2);
    int numVertices();
    int numEdges();
    int indegree(Vertex v);
    int outdegree(Vertex v);
    int degree(Vertex v);
    int neighbours(Vertex v);
    bool neighbour(Vertex v1, Vertex v2);

private: 
    Node *HEAD;
};