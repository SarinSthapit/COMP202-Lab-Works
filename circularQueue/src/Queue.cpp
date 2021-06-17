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
    if(n==0){
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
    if(isEmpty()){
        std :: cout << "The Queue is empty." << std :: endl;
    }
    
    else if (rear < front){
        std :: cout << "Circular Queue:" << std :: endl;
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
        std :: cout << "Circular Queue:" << std :: endl;
        for(int i = front+1; i<maxQueueSize ;i++){std :: cout << data[i]<<separator;}
        for(int j= 0; j<=front;j++){std :: cout << data[j] << separator;}
    }
    else{
        std :: cout << "Circular Queue:" << std :: endl;
        int k;
        for (k = front+1; k<=rear; k++){
            std :: cout << data [k] << separator;
        }
        std :: cout << std :: endl;
        std :: cout << std :: endl;

    }

}
