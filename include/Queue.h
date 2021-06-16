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
    virtual T peek() =0;
    virtual T getRear() = 0;
    virtual void display(char separator = ' ') = 0;
};

template <typename T>
class ArrayStack : public Stack <T>
{
public:
    ArrayStack(int size): size(size), data(new T[size]), rear(-1), front(-1){}

    bool isEmpty(){
        if(front == rear){
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
            std::cout << "Removed Element: " << data[front] << std::endl;
            data[front] = 0;
            front++;
        }
    }

    T peek(){
        if(front == -1){
            std :: cout << "The Stack is empty" << std :: endl;
        }
        else{
            return data[front];
        }
    }

    T getRear(){
        if(front == -1){
            std ::cout << "The Stack is empty" << std ::endl;
        }
    }

    void display(char separator = ' '){
        if(front == -1){
            std :: cout << "The Stack is empty" << std ::endl;
        }
        else{
            std :: cout << "Stack:" << std :: endl;
            for(int i= 0; i<size; i++){
                std :: cout << data[i] << separator;
            }
        }

    }

private:
    T size;
    T * data;
    T rear;
    T front;

};


