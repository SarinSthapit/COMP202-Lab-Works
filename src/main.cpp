#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main(){
    Stack <int> *intStack = new ArrayStack<int>(5);
    intStack->push(9);
}