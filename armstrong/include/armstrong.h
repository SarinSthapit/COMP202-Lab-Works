#pragma once
#include <iostream>

class Queue
{

public:
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void enqueue(int value) = 0;
    virtual int dequeue() = 0;
    virtual int getFront() =0;
    virtual int getBack() = 0;
    virtual void display(char separator = ' ') = 0;
};

class ArrayQueue : public Queue
{

private:
    int size;
    int * data;
    int back;
    int front;


public:
    ArrayQueue(int size): size(size), data(new int[size]), back(-1), front(-1){}

    bool isEmpty(){
        if(front == back ==-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(back = size -1){
            return true;
        }
        else{
            return false;
        }
    }


    void enqueue(int value){
        if(back == size -1){
            std ::cout << "The Queue is full." << std :: endl;
        }
        else {
            back++;
            data[back] = value;
            std :: cout << "Inserted Element: " << value << std :: endl;
        }
    }

    int dequeue(){
        if(isEmpty()){
            std :: cout << "The Queue is empty" << std :: endl;
        }
        else{
            front = front + 1;
            std::cout << "Removed Element: " << data[front] << std::endl;
            return data[front];
        }
    }

    int getFront(){
        return data[front + 1];
    }

    int getBack(){
        return data[back];
    }

    void display(char separator = ' '){
        if(front == back == -1){
            std :: cout << "The Queue is empty" << std ::endl;
        }
        else{
            std :: cout << "Queue:" << std :: endl;
            for(int i= front +1; i<=back; i++){
                std :: cout << data[i] << separator;
            }
        }
    std :: cout << std :: endl;
    }

};
 