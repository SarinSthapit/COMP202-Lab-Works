#ifndef _LINKED_LIST_BST_H_
#define _LINKED_LIST_BST_H_

#include "AbstractBST.h"

template <typename T>
class Node
{
public:
    T data;
    Node *leftChild;
    Node *rightChild;
    Node() : leftChild(NULL), rightChild(NULL) {}
    Node(T data, Node<T> *leftChild, Node<T> *rightChild) : data(data), leftChild(leftChild), rightChild(rightChild) {}
};

template <typename T>
class LinkedListBST : public AbstractBST<T>
{
private:
    Node<T> *root;
    void _getInorder(Node<T> *node);
    void _getTree(int space, Node<T> *node);

public:
    LinkedListBST();
    ~LinkedListBST();
    bool isEmpty();
    void insertKey(T key);
    void deleteKey(T key);
    void searchKey(T key);
    void getMax();
    void getMin();
    void getInorder();
    void getTree();
};

#include "../src/LinkedListBST.cpp"

#endif