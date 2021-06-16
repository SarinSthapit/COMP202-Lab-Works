#pragma once
#include <iostream>


template <typename T>
class Queue
{

private:
    T size;
    T * data;
    T rear;
    T front;

public:
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void enqueue(T value) = 0;
    virtual T dequeue() = 0;
    virtual T getFront() =0;
    virtual T getRear() = 0;
    virtual void display(char separator = ' ') = 0;
};

template <typename T>
class ArrayQueue : public Queue <T>
{
public:
    ArrayQueue(int size): size(size), data(new T[size]), rear(-1), front(-1){}

    bool isEmpty(){
        if(front == rear ==-1){
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


    void enqueue(T value){
        if(rear == size -1){
            std ::cout << "The Queue is full." << std :: endl;
        }
        else {
            rear++;
            data[rear] = value;
            std :: cout << "Inserted Element: " << value << std :: endl;
        }
    }

    T pop(){
        if(isEmpty()){
            std :: cout << "The Queue is empty" << std :: endl;
        }
        else{
            std::cout << "Removed Element: " << data[front] << std::endl;
            data[front] = 0;
            front++;
        }
    }

    T getFront(){
        if(front == -1){
            std :: cout << "The Queue is empty" << std :: endl;
        }
        else{
            return data[front];
        }
    }

    T getRear(){
        if(front == -1){
            std ::cout << "The Queue is empty" << std ::endl;
        }
        else{
            return data[rear];
        }
    }

    void display(char separator = ' '){
        if(front == -1){
            std :: cout << "The Queue is empty" << std ::endl;
        }
        else{
            std :: cout << "Queue:" << std :: endl;
            for(int i= 0; i<size; i++){
                std :: cout << data[i] << separator;
            }
        }

    }

};


