#include <iostream>
#include "Queue.h"

Queue :: Queue(int maxQueueSize)
{
    //data = new int[maxQueueSize];
    front = -1;
    rear = -1;
    this -> maxQueueSize = maxQueueSize;
    n = 0;
}

bool Queue :: isEmpty(){
    if(front == rear && n%maxQueueSize == 0){
        return true;
    }
    else{
        return false;
    }   
}

bool Queue :: isFull(){
   if(n<maxQueueSize){
        return false;
    }
    
    else{
        return true;
    }
}

void Queue :: enqueue(int value){
   
    if(!isFull()){
        rear = (rear + 1) % maxQueueSize;
        data[rear] = value;
        n = n + 1;
    }
    
    else{
        std::cout << "The Queue is full." << std :: endl;
        }
}

int Queue :: dequeue(){
   if(!isEmpty()){
        front = (front + 1) % maxQueueSize;
        n = n-1;
        return data[front];
    }
    else{
        std :: cout << "The Queue is empty." << std :: endl;
    } 
}

int Queue :: getFront(){
    return front;
}

int Queue :: getRear(){
   return rear;
}

int Queue :: getn(){
    return n;
}

void Queue :: display (char separator){
    std :: cout << data[0] << "and" << data[1];
    
    if (rear < front){
        std :: cout << "Circular Queuea:" << std :: endl;
        int i;
        for (i = front+1; i< maxQueueSize; i++){
            std :: cout << data[i] << separator;
        }
        int j;
        for(j = 0; j<=rear; j++){
            std :: cout << data[j] << separator;
        }
        std :: cout << std :: endl;
    }
    else if (front == rear){
        for(int i = front+1; i<maxQueueSize ;i++){std :: cout << data[i]<<separator;}
        for(int j= 0; j<=front;j++){std :: cout << data[j] << separator;}
        //std :: cout << data[3] << "," << data[4] << "," << data[0] << "," << data[1] << "," << data[2] << "," ;
    }
    else{
        std :: cout << "Circular Queueb:" << std :: endl;
        int k;
        for (k = front+1; k<=rear; k++){
            std :: cout << data [k] << separator;
        }
        std :: cout << std :: endl;
        std :: cout << std :: endl;

    }

}

/*#include <iostream>
#include "Queue.h"

Queue :: Queue(int maxQueueSize)
{
    front = -1;
    rear = -1;
    this -> maxQueueSize = maxQueueSize;

}

bool Queue :: isEmpty(){
    if(rear == front == -1){
        return true;
    }
    else{
        return false;
    }   
}

bool Queue :: isFull(){
    if(front ==  (rear + 1) % maxQueueSize){
        return true;
    }
    else{
        return false;
    }
}

void Queue :: enqueue(int value){
    if(front == -1){
        front = rear = 0;
        data[rear] = value;
    }
    else if ((front == 0 && rear == maxQueueSize-1) || (rear == (front-1)%(maxQueueSize-1))){
        std :: cout << "The Queue is full." << std :: endl;
    }
    else if (rear == maxQueueSize - 1 && front != 0){
        rear = 0;
        data[rear] = value;
    }
    else{
        rear++;
        data[rear] = value;
    }
}

int Queue :: dequeue(){
   if(!isEmpty()){
        front = (front + 1) % maxQueueSize;
        return data[front];
    }
    else{
        std :: cout << "The Queue is empty." << std :: endl;
    } 
}

int Queue :: getFront(){
    return data[front];
}

int Queue :: getRear(){
    return data[rear];
}

void Queue :: display (char separator){
    if(front == 0 && rear == 0){
        std :: cout << "The Queue is empty." << std :: endl;
    }else if (rear >= front){
        for (int i = front; i<= rear; i++){
            std :: cout << data[i] << separator;
        }
    }else{
        for (int i = front; i< maxQueueSize; i++){
            std :: cout << data [i] << separator;
        }

        for (int i = 0; i<=rear; i++){
            std :: cout << data [i] << separator;
        }
    }

} */