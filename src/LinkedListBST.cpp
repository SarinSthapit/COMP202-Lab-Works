#include <iostream>
#include "LinkedListBST.h"

template <typename T>
LinkedListBST<T>::LinkedListBST() : root(NULL)
{
    std::cout << "\nA BST is created." << std::endl;
}

template <typename T>
LinkedListBST<T>::~LinkedListBST()
{
    delete root;
}

template <typename T>
bool LinkedListBST<T>::isEmpty()
{
    return this->root == NULL;
}

template <typename T>
void LinkedListBST<T>::insertKey(T key)
{
    std::cout << "Inserting : " << key << std::endl;
    Node<T> *newNode = new Node<T>(key, NULL, NULL);
    if (this->isEmpty())
    {
        this->root = newNode;
    }
    else
    {
        Node<T> *currentNode = root;
        Node<T> *insertionNode = NULL;
        while (currentNode != NULL)
        {
            insertionNode = currentNode;
            if (key == currentNode->data)
            {
                std::cout << key << " is already in BST. No duplication allowed." << std::endl;
                return;
            }
            else if (key < currentNode->data)
            {
                currentNode = currentNode->leftChild;
            }
            else
            {
                currentNode = currentNode->rightChild;
            }
        }

        if (key < insertionNode->data)
        {
            insertionNode->leftChild = newNode;
        }
        else
        {
            insertionNode->rightChild = newNode;
        }
    }
}

template <typename T>
void LinkedListBST<T>::deleteKey(T key)
{
    std::cout << "\nDeleting : " << key << std::endl;
    if (this->isEmpty())
    {
        throw "BST is empty.";
    }

    Node<T> *currentNode = this->root;
    Node<T> *previousNode = NULL;

    while (currentNode != NULL && currentNode->data != key)
    {
        previousNode = currentNode;
        if (key < currentNode->data)
            currentNode = currentNode->leftChild;
        else
            currentNode = currentNode->rightChild;
    }

    if (currentNode == NULL)
    {
        std::cout << key << " is not in BST." << std::endl;
        return;
    }

    //at most one child
    if (currentNode->leftChild == NULL || currentNode->rightChild == NULL)
    {
        Node<T> *_currentNode;
        if (currentNode->leftChild == NULL)
            _currentNode = currentNode->rightChild;
        else
            _currentNode = currentNode->leftChild;

        if (previousNode == NULL)
            this->root = _currentNode;

        if (currentNode == previousNode->leftChild)
            previousNode->leftChild = _currentNode;
        else
            previousNode->rightChild = _currentNode;

        delete currentNode;
    }
    else //two children
    {
        Node<T> *parentNode = NULL;
        Node<T> *tempNode;

        tempNode = currentNode->rightChild;
        while (tempNode->leftChild != NULL)
        {
            parentNode = tempNode;
            tempNode = tempNode->leftChild;
        }

        if (parentNode != NULL)
            parentNode->leftChild = tempNode->rightChild;
        else
            currentNode->rightChild = tempNode->rightChild;

        currentNode->data = tempNode->data;
        delete tempNode;
    }
}

template <typename T>
void LinkedListBST<T>::searchKey(T key)
{
    std::cout << "\nSearching for : " << key << std::endl;
    if (this->isEmpty())
    {
        throw "BST is empty.";
    }

    bool found = false;
    Node<T> *tempNode = this->root;
    while (tempNode != NULL)
    {
        if (key == tempNode->data)
        {
            found = true;
            break;
        }
        else if (key < tempNode->data)
        {
            tempNode = tempNode->leftChild;
        }
        else
        {
            tempNode = tempNode->rightChild;
        }
    }

    if (found)
    {
        std::cout << key << " is in BST." << std::endl;
    }
    else
    {
        std::cout << key << " is not in BST." << std::endl;
    }
}

template <typename T>
void LinkedListBST<T>::getMax()
{
    if (this->isEmpty())
    {
        throw "BST is empty.";
    }

    Node<T> *currentNode = this->root;
    while (currentNode->rightChild != NULL)
    {
        currentNode = currentNode->rightChild;
    }
    std::cout << "The max key is : " << currentNode->data << "\n"
              << std::endl;
}

template <typename T>
void LinkedListBST<T>::getMin()
{
    if (this->isEmpty())
    {
        throw "BST is empty.";
    }

    Node<T> *currentNode = this->root;
    while (currentNode->leftChild != NULL)
    {
        currentNode = currentNode->leftChild;
    }
    std::cout << "The min key is : " << currentNode->data << "\n"
              << std::endl;
}

template <typename T>
void LinkedListBST<T>::_getInorder(Node<T> *node)
{
    if (node != NULL)
    {
        _getInorder(node->leftChild);
        std::cout << node->data << ' ';
        _getInorder(node->rightChild);
    }
}

template <typename T>
void LinkedListBST<T>::getInorder()
{
    if (this->isEmpty())
    {
        throw "Tree is empty.";
    }

    std::cout << "\nInorder traversal yields : " << std::endl;
    this->_getInorder(this->root);
    std::cout << "\n"
              << std::endl;
}

template <typename T>
void LinkedListBST<T>::getTree()
{
    if (this->isEmpty())
    {
        std::cout << "BST is empty." << std::endl;
        return;
    }

    std::cout << "\nBST is : " << std::endl;
    _getTree(5, this->root);
    std::cout << std::endl;
}

template <typename T>
void LinkedListBST<T>::_getTree(int space, Node<T> *node)
{
    int SPACE = 5;
    if (node == NULL)
    {
        return;
    }
    space += SPACE;
    _getTree(space, node->rightChild);
    std::cout << std::endl;
    for (int i = SPACE; i < space; i++)
        std::cout << " ";
    std::cout << node->data << "\n";
    _getTree(space, node->leftChild);
}