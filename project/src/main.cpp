/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Mini-Project
*/
#include <iostream>
#include "circularLinkedList.h"
#include "Stack.h"

int main(){
    try{
        LinkedListStack a;
        if(a.isEmpty()){
            std::cout << "EMPTY." << std::endl;
        }
        else{
            std::cout << "NOT EMPTY." << std::endl;
        }

        if(a.isFull()){
            std::cout << "FULL." << std::endl;
        }
        else{
            std::cout << "NOT FULL." << std::endl;
        }
    }

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }
}