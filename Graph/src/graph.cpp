#include <iostream>
#include "graph.h"

bool Graph::isEmpty() {
    return false;
}


bool Graph::isDirected() {
    return false;
}


void Graph::addVertex(Vertex v) {

}


void Graph::addEdge(Vertex v, Vertex v2) {

}


void Graph::removeVertex(Vertex remove) {

}


void Graph::removeEdge(Vertex v1, Vertex v2) {

}


int Graph::numVertices() {
    return 0;
}


int Graph::numEdges() {
    return 0;
}


int Graph::indegree(Vertex v) {
    return 0;
}


int Graph::outdegree(Vertex v) {
    return 0;
}


int Graph::degree(Vertex v) {
    return 0;
}


int Graph::neighbours(Vertex v) {
    //return 0;
}


bool Graph::neighbour(Vertex v1, Vertex v2) {
    return false;
}



/* 
Graph::Graph( int na , int nb )
{
    HEAD = new Node();
    HEAD->a = na ;
    HEAD->b = nb ;
    HEAD->value = 0 ;
    Node *prevNode = HEAD;
    for ( int i = 1 ; i <= na ; i++)
    {
        Node *node = new Node() ;
        node->a = i ;
        prevNode->down = node ;
        prevNode = node ;
    }
}


void Graph::insert(int i, int j, int data){
    if( data == 0 )
    {
        return ;
    }
    Node *node = new Node ( ) ;
    node->a = i ;
    node->b = j ;
    node->value = data ;
    Node *d = HEAD->down ;
    while (d)
    {
    if ( d->a == i )
    {
        Node *r = d ;
        while ( r->right){
            if( r->right->b > j ){
                node->right = r->right;
                r->right = node ;
                HEAD->value++;
                return;
            }
            r = r->right;
        }
        r->right=node ;
        HEAD->value++;
        break;
    }
        d = d->down ;
    }
}
void Graph::display( ){
    Node *d = HEAD->down ;
    while (d)
    {
        Node *r = d->right;
        int nb = 1 ;
        while ( r ){
            for ( ; nb < r->b; nb++){
                std :: cout << 0 << "\t";
            }
            std :: cout << r->value << "\t";
            r = r->right ;
            nb++;
        }

        for ( ; nb <= HEAD->b ; nb++){
            std :: cout << 0 << "\t";
        }
        std::cout <<std::endl;
        d = d->down ;
    }
} */