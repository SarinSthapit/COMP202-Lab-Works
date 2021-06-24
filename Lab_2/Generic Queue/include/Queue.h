/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 2
Question No. 2
*/

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
    virtual T getBack() = 0;
    virtual void display(char separator = ' ') = 0;
};

template <typename T>
class ArrayQueue : public Queue <T>
{

private:
    T size;
    T * data;
    T back;
    T front;


public:
    ArrayQueue(int size): size(size), data(new T[size]), back(-1), front(-1){}

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


    void enqueue(T value){
        if(back == size -1){
            std ::cout << "The Queue is full." << std :: endl;
        }
        else {
            back++;
            data[back] = value;
            std :: cout << "Inserted Element: " << value << std :: endl;
        }
    }

    T dequeue(){
        if(isEmpty()){
            std :: cout << "The Queue is empty" << std :: endl;
        }
        else{
            front = front + 1;
            std::cout << "Removed Element: " << data[front] << std::endl;
            /* data[i] = 0;
            i++; */
        }
    }

    T getFront(){
        return data[front + 1];
    }

    T getBack(){
        return data[back];
    }

    void display(char separator = ' '){
        if(front == back == -1){
            std :: cout << "The Queue is empty" << std ::endl;
        }
        else{
            std :: cout << "Queue:" << std :: endl;
            for(int i= front+1; i<=back; i++){
                std :: cout << data[i] << separator;
            }
        }
    std :: cout << std :: endl;
    }

};
 