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

int main(){
    std :: cout << "STACK OPERATIONS:" << std :: endl;
    Stack <int> *intStack = new ArrayStack<int>(10);

    intStack->push(98);
    intStack->push(5);
    intStack->push(33);
    intStack->push(25);
    intStack->push(1);
    intStack->push(32);
    intStack->push(4);
    intStack->push(5);
    intStack->push(6);

    intStack->display(',');

    intStack->pop();

    std :: cout << intStack->top() << std :: endl;
    intStack->display(',');

    std :: cout << std :: endl;
    std :: cout << std :: endl;

    /* std :: cout << "USER INPUT STACK OPERATIONS: " << std :: endl;
    std::cout << "Choose your option: " << std::endl;
    std :: cout << "1. push\n2. pop\n3. Empty or not\n4. Full or not\n5. Top element\n6. Rear Element\n" << std :: endl;

    int n;
    int size;
    std::string datatype;
    template <typename T>

    std::cout << "Choose your option: " << std::endl;
    std::cin >> n;

    std::cout << "Choose your datatype: " << std::endl;
    std::cin >> T;

    std::cout << "Enter the size of the data: " << std::endl;
    std::cin >> size; 

    Stack <T> *intStack = new ArrayStack<int>(size);

    if ( n == 1){
        datatype data;
        std::cout << "Enter the data: ";
        std::cin >> data;
    }
    else if (n == 2){

    }
    else if (n == 3){

    }
    else if (n == 4){

    }
    else if (n == 5){

    }
    else if (n == 6){

    }
    else{
        std::cout << "Invalid Operation." << std::endl;
    } */
}
