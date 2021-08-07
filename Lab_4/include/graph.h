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

class Graph {
public:
    Graph(bool isDirectedGraph) : isDirectedGraph(isDirectedGraph) {}
    bool isEmpty();
    bool isDirected();
    void addVertex(Vertex *newVertex);
    void addEdge(Vertex *vertex1, Vertex *vertex2);
    void removeVertex(Vertex *vertexToRemove);
    void removeEdge(Vertex *vertex1, Vertex *vertex2);
    int numVertices();
    int numEdges();
    int indegree(Vertex *vertex);
    int outdegree(Vertex *vertex);
    int degree(Vertex *vertex);
    void neighbours(Vertex *vertex);
    bool neighbour(Vertex *vertex1, Vertex *vertex2);

    bool isVertex(Vertex *vertex);
    void traverse(char separator1, char separator2);
    void randomGraph();

private:
    std::vector<LinkedList*> vectorOfList;
    bool isDirectedGraph;
    int numV = 0;
    int numE = 0;
};
