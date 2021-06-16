#pragma once
#include <iostream>


template <typename T>
class Queue
{

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

private:
    T size;
    T * data;
    T rear;
    T front;


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

    T dequeue(){
        if(isEmpty()){
            std :: cout << "The Queue is empty" << std :: endl;
        }
        else{
            int i =0;
            std::cout << "Removed Element: " << data[i] << std::endl;
            data[i] = 0;
            i++;
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
        if(front == rear == -1){
            std :: cout << "The Queue is empty" << std ::endl;
        }
        else{
            std :: cout << "Queue:" << std :: endl;
            for(int i= 0; i<=rear; i++){
                std :: cout << data[i] << separator;
            }
        }
    std :: cout << std :: endl;
    }

};
 