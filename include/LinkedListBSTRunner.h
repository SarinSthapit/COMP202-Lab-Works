#include <iostream>
#include "AbstractBST.h"
#include "LinkedListBST.h"

void LinkedListBSTRunner()
{
    try
    {
        AbstractBST<int> *bst = new LinkedListBST<int>();
        std::cout << (bst->isEmpty() ? "\nBST is empty.\n" : "\nBST is not empty.\n") << std::endl;

        int elements[14] = {40, 20, 1, 70, 55, 23, 89, 34, 66, 2, 45, 17, 11, 60};

        for (int element : elements)
        {
            bst->insertKey(element);
        }

        std::cout << std::endl;

        bst->insertKey(17);
        bst->insertKey(7);

        bst->getTree();
        bst->getInorder();

        bst->getMax();
        bst->getMin();

        bst->searchKey(1);
        bst->searchKey(99);

        bst->deleteKey(11);
        bst->deleteKey(40);
        bst->deleteKey(60);
        bst->deleteKey(77);

        bst->getInorder();
        bst->getTree();
    }
    catch (const char *err)
    {
        std::cout << err << std::endl;
    }
}