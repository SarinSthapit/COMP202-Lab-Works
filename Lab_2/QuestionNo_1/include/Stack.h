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

#pragma once
#include <iostream>

template <typename T>
class Stack
{

public:
    virtual ~Stack(){};
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void push(T element) = 0;
    virtual T pop() = 0;
    virtual T top() = 0;
    virtual void display(char separator = ' ') = 0;
};


template <typename T>
class ArrayStack : public Stack <T>
{

private:
    T size;
    T * data;
    int topIndex;


public:
    ArrayStack(int size): size(size), data(new T[size]), topIndex(-1){}

    ~ArrayStack(){
        delete [] data;
        std::cout << "Stack has been deleted." << std::endl;
    }

    bool isEmpty(){
        if(topIndex == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(topIndex == size -1){
            return true;
        }
        else{
            return false;
        }
    }


    void push(T element){
        if(!isFull()) {
            data[++topIndex] = element;
            std :: cout << "Pushed Element: " << element << std :: endl;
        }

        else{
            throw "The Stack is full.";
        }
    }

    T pop(){
        if(!isEmpty()){
            T toDelete = data[topIndex--];
            std::cout << "Poped Element: " << toDelete << std::endl;
            return toDelete;
        }
        else{
            throw "The Stack is empty";
        }
    }

    T top(){
        std :: cout << "TOP: ";
        return data[topIndex + 1];
    }

    void display(char separator = ' '){
        if(isEmpty()){
            std :: cout << "The Stack is empty" << std ::endl;
        }
        else{
            std :: cout << "Stack:" << std :: endl;
            for(int i= 0; i <= topIndex; i++){
                std :: cout << data[i] << separator;
            }
        }
    std :: cout << std :: endl;
    }

};
