/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 2
Question No. 1
*/

#include <iostream>
#include "Stack.h"

int main()
{
    std::cout << std::endl;
    std ::cout << "STACK OPERATIONS:" << std ::endl;
    Stack<int> *intStack = new ArrayStack<int>(10);
    try
    {
        intStack->push(98);
        intStack->push(1198);
        intStack->push(5);
        intStack->push(33);
        intStack->push(25);
        intStack->push(1);
        intStack->push(32);
        intStack->push(4);
        intStack->push(5);
        intStack->push(6);

        std::cout << std::endl;

        intStack->display(',');
        std::cout << std::endl;

        intStack->pop();
        intStack->pop();
        intStack->pop();
        intStack->pop();

        std ::cout << std ::endl;

        if(intStack->isEmpty()){
            std::cout << "The Stack is empty." << std::endl;
        }else{
            std::cout << "The Stack is not empty." << std::endl;
        }

        if(intStack->isFull()){
            std::cout << "The Stack is full." << std::endl;
        }else{
            std::cout << "The Stack is not full." << std::endl;
        }

        std ::cout << std ::endl;

        std::cout << intStack->top() << std ::endl;

        std::cout << std::endl;

        intStack->display(',');
        std::cout << std::endl;
        delete intStack;
    }

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }

    std::cout << std ::endl;
    std::cout << std ::endl;

    std::cout << "STACK OPERATIONS:" << std ::endl;
    Stack<char> *charStack = new ArrayStack<char>(5);
    try
    {
        charStack->push('a');
        charStack->push('b');
        charStack->push('c');
        charStack->push('d');
        charStack->push('e');
        
        std::cout << std::endl;

        charStack->pop();
        charStack->pop();
        charStack->pop();
        charStack->pop();
        charStack->pop();

        std ::cout << std ::endl;

        if(charStack->isEmpty()){
            std::cout << "The Stack is empty." << std::endl;
        }else{
            std::cout << "The Stack is not empty." << std::endl;
        }

        if(charStack->isFull()){
            std::cout << "The Stack is full." << std::endl;
        }else{
            std::cout << "The Stack is not full." << std::endl;
        }


        std ::cout << std ::endl;
        charStack->push('f');
        charStack->push('g');

        std::cout << std ::endl;

        std ::cout << charStack->top() << std ::endl;
    
        std::cout << std::endl;
        
        charStack->display(',');
        std::cout << std::endl;
        delete charStack;
    }

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }

    std ::cout << std ::endl;
}
