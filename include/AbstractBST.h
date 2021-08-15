#ifndef _ABSTRACTBST_H_
#define _ABSTRACTBST_H_

template <typename T>
class AbstractBST
{
public:
	//checks if BST is empty
	virtual bool isEmpty() = 0;
	virtual void insertKey(T key) = 0;
	virtual void deleteKey(T key) = 0;
	virtual void searchKey(T key) = 0;
	virtual void getMax() = 0;
	virtual void getMin() = 0;
	virtual void getInorder() = 0;
	virtual void getTree() = 0;
};

#endif