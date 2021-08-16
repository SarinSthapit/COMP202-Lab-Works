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
#include <vector>
#include "LinkedList.h"

template <typename T>
class Graph {
public:
    Graph(bool isDirectedGraph) : isDirectedGraph(isDirectedGraph) {}
    bool isEmpty();
    bool isDirected();
    void addVertex(Vertex <T> *newVertex);
    void addEdge(Vertex <T>*vertex1, Vertex<T> *vertex2);
    void removeVertex(Vertex<T> *vertexToRemove);
    void removeEdge(Vertex<T> *vertex1, Vertex<T> *vertex2);
    int numVertices();
    int numEdges();
    int indegree(Vertex<T> *vertex);
    int outdegree(Vertex<T> *vertex);
    int degree(Vertex<T> *vertex);
    void neighbours(Vertex<T> *vertex);
    bool neighbour(Vertex<T> *vertex1, Vertex<T> *vertex2);

    bool isVertex(Vertex<T> *vertex);
    void traverse(char separator1, char separator2);
    void randomGraph();

private:
    std::vector<LinkedList<T>*> vectorOfList;
    bool isDirectedGraph;
    int numV = 0;
    int numE = 0;
};

#include "../src/graph.cpp"
