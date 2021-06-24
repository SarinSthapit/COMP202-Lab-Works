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
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void push(T value) = 0;
    virtual T pop() = 0;
    virtual T top() =0;
    virtual T getRear() = 0;
    virtual void display(char separator = ' ') = 0;
};

template <typename T>
class ArrayStack : public Stack <T>
{

private:
    T size;
    T * data;
    T rear;
    T front;


public:
    ArrayStack(int size): size(size), data(new T[size]), rear(-1), front(-1){}

    bool isEmpty(){
        if(front == rear == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(rear = size -1){
            return true;
        }
        else{
            return false;
        }
    }


    void push(T value){
        if(rear == size -1){
            std ::cout << "The Stack is full." << std :: endl;
        }
        else {
            rear++;
            data[rear] = value;
            std :: cout << "Inserted Element: " << value << std :: endl;
        }
    }

    T pop(){
        if(isEmpty()){
            std :: cout << "The Stack is empty" << std :: endl;
        }
        else{
            std::cout << "Removed Element: " << data[rear] << std::endl;
            data[rear] = 0;
            rear++;
        }
    }

    T top(){
        std :: cout << "TOP: ";
        return data[front + 1];
    }

    T getRear(){
        std :: cout << "REAR: ";
        return data[rear];
    }

    void display(char separator = ' '){
        if(front == rear == -1){
            std :: cout << "The Stack is empty" << std ::endl;
        }
        else{
            std :: cout << "Stack:" << std :: endl;
            for(int i= 0; i<=rear; i++){
                std :: cout << data[i] << separator;
            }
        }
    std :: cout << std :: endl;
    }

};
